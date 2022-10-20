// Fill out your copyright notice in the Description page of Project Settings.


#include "Paddle.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APaddle::APaddle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_Paddle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_Paddle"));
	
	RootComponent = SM_Paddle;

	SM_Paddle->SetEnableGravity(false);
	SM_Paddle->SetConstraintMode(EDOFMode::XZPlane);
	SM_Paddle->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SM_Paddle->SetCollisionProfileName(TEXT("PhisicActor"));

	FloatingMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("FloatingPawnMovement"));

}

void APaddle::MoveHorizontal(float _AxisValue)
{
	AddMovementInput(FVector(_AxisValue, 0.0f, 0.0f), 1.0f, false);
}

// Called when the game starts or when spawned
void APaddle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APaddle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

