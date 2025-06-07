// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy/BossEnemy.h"
#include "Components/BoxComponent.h"
#include "NiagaraSystem.h"               
#include "NiagaraFunctionLibrary.h"
#include "EnemyMeleeBoss.generated.h"

class UAnimMontage;
/**
 * 
 */
UCLASS()
class UNREAL_1_API AEnemyMeleeBoss : public ABossEnemy
{
	GENERATED_BODY()

public:

	AEnemyMeleeBoss();
	
	// Activate and deactivate weapon boxes
	virtual void ActivateRightWeapon();
	virtual void DeactivateRightWeapon();
	
protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Melee attack montage
	void MeleeAttack();

	// Used after disabling movement
	void ResetMovementWalking();

	FName GetAttackSectionName(int32 SectionCount);

	// Right weapon overlap
	UFUNCTION()
	void OnRightWeaponOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);
	
private:

	// Montage for melee attacks
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* MeleeAttackMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* RightWeaponCollision;

	// Niagara Effects
	UPROPERTY(EditAnywhere, Category = "Effects")
	UNiagaraSystem* SwingEffect;

	UPROPERTY(EditAnywhere, Category = "Effects")
	UNiagaraSystem* ImpactEffect;

	// Timer for playing attack montage
	FTimerHandle TimerAttack;

	// @TODO remove when behavior tree is working
	UFUNCTION(BlueprintCallable)
	void MainMeleeAttack();
};
