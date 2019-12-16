// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PriestessGameMode.h"
#include "PriestessCharacter.h"

APriestessGameMode::APriestessGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = APriestessCharacter::StaticClass();	
}
