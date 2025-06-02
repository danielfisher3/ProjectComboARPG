// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlController.generated.h"

/*FWD Declaration*/
class APlayerCharacter;
class UUserWidget;

UCLASS()
class PROJECTCOMBOARPG_API APlController : public APlayerController
{
	GENERATED_BODY()

public:
	
	APlController();

	virtual void Tick(float DeltaTime)override;

protected:

	virtual void BeginPlay()override;

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PlayerRef", meta = (AllowPrivateAccess = "true"))
	APlayerCharacter* PLChar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UUserWidget>HUDOverlayClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Widgets", meta = (AllowPrivateAccess = "true"))
	UUserWidget* HUDOverlay;

};
