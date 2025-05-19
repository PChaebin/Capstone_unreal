#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyStateRightWeapon.generated.h"

class APlayerCharacter;

UCLASS()
class UNREAL_1_API UAnimNotifyStateRightWeapon : public UAnimNotifyState
{
	GENERATED_BODY()

public:
	UPROPERTY()
	APlayerCharacter* PlayerCharacter;

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;

	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
};