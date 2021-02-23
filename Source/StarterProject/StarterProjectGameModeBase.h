// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StarterProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class STARTERPROJECT_API AStarterProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	int score{};
};
