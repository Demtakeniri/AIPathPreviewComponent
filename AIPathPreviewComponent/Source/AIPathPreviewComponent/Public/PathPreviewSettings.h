// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Materials/MaterialInstance.h"
#include "Engine/DataAsset.h"
#include "PathPreviewSettings.generated.h"

	
UCLASS()
class AIPATHPREVIEWCOMPONENT_API UPathPreviewSettings : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	/// <summary>
	/// Tick if the path preview color should be affected by difficult terrain
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ConsiderDifficultTerrain;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> GroundCollision;
	/// <summary>
	/// Tick if height differences in your game are not "natural" and handled with nav proxys 
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ConsiderNavLinkProxys;
	/// <summary>
	///Set to true if you want the system to smooth the mesh, this will result in a lot more points beeing
	///created.
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Path Smoothing")
	bool ShouldSmooth;
	/// <summary>
	/// Result of a Dot Product between two points, if it exceeds this value, the mesh will be smoothed in the specific point.
	///	Deafaluted to 0.5 = 45 degrees angle.
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Path Smoothing", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
		float SmoothingFactor = 0.5;
	/// <summary>
	/// If the angle between two points gets smoothed, this value controls the position of the two newly created smoothing points.
	/// Closer to 1 = closer to the angle point, more tight and precise.
	/// Closer to 0 = away from the angle point, wider and less precise.
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Path Smoothing", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
		float PointLerpFactor;
	/// <summary>
	/// Width of the mesh.
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Look")
		float LineWidth;
	/// <summary>
	/// Max Lenght of a single section of the mesh, if the distance between two points exceeds this value, the section will be split in two.
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Look")
		float MaxSectionLenght;
	/// <summary>
	/// The Material that will be applied to the path mesh.
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Look")
		UMaterialInstance* MeshMaterial;
};
