// Fill out your copyright notice in the Description page of Project Settings.


#include "Enmey/Enemy.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

void AEnemy::EnemyMainAttack() {
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Called from enemy class"));
}

void AEnemy::MeleeHit_Implementation(FHitResult HitResult) {
	// Do impact sound

	// play niagra effects 
	
	// play hit montage
	IMeleeHitInterface::MeleeHit_Implementation(HitResult);
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

