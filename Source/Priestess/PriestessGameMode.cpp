// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PriestessGameMode.h"
#include "PriestessPlayerController.h"
#include "PriestessCharacter.h"
#include "UObject/ConstructorHelpers.h"

APriestessGameMode::APriestessGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = APriestessPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}