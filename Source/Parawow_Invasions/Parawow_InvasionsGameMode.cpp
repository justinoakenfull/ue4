// Copyright Epic Games, Inc. All Rights Reserved.

#include "Parawow_InvasionsGameMode.h"
#include "Parawow_InvasionsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AParawow_InvasionsGameMode::AParawow_InvasionsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
