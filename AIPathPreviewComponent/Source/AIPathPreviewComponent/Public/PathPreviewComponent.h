// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PathPreviewActor.h"
#include "Components/ActorComponent.h"
#include "PathPreviewComponent.generated.h"


UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AIPATHPREVIEWCOMPONENT_API UPathPreviewComponent : public UActorComponent
{
	GENERATED_BODY()
public:	
	/// <summary>
	/// Tick to always update the path preview mesh
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool AlwaysShow;
	/// <summary>
	/// Reference to the path preview actor that this component will spawn on BeginPlay.
	/// </summary>
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		APathPreviewActor* PathPreviewActor;
	/// <summary>
	/// Function to Call when you want to build the path preview.
	/// </summary>
	/// <param name="Start">The movement Start point</param>
	/// <param name="End">The movement End point</param>
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void CalculatePathAndShowPreview(FVector Start, FVector End);
		void CalculatePathAndShowPreview_Implementation(FVector Start, FVector End);
	/// <summary>
	/// Function to use instead of CalculateAndShowPreview if you already have the array of points.
	/// </summary>
	/// <param name="InPoints">The array of points</param>
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void ShowPreviewWithPoints(const TArray<FVector>& InPoints);
		void ShowPreviewWithPoints_Implementation(const TArray<FVector>& InPoints);
	// Sets default values for this component's properties
	UPathPreviewComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
