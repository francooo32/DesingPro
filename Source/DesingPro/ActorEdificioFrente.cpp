// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorEdificioFrente.h"

// Sets default values
AActorEdificioFrente::AActorEdificioFrente()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EdificioFrente = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Frente Edificio"));

}

// Called when the game starts or when spawned
void AActorEdificioFrente::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorEdificioFrente::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

