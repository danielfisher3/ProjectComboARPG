// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorClasses/TwoHandWeapon.h"
#include "Engine/DataTable.h"


ATwoHandWeapon::ATwoHandWeapon():
	DamageOfWeapon(0.f)
{
 	
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	SetRootComponent(StaticMeshComponent);

}


void ATwoHandWeapon::BeginPlay()
{
	Super::BeginPlay();
	
	if (WeaponTableToUse)
	{
		InitializeWeapon(WeaponTableToUse);
	}

}



void ATwoHandWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATwoHandWeapon::InitializeWeapon(UDataTable* WeaponDataTable)
{
	FTwoHandedWeap* WeaponRow = WeaponDataTable->FindRow<FTwoHandedWeap>(NameOfWeapon, "");
	if (WeaponRow)
	{
		DamageOfWeapon = WeaponRow->Damage;

	}
}

