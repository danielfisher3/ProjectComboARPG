// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorClasses/Weapon.h"
#include "Engine/DataTable.h"


AWeapon::AWeapon():
	DamageOfWeapon(0.f)
{
 	
	PrimaryActorTick.bCanEverTick = true;

}


void AWeapon::BeginPlay()
{
	Super::BeginPlay();

	if (WeaponTableToUse) 
	{
		InitializeWeapon(WeaponTableToUse);
	}
	
	
}

void AWeapon::InitializeWeapon(UDataTable* WeaponDataTable)
{
	FOneHandedWeap* WeaponRow = WeaponDataTable->FindRow<FOneHandedWeap>(NameOfWeapon,"");
	if (WeaponRow) 
	{
		DamageOfWeapon = WeaponRow->Damage;
	}
}


void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

