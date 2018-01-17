// Robert Chubb - Parabolic Labs - SaxonRah

#pragma once

#include "CoreMinimal.h"
#include "MMGameMode.h"
#include "LobbyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERMENU_API ALobbyGameMode : public AMMGameMode
{
	GENERATED_BODY()

public:

	void PostLogin(APlayerController* NewPlayer) override;

	void Logout(AController* Exiting) override;

private:

	void StartGame();

	uint32 NumberOfPlayers = 0;

	FTimerHandle GameStartTimer;
};
