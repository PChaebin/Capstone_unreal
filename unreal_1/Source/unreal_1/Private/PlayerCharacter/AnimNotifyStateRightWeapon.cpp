// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerCharacter/AnimNotifyStateRightWeapon.h"
#include "PlayerCharacter/PlayerCharacter.h"

void UAnimNotifyStateRightWeapon::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	if (MeshComp && MeshComp->GetOwner())
	{
		PlayerCharacter = Cast<APlayerCharacter>(MeshComp->GetOwner());
		if (PlayerCharacter)
		{
			PlayerCharacter->ActivateRightWeapon();
		}		
	}
}

void UAnimNotifyStateRightWeapon::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	if (MeshComp && MeshComp->GetOwner())
	{
		if (PlayerCharacter)
		{
			PlayerCharacter->DeactivateRightWeapon();
		}
	}
}