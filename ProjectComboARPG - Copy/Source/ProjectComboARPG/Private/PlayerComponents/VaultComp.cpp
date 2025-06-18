// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerComponents/VaultComp.h"
#include "Characters/PlayerCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MotionWarpingComponent.h"




UVaultComp::UVaultComp():
	MinHeight(100.f),
	MaxHeight(100.f),
	DistanceForLanding(80.f)
{
	
	PrimaryComponentTick.bCanEverTick = true;

	
}




void UVaultComp::BeginPlay()
{
	Super::BeginPlay();

	
	
}



void UVaultComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}

void UVaultComp::Vault()
{
}

void UVaultComp::ResetForRegMovement()
{
}

void UVaultComp::VaultMotionWarp()
{
}

