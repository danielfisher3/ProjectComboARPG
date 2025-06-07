// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorClasses/OneHandedWeapon.h"
#include "Engine/DataTable.h"

AOneHandedWeapon::AOneHandedWeapon():
	DamageOfWeapon(0.f)
{
 	
	PrimaryActorTick.bCanEverTick = true;

}


void AOneHandedWeapon::BeginPlay()
{
	Super::BeginPlay();

	if (WeaponTableToUse)
	{
		InitializeWeapon(WeaponTableToUse);
	}
	
}


void AOneHandedWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOneHandedWeapon::InitializeWeapon(UDataTable* WeaponDataTable)
{
	FOneHandedWeap* WeaponRow = WeaponDataTable->FindRow<FOneHandedWeap>(NameOfWeapon, "");
	if (WeaponRow)
	{
		DamageOfWeapon = WeaponRow->Damage;
	}
}

