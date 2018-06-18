// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ReplayGameMode.h"
#include "ReplayHUD.h"
#include "ReplayCharacter.h"
#include "UObject/ConstructorHelpers.h"

AReplayGameMode::AReplayGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AReplayHUD::StaticClass();
}
