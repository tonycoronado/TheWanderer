// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheWandererGameMode.h"
#include "TheWandererCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheWandererGameMode::ATheWandererGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/_Game/Blueprints/Player/BP_TheWanderer"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
