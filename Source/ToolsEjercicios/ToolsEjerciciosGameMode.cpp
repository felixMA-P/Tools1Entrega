// Copyright Epic Games, Inc. All Rights Reserved.

#include "ToolsEjerciciosGameMode.h"
#include "ToolsEjerciciosCharacter.h"
#include "UObject/ConstructorHelpers.h"

AToolsEjerciciosGameMode::AToolsEjerciciosGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
