// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MycraftGameMode.h"
#include "MycraftHUD.h"
#include "MycraftCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMycraftGameMode::AMycraftGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMycraftHUD::StaticClass();
}
