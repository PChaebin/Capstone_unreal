// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimInstance.generated.h"

// Delarations
class APlayerCharacter;

/**
 * 
 */
UCLASS()
class UNREAL_1_API UPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	// Used in animation BluePrint
	UFUNCTION(BlueprintCallable)
	void UpdateAnimationProperties(float DeltaTime);

	// init our variables and be able to use them in BP
	virtual void NativeInitializeAnimation() override;

private:

	// Create variable to have reference to Player Character 
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	APlayerCharacter* PlayerCharacter;

	// Speed of Player
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float Speed;

	// player is in the air?
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsInAir;

	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float MovementOffsetYaw;
};
