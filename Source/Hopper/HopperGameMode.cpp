// Copyright Epic Games, Inc. All Rights Reserved.

#include "HopperGameMode.h"
#include "HopperCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHopperGameMode::AHopperGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
