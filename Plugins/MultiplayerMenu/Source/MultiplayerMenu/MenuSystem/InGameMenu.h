// Robert Chubb - Parabolic Labs - SaxonRah

#pragma once

#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "InGameMenu.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERMENU_API UInGameMenu : public UMenuWidget
{
	GENERATED_BODY()
protected:
	virtual bool Initialize();

private:
	UPROPERTY(meta = (BindWidget))
	class UButton* CancelButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* QuitButton;

	UFUNCTION()
	void CancelPressed();

	UFUNCTION()
	void QuitPressed();
};
