// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ArcanoidGameModeBase.generated.h"

/**
 * 
 */

class ABrick;

UCLASS()
class ARCANOID_API AArcanoidGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

	ABrick* ladrillo01;

};
