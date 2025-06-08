// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyMeleeBoss.h"

#include "Enemy/BossEnemy.h"
#include "PlayerCharacter/PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Enemy/BossEnemyAIController.h"
#include "GameFramework/CharacterMovementComponent.h"

AEnemyMeleeBoss::AEnemyMeleeBoss()
{
    // Right weapon collision box
    RightWeaponCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Right Weapon Box"));
    RightWeaponCollision->SetupAttachment(GetMesh(), FName("RightWeaponSocket"));

}

void AEnemyMeleeBoss::ActivateRightWeapon()
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Enemy Activate weapon"));
    RightWeaponCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

void AEnemyMeleeBoss::DeactivateRightWeapon()
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Enemy Deactivate weapon"));
    RightWeaponCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AEnemyMeleeBoss::BeginPlay()
{
    Super::BeginPlay();

    // Bind function to overlap event for weapon box
    RightWeaponCollision->OnComponentBeginOverlap.AddDynamic(this, &AEnemyMeleeBoss::OnRightWeaponOverlap);

    // Setup right weapon collision box
    RightWeaponCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    RightWeaponCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
    RightWeaponCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
    RightWeaponCollision->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
}


// Enemy melee attack montage
void AEnemyMeleeBoss::MeleeAttack() {

    UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();

    if (AnimInstance && MeleeAttackMontage)
    {
        // get number of montage section
        int32 const SectionCount = MeleeAttackMontage->CompositeSections.Num();

        // Get random animation to play
        // Get section index and playtime to use for the timer
        FName const SectionName = GetAttackSectionName(SectionCount);
        int32 const SectionIndex = MeleeAttackMontage->GetSectionIndex(SectionName);
        float const SectionLength = MeleeAttackMontage->GetSectionLength(SectionIndex);

        // Disable enemy movement then re-enable after timer finishes
        GetCharacterMovement()->DisableMovement();

        // Play montage section
        AnimInstance->Montage_Play(MeleeAttackMontage);
        AnimInstance->Montage_JumpToSection(SectionName, MeleeAttackMontage);
        GetWorldTimerManager().SetTimer(TimerAttack, this, &AEnemyMeleeBoss::ResetMovementWalking, SectionLength);
    }
}


void AEnemyMeleeBoss::ResetMovementWalking()
{
    GetCharacterMovement()->SetMovementMode(MOVE_Walking);
}

// Get random attack section name
FName AEnemyMeleeBoss::GetAttackSectionName(int32 SectionCount)
{
    FName SectionName;

    // Get random section in montage
    const int32 Section{ FMath::RandRange(1, SectionCount) };

    switch (Section)
    {
    case 1:
        SectionName = FName("Attack1");
        break;
    case 2:
        SectionName = FName("Attack2");
        break;
    }

    return SectionName;
}

void AEnemyMeleeBoss::OnRightWeaponOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor == nullptr) return;

    auto Character = Cast<APlayerCharacter>(OtherActor);

    if (Character)
    {
        UGameplayStatics::ApplyDamage(Character, GetBaseDamage(), BossEnemyAIController, this, UDamageType::StaticClass());
    }
}


// @TODO Refactor this when doing behavior tree
// Called from enemy blueprint
void AEnemyMeleeBoss::MainMeleeAttack()
{
    // Logic to run anim montage attack from section
    this->MeleeAttack();
}