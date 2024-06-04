// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "GameFramework/Actor.h"
#include "ProceduralPath.generated.h"

UCLASS()
class AIPATHPREVIEWCOMPONENT_API AProceduralPath : public AActor
{
	GENERATED_BODY()
private:
	UPROPERTY(VisibleAnywhere)
	UProceduralMeshComponent* mesh;
public:	

	// Sets default values for this actor's properties
	AProceduralPath();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PostActorCreated() override;
	virtual void PostLoad() override;
	UFUNCTION(BlueprintCallable,CallInEditor)
	void CreateTriangle();

};
