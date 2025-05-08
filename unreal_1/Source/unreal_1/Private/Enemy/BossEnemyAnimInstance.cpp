// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/BossEnemyAnimInstance.h"

#include "Enemy/BossEnemy.h"	
#include "Kismet/KismetMathLibrary.h"

void UBossEnemyAnimInstance::UpdateAnimationProperties(float DeltaTime) {
	if (Enemy == nullptr)
	{
		Enemy = Cast<ABossEnemy>(TryGetPawnOwner());
	}

	if (Enemy)
	{
		// Get lateral speed of enemy from velocity
		FVector Velocity{ Enemy->GetVelocity() };
		Velocity.Z = 0;
		Speed = Velocity.Size();

		// Get offset yaw to use in blend spaces
		const FRotator AimRotation = Enemy->GetBaseAimRotation();
		const FRotator MovementRotation = UKismetMathLibrary::MakeRotFromX(Enemy->GetVelocity());

		MovementOffsetYaw = UKismetMathLibrary::NormalizedDeltaRotator(MovementRotation, AimRotation).Yaw;
	}
}