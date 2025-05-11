// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

//Declarations
class USpringArmComponent;
class UCameraComponent;
class UAnimMontage;

UCLASS()
class UNREAL_1_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Move forward and backward
	void MoveForward(float Value);

	// Move left and right
	void MoveRight(float Value);

	// Input to turn at normalized rate given
	void TurnRate(float Value);

	// Input to lookup or down at normalized rate given
	void LookUpRate(float Value);

	// Running
	void Running();
	void StopRunning();

	// recall obility
	void Recall();

	void PlayCustomAnimMontage(UAnimMontage* MontageToPlay, FName SectionName = "Default");

	void EnableWalk();

	void MainAttack();

private:
	// Spring Arm Component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArmComponent;

	// Follow Camera Component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCameraComponent;

	// Default turn rate
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float DefaultTurnRate;

	// Default LookUp rate
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float DefaultLookUpRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float WalkSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float RunSpeed;

	FTimerHandle TimerMovementWalking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Montage", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* RecallMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Montage", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* MainAttackMontage;
};
