// Fill out your copyright notice in the Description page of Project Settings.


#include "PaddlePlayerController.h"

#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"

#include "Paddle.h"

APaddlePlayerController::APaddlePlayerController()
{
}

void APaddlePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	EnableInput(this);

	InputComponent->BindAxis("MoveHorizontal", this, &APaddlePlayerController::MoveHorizontal);

}



void APaddlePlayerController::BeginPlay()
{
	TArray<AActor*> CameraActors;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);

	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);

	
}

void APaddlePlayerController::MoveHorizontal(float _AxisValue)
{
	auto MyPawn = Cast<APaddle>(GetPawn());

	if (MyPawn) {
		MyPawn->MoveHorizontal(_AxisValue);
	}



}
