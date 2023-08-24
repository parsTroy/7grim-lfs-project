// Copyright Epic Games, Inc. All Rights Reserved.

#include "grimerGameMode.h"
#include "grimerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AgrimerGameMode::AgrimerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
