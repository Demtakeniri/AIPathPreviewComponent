// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "PathPreviewSettings.h"
#include "GameFramework/Actor.h"
#include "PathPreviewActor.generated.h"

UCLASS()
class AIPATHPREVIEWCOMPONENT_API APathPreviewActor : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UProceduralMeshComponent* ProceduralMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
		UPathPreviewSettings* Settings;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Internal Variables")
		TArray<FVector> PathPoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Internal Variables")
		TArray<FVector> Vertices;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Internal Variables")
		TArray<int> Triangles;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Internal Variables")
		TArray<FVector> Normals;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Internal Variables")
		TArray<FVector> CrossUpVectors;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Internal Variables")
		TArray<FVector2D> UV0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Internal Variables")
		TArray<FVector2D> UV1;

	APathPreviewActor();
public:
	void BeginPlay() override;
	/// <summary>
	/// Calculates the up vectors for each point in order to generate the mesh facing the right direction
	/// </summary>
	UFUNCTION(BlueprintCallable)
		virtual void CalculateUpVectors();
	/// <summary>
	/// foreach point in the path array, calculates four other Vectors.
	/// </summary>
	UFUNCTION(BlueprintCallable)
		virtual void CalculateVertices();
	/// <summary>
	/// Add All vertices to the array of triangles in the right order
	/// </summary>
	UFUNCTION(BlueprintCallable)
		void MakeTriangles();
		int ReturnInt(const int& ref);
	/// <summary>
	/// Function used to make the points stick to the ground in case of heigth differences between multiple points, it takes each point
	/// and perform a LineTrace starting above the point and ending below it to see if there's walkable ground where the point should lie.
	/// </summary>
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void ProjectPointsOnGround();
		void ProjectPointsOnGround_Implementation();
	/// <summary>
	/// Function that generate the whole procedural mesh section, calling all other function in order.
	/// </summary>
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void GenerateVerticesAndBuildMesh();
		void GenerateVerticesAndBuildMesh_Implementation();
	/// <summary>
	/// The function that Clears the mesh and sets the PathPoints before calling "GenerateVertices()".
	/// </summary>
	/// <param name="InPoints">
	/// The given array of points.
	/// </param>
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void ShowPathPreview(const TArray<FVector>& InPoints);
		void ShowPathPreview_Implementation(const TArray<FVector>& InPoints);
	/// <summary>
	/// Function that clears the procedural mesh section.
	/// </summary>
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void ClearMesh();
		void ClearMesh_Implementation();
	/// <summary>
	/// Function used in case the mesh has to be affected by difficult terrain. uses a LineTrace to see where the given point is located.
	/// In case it is located on a difficult terrain, it reads the type of terrain and sets the UV1 value of that point to the 
	/// corresponding UV1 value.
	/// </summary>
	/// <param name="Current">
	/// The point to consider
	/// </param>
	/// <param name="IsEdgeArray">
	/// bool to differentiate between mid-array and edge-array
	/// </param>
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void PopulateUV1(FVector Current, bool IsEdgeArray);
		void PopulateUV1_Implementation(FVector Current, bool IsEdgeArray);

	void Tick(float DeltaTime) override;
};
