// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter/PlayerAnimInstance.h"

#include "PlayerCharacter/PlayerCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "TextureCompiler.h"

void UPlayerAnimInstance::UpdateAnimationProperties(float DeltaTime)
{
	if (PlayerCharacter == nullptr)
	{
		PlayerCharacter = Cast<APlayerCharacter>(TryGetPawnOwner());
	}

	if (PlayerCharacter)
	{
		// Get speed of player from velocity
		FVector Velocity = PlayerCharacter->GetVelocity();
		Velocity.Z = 0;
		Speed = Velocity.Size();

		// Get offset yaw to user in blend spaces
		FRotator AimRotation = PlayerCharacter->GetBaseAimRotation();
		FRotator MovementRotation = UKismetMathLibrary::MakeRotFromX(PlayerCharacter->GetVelocity());
	
		MovementOffsetYaw = UKismetMathLibrary::NormalizedDeltaRotator(MovementRotation, AimRotation).Yaw;
	}
}


// Acts like begin Play create reference to player character
void UPlayerAnimInstance::NativeInitializeAnimation()
{
	PlayerCharacter = Cast<APlayerCharacter>(TryGetPawnOwner());

}