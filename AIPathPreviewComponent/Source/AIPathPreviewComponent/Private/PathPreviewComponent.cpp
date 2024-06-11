// Fill out your copyright notice in the Description page of Project Settings.


#include "PathPreviewComponent.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"

void UPathPreviewComponent::CalculatePathAndShowPreview_Implementation(FVector Start, FVector End)
{
	if(PathPreviewActor)
	{
		UNavigationPath* Path = UNavigationSystemV1::FindPathToLocationSynchronously(this, Start, End);		
		PathPreviewActor->ShowPathPreview(Path->PathPoints);
	}
}

void UPathPreviewComponent::ShowPreviewWithPoints_Implementation(const TArray<FVector>& InPoints)
{
	PathPreviewActor->ShowPathPreview(InPoints);
}


// Sets default values for this component's properties
UPathPreviewComponent::UPathPreviewComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UPathPreviewComponent::BeginPlay()
{
	Super::BeginPlay();	
}


// Called every frame
void UPathPreviewComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

