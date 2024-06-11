// Fill out your copyright notice in the Description page of Project Settings.


#include "PathingFunctionLibrary.h"

void UPathingFunctionLibrary::SmoothPathPoints(const TArray<FVector>& Points, int32 Iterations, float Alpha, float MaxDotProduct, TArray<FVector>& OutPoints)
{
    if (Iterations == 0 || Points.Num() < 2)
    {
        OutPoints = Points;
        return;
    }

    int size = Points.Num();

    // Applying Chaikin's algorithm to smooth the array
    TArray<FVector> newPoints;
    newPoints.Add(Points[0]);
    for (size_t i = 0; i < size - 1; ++i) {
        const FVector& current = Points[i];
        const FVector& next = Points[i + 1];

        // Calculate intermediate points
        FVector p1(Alpha * current[0] + (1 - Alpha) * next[0], Alpha * current[1] + (1 - Alpha) * next[1], Alpha * current[2] + (1 - Alpha) * next[2]);
        FVector p2((1 - Alpha) * current[0] + Alpha * next[0], (1 - Alpha) * current[1] + Alpha * next[1], (1 - Alpha) * current[2] + Alpha * next[2]);

        // Add intermediate points to the smoothed array
        newPoints.Add(p1);
        newPoints.Add(p2);
    }
    newPoints.Add(Points[size - 1]);

    if (Iterations == 1) OutPoints = newPoints;
    else SmoothPathPoints(newPoints, Iterations - 1, Alpha, MaxDotProduct, OutPoints);
}


void UPathingFunctionLibrary::CheckForHeightDifferences(const TArray<FVector>& InPoints, TArray<FVector>& OutPoints, UWorld* World)
{   
    OutPoints = InPoints;
    for (int i = 1; i < InPoints.Num(); i++)
    {
        if (!(i + 1 < InPoints.Num() - 1)) return;
        FVector Current = InPoints[i];
        FVector Next = InPoints[i + 1];
        FHitResult Hit;
        World->LineTraceSingleByChannel(Hit, Current, Next, ECollisionChannel::ECC_Visibility);
        if (Next.Z > Current.Z && Hit.bBlockingHit && FVector::Dist2D(Current, Next) < 300)
        {
            OutPoints.Insert(FVector(Current.X,Current.Y,Next.Z), i + 1);
            continue;
        }
        else
        {
            FVector2D Current2D(Current.X, Current.Y);
            FVector2D Next2D(Next.X, Next.Y);
            if (Next.Z < Current.Z && Current2D != Next2D && Hit.bBlockingHit && FVector::Dist2D(Current,Next) < 300)
            {
                OutPoints.Insert(FVector(Next.X, Next.Y, Current.Z), i + 1);
            }
        }
    }
}

void UPathingFunctionLibrary::AddAveragePoints(const TArray<FVector>& InPoints, float MaxSectionLenght, TArray<FVector>& OutPoints, UWorld* World)
{
    OutPoints = InPoints;
    for (int i = 0; i < OutPoints.Num(); i++)
    {
        if (!(i + 1 <= OutPoints.Num() - 1)) return;
        FVector Current = OutPoints[i];
        FVector Next = OutPoints[i + 1];
        while (FVector::Distance(Current,Next) > MaxSectionLenght)
        {
            FVector TempPoint = Current + ((Next - Current) / 2);            
            OutPoints.Insert((TempPoint), i + 1);
            Current = OutPoints[i];
            Next = OutPoints[i + 1];
        }
    }
}
