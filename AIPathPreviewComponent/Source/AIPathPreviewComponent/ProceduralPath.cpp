// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralPath.h"

// Sets default values
AProceduralPath::AProceduralPath()
{
	PrimaryActorTick.bCanEverTick = true;
	mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Mesh"));
}

// Called when the game starts or when spawned
void AProceduralPath::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProceduralPath::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProceduralPath::PostActorCreated()
{
	Super::PostActorCreated();
	CreateTriangle();
}

void AProceduralPath::PostLoad()
{
	Super::PostLoad();
	CreateTriangle();
}

void AProceduralPath::CreateTriangle()
{
	TArray<FVector> Vertices;
	Vertices.Add(FVector(0, 0, 0));
	Vertices.Add(FVector(0, 100, 0));
	Vertices.Add(FVector(100, 0, 0));
	TArray<int32> Triangles;
	Triangles.Add(0);
	Triangles.Add(1);
	Triangles.Add(2);
	TArray<FVector> Normals;
	Normals.Add(FVector(1, 0, 0));
	Normals.Add(FVector(1, 0, 0));
	Normals.Add(FVector(1, 0, 0));
	TArray<FVector2D> UV0;
	UV0.Add(FVector2D(0, 0));
	UV0.Add(FVector2D(10, 0));
	UV0.Add(FVector2D(0, 10));
	TArray<FProcMeshTangent> Tangents;
	Tangents.Add(FProcMeshTangent(0, 1, 0));
	Tangents.Add(FProcMeshTangent(0, 1, 0));
	Tangents.Add(FProcMeshTangent(0, 1, 0));
	TArray<FLinearColor> VertexColors;
	VertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
	VertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
	VertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));

	mesh->CreateMeshSection_LinearColor(0, Vertices,Triangles,Normals,UV0,VertexColors,Tangents,false);
}

