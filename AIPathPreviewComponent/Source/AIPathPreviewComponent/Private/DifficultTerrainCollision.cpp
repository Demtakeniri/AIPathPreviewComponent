// Fill out your copyright notice in the Description page of Project Settings.


#include "DifficultTerrainCollision.h"

// Sets default values
ADifficultTerrainCollision::ADifficultTerrainCollision()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	Collision = CreateDefaultSubobject<UBoxComponent>(FName("Collision"));
	Collision->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ADifficultTerrainCollision::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADifficultTerrainCollision::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

