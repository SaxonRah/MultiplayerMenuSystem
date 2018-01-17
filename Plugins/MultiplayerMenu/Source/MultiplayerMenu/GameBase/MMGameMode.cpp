// Robert Chubb - Parabolic Labs - SaxonRah

#include "MMGameMode.h"
#include "MMBaseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMMGameMode::AMMGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/MultiplayerMenu/GameBase/CBP_BaseCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
