// Copyright Epic Games, Inc. All Rights Reserved.

#include "test1GameMode.h"
#include "test1HUD.h"
#include "test1Character.h"
#include "UObject/ConstructorHelpers.h"

Atest1GameMode::Atest1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Atest1HUD::StaticClass();
}
