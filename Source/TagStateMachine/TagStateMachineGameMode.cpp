// Copyright Epic Games, Inc. All Rights Reserved.

#include "TagStateMachineGameMode.h"
#include "TagStateMachineCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATagStateMachineGameMode::ATagStateMachineGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
