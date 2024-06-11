// Fill out your copyright notice in the Description page of Project Settings.


#include "PathPreviewActor.h"
#include "PathingFunctionLibrary.h"
#include "DifficultTerrainCollision.h"
#include "Kismet/KismetSystemLibrary.h"

void APathPreviewActor::BeginPlay()
{
	Super::BeginPlay();
}
// Sets default values
APathPreviewActor::APathPreviewActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	ProceduralMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProceduralMesh"));
	ProceduralMesh->SetupAttachment(RootComponent);	
}

void APathPreviewActor::CalculateUpVectors()
{
	CrossUpVectors.Empty();
	for (int i = 0; i < PathPoints.Num(); i++)
	{
		if(i + 1 <= PathPoints.Num() - 1)
		{
			FVector Current = PathPoints[i];
			FVector Next = PathPoints[i + 1];
			if(FMath::IsNearlyEqual(Current.Z,Next.Z))
			{
				CrossUpVectors.Insert(FVector::UpVector, i);
			}
			else
			{
				if(FVector2D(Current.X,Current.Y).Equals(FVector2D(Next.X,Next.Y),1))
				{
					for (int j = i + 1; j < PathPoints.Num();  j++)
					{
						if(!FVector2D(PathPoints[j].X, PathPoints[j].Y).Equals(FVector2D(PathPoints[i].X, PathPoints[i].Y),1))
						{
							FVector CrossVector = FVector(PathPoints[j].X, PathPoints[j].Y, 0) - FVector(PathPoints[i].X, PathPoints[i].Y, 0);
							CrossVector.Normalize();
							CrossVector = CrossVector * -1;
							CrossUpVectors.Insert(CrossVector, i);
							break;
						}
					}
				}
				else
				{
					FVector CrossVector = FVector(PathPoints[i + 1].X, PathPoints[i + 1].Y, 0) - FVector(PathPoints[i].X, PathPoints[i].Y, 0);
					CrossVector.Normalize();
					if(PathPoints[i + 1].Z >= PathPoints[i].Z)
					{
						CrossVector = CrossVector * -1;
						CrossUpVectors.Insert(CrossVector, i);
					}
					else
					{
						CrossUpVectors.Insert(CrossVector, i);
					}
				}
			}
		}
		else
		{
			CrossUpVectors.Add(FVector::UpVector);
		}
	}
}

void APathPreviewActor::CalculateVertices()
{
	auto World = GetWorld();
	FVector LastCrossProd;
	for (int i = 0; i < PathPoints.Num(); i++)
	{
		FVector Current = PathPoints[i];
		//Check if the point we are considering is not the last of the array.
		if(i + 1 < PathPoints.Num())
		{
			FVector Next = PathPoints[i + 1];
			FVector Dir = Next - Current;
			Dir.Normalize();
			if(i <= CrossUpVectors.Num() - 1)
			{
				LastCrossProd = FVector::CrossProduct(Dir, CrossUpVectors[i]);
				LastCrossProd.Normalize();
			}	
			FVector RightVert = Current + (LastCrossProd * Settings->LineWidth);
			FVector LeftVert = Current + (LastCrossProd * (Settings->LineWidth* -1));
			//Check if this is the first iteration, if so we do not need to duplicate vertices.
			if(i == 0)
			{
				Vertices.Add(RightVert);
				Vertices.Add(LeftVert);
				UV0.Add(FVector2D(1, 0));
				UV0.Add(FVector2D(0, 0));
				//Populate UV1 array if the mesh should consider difficult terrain
				if (Settings->ConsiderDifficultTerrain) 
				{
					PopulateUV1(Current, true);
				}
			}
			else
			{
				//Duplicate vertices and UVs to spread the material in a tiled way evenly.
				Vertices.Add(RightVert);
				Vertices.Add(LeftVert);
				Vertices.Add(RightVert);
				Vertices.Add(LeftVert);
				UV0.Add(FVector2D(1, 1));
				UV0.Add(FVector2D(0, 1));
				UV0.Add(FVector2D(1, 0));
				UV0.Add(FVector2D(0, 0));
				//Populate UV1 array if the mesh should consider difficult terrain
				if (Settings->ConsiderDifficultTerrain)
				{
					PopulateUV1(Current, false);
				}
				
			}
		}
		else
		{
			//since this is the last iteration we don't have to duplicate vertices and UVs.
			FVector RightVert = Current + (LastCrossProd * Settings->LineWidth);
			FVector LeftVert = Current + (LastCrossProd * (Settings->LineWidth * -1));
			Vertices.Add(RightVert);
			Vertices.Add(LeftVert);
			UV0.Add(FVector2D(1, 1));
			UV0.Add(FVector2D(0, 1));
			//Populate UV1 array if the mesh should consider difficult terrain
			if (Settings->ConsiderDifficultTerrain)
			{
				PopulateUV1(Current, true);
			}
		}
	}
}

