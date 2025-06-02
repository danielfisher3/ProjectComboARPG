// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerComponents/PlayerStatsComponent.h"


UPlayerStatsComponent::UPlayerStatsComponent():
	CurrentHealth(0.f),
	MaxHealth(100.f),
	CurrentStamina(0.f),
	MaxStamina(100.f),
	CurrentExpPoints(0)
{
	
	PrimaryComponentTick.bCanEverTick = true;

	
}



void UPlayerStatsComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;
	CurrentStamina = MaxStamina;
	
}



void UPlayerStatsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}

