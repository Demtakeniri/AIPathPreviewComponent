// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "DifficultTerrainCollision.generated.h"

UENUM(BlueprintType)
enum class ETerrainType : uint8
{
	SLOWING,
	DAMAGING
};
UCLASS()
class AIPATHPREVIEWCOMPONENT_API ADifficultTerrainCollision : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditAnywhere, BLueprintReadWrite)
	UBoxComponent* Collision;
	UPROPERTY(EditAnywhere, BLueprintReadWrite)
	ETerrainType TerraintType;

	// Sets default values for this actor's properties
	ADifficultTerrainCollision();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

