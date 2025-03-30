// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_CapstoneGameMode.h"
#include "Project_CapstoneCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_CapstoneGameMode::AProject_CapstoneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
