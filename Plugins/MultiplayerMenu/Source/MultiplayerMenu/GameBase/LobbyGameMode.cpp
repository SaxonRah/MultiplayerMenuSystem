// Robert Chubb - Parabolic Labs - SaxonRah

#include "LobbyGameMode.h"

#include "Engine.h"
#include "TimerManager.h"

#include "MMGameInstance.h"

void ALobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	++NumberOfPlayers;

	if (NumberOfPlayers >= 2)
	{
		GetWorldTimerManager().SetTimer(GameStartTimer, this, &ALobbyGameMode::StartGame, 10);
	}
}

void ALobbyGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);
	--NumberOfPlayers;
}

void ALobbyGameMode::StartGame()
{
	auto GameInstance = Cast<UMMGameInstance>(GetGameInstance());

	if (GameInstance == nullptr) return;

	GameInstance->StartSession();

	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	bUseSeamlessTravel = true;
	World->ServerTravel("/MultiplayerMenu/Game?listen");
}
