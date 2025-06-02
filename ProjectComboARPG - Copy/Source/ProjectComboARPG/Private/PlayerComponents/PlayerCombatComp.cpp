// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerComponents/PlayerCombatComp.h"

UPlayerCombatComp::UPlayerCombatComp():
	/*Variable Initialization*/
	WeaponStatus(EPlayerWeaponStatus::EPWS_Unarmed)
{
	
	PrimaryComponentTick.bCanEverTick = true;

	
}



void UPlayerCombatComp::BeginPlay()
{
	Super::BeginPlay();

	
	
}


void UPlayerCombatComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}

