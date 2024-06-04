// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PathingFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class AIPATHPREVIEWCOMPONENT_API UPathingFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/// <summary>
	/// Function that uses the Chaikin's Algorithm to smooth out angles of the given path.
	/// </summary>
	/// <param name="Points"> The Path points
	/// </param>
	/// <param name="Iterations"> Number of Iterations to do. (More Iterations = Smoother curves but more expensive operation)
	/// </param>
	/// <param name="Alpha"> Distance from a point where to create the two smoothing points. (Closer to 1 means closer to the point)
	/// </param>
	/// <param name="MaxDotProduct"> How hard an angle has to be in order to be smoothed out by the system (currently not used)
	/// </param>
	/// <param name="OutPoints"> Out parameter containing the new points
	/// </param>
	UFUNCTION(BlueprintCallable)
		static void SmoothPathPoints(const TArray<FVector>& Points, int32 Iterations, float Alpha,float MaxDotProduct,TArray<FVector>& OutPoints);
	/// <summary>
	/// Function that cycle the array of points to spot HeightDifferences.
	/// </summary>
	/// <param name="InPoints">The given Path Points.
	/// </param>
	/// <param name="OutPoints"> Out Parameter containing the new points.
	/// </param>
	/// <param name="World"> Reference to the world
	/// </param>
	UFUNCTION(BlueprintCallable)
		static void CheckForHeightDifferences(const TArray<FVector>& InPoints, TArray<FVector>& OutPoints, UWorld* World);
	/// <summary>
	/// Function that cehcks the array of points and adds average points in case two of them are too far apart.
	/// </summary>
	/// <param name="InPoints"> The array of points to inspecct
	/// </param>
	/// <param name="MaxSectionLenght"> The Lenght that needs to be reached between two points for the system to create an intermediate one.
	/// </param>
	/// <param name="OutPoints"> Out Paramenter containing the new points.
	/// </param>
	/// <param name="World"> Reference to the World
	/// </param>
	UFUNCTION(BlueprintCallable)
		static void AddAveragePoints(const TArray<FVector>& InPoints, float MaxSectionLenght, TArray<FVector>& OutPoints, UWorld* World);
};
