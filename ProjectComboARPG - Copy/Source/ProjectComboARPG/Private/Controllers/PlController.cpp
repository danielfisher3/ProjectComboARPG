// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/PlController.h"
#include "Characters/PlayerCharacter.h"
#include "Blueprint/UserWidget.h"

APlController::APlController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APlController::BeginPlay()
{
	Super::BeginPlay();

	if (PLChar == nullptr)
	{
		PLChar = Cast<APlayerCharacter>(GetPawn());
	}

	if (HUDOverlayClass)
	{
		HUDOverlay = CreateWidget<UUserWidget>(this, HUDOverlayClass);
		if (HUDOverlay)
		{
			HUDOverlay->AddToViewport();
			HUDOverlay->SetVisibility(ESlateVisibility::Visible);
		}
	}
}

void APlController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (PLChar == nullptr)
	{
		PLChar = Cast<APlayerCharacter>(GetPawn());
	}
}
