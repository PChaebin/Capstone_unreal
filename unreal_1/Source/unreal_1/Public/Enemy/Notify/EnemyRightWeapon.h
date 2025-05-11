// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EnemyRightWeapon.generated.h"

class AEnemyMeleeBoss;
/**
 * 
 */
UCLASS()
class UNREAL_1_API UEnemyRightWeapon : public UAnimNotifyState
{
	GENERATED_BODY()

public:

	UPROPERTY()
	AEnemyMeleeBoss* EnemyMelee;

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

};
