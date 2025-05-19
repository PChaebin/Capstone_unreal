// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BossEnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL_1_API ABossEnemyAIController : public AAIController
{
	GENERATED_BODY()

public:
	ABossEnemyAIController();

protected:
	virtual void BeginPlay() override;
	
};
