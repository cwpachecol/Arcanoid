// Fill out your copyright notice in the Description page of Project Settings.


#include "Brick.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
//#include "Components/BoxComponent.h"

// Sets default values
ABrick::ABrick()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BrickMessAsset(TEXT("/Game/Meshes/SM_Brick.SM_Brick"));


	SM_Brick = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Brick"));
	SM_Brick->SetStaticMesh(BrickMessAsset.Object);
}

// Called when the game starts or when spawned
void ABrick::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABrick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

