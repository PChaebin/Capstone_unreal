// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/BossEnemy.h"

// Sets default values
ABossEnemy::ABossEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABossEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABossEnemy::MeleeHit_Implementation(FHitResult HitResult)
{
	// Do impact sound

	// Play niagra affects

	// play hit montage
}

// Called every frame
void ABossEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