void APathPreviewActor::MakeTriangles()
{
	Triangles.Empty();
	Normals.Empty();
	TArray<int> temp;

	for (int i = 0; i <= ((Vertices.Num() - 2) * 3); i++)
	{
		temp.Empty();
		int NewIndex = i * 2;
		temp.Add(NewIndex);
		temp.Add(NewIndex + 3);
		temp.Add(NewIndex + 2);
		temp.Add(NewIndex);
		temp.Add(NewIndex + 1);
		temp.Add(NewIndex + 3);
		Triangles.Append(temp);
	}
}

void APathPreviewActor::ProjectPointsOnGround_Implementation()
{
	auto World = GetWorld();
	for (int i = 1; i < PathPoints.Num(); i++)
	{
		FVector Current = PathPoints[i];
		FVector Previous = PathPoints[i - 1];
		if (FVector2D(Current.X, Current.Y).Equals(FVector2D(Previous.X, Previous.Y), 1)) continue;
		FHitResult Hit;
		World->LineTraceSingleByChannel(Hit, Current + (FVector::UpVector * 100000), Current + (FVector::DownVector * 100000), Settings->GroundCollision);
		if(Hit.bBlockingHit)
		{
			PathPoints[i] = FVector(Hit.ImpactPoint.X, Hit.ImpactPoint.Y, Hit.ImpactPoint.Z + 0.05f);
		}
	}
}

void APathPreviewActor::GenerateVertices_Implementation()
{
	auto World = GetWorld();
	Vertices.Empty();
	UV0.Empty();
	UV1.Empty();
	if(PathPoints.Num() > 2)
	{
		UPathingFunctionLibrary::CheckForHeightDifferences(PathPoints, PathPoints,World);
	}
	UPathingFunctionLibrary::AddAveragePoints(PathPoints, Settings->MaxSectionLenght, PathPoints,World);
	if (PathPoints.Num() > 3 && Settings->ShouldSmooth)
	{
		UPathingFunctionLibrary::SmoothPathPoints(PathPoints, 2, Settings->PointLerpFactor, Settings->SmoothingFactor, PathPoints);
	}
	if(!Settings->ConsiderNavLinkProxys)
	{
		ProjectPointsOnGround();
	}
	CalculateUpVectors();
	CalculateVertices();
	MakeTriangles();
	TArray<FVector2D> EmptyArray;
	ProceduralMesh->CreateMeshSection(0, Vertices, Triangles, Normals, UV0, UV1,EmptyArray,EmptyArray, TArray<FColor>(), TArray<FProcMeshTangent>(), false);
	ProceduralMesh->SetMaterial(0, Settings->MeshMaterial);
}

void APathPreviewActor::ShowPathPreview_Implementation(const TArray<FVector>& InPoints)
{
	ClearMesh();
	PathPoints = InPoints;
	GenerateVertices();
}

void APathPreviewActor::ClearMesh_Implementation()
{
	ProceduralMesh->ClearMeshSection(0);
}


void APathPreviewActor::PopulateUV1_Implementation(FVector Current, bool IsEdgeArray)
{
	auto World = GetWorld();
	FHitResult hit;
	World->LineTraceSingleByChannel(hit, Current + FVector(0, 0, 300), Current, Settings->DifficultTerrainCollision);
	if (hit.bBlockingHit)
	{
		auto other = Cast<ADifficultTerrainCollision>(hit.GetActor());
		if (other)
		{
			switch (other->TerraintType)
			{
			case ETerrainType::SLOWING:
				UV1.Add(FVector2D(0.75, 0));
				UV1.Add(FVector2D(0.75, 0));
				if (IsEdgeArray) break;
				UV1.Add(FVector2D(0.75, 0));
				UV1.Add(FVector2D(0.75, 0));
				break;
			case ETerrainType::DAMAGING:
				UV1.Add(FVector2D(1, 0));
				UV1.Add(FVector2D(1, 0));
				if (IsEdgeArray) break;
				UV1.Add(FVector2D(1, 0));
				UV1.Add(FVector2D(1, 0));
				break;
			default:
				break;
			}
		}
	}
	else
	{
		UV1.Add(FVector2D(0, 0));
		UV1.Add(FVector2D(0, 0));
		if (IsEdgeArray) return;
		UV1.Add(FVector2D(0, 0));
		UV1.Add(FVector2D(0, 0));
	}
}

void APathPreviewActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
