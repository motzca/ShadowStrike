// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShadowStrikeGameMode.h"
#include "ShadowStrikeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShadowStrikeGameMode::AShadowStrikeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
