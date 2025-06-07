// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorClasses/RangedWeapon.h"
#include "Engine/DataTable.h"

ARangedWeapon::ARangedWeapon():
	DamageOfWeapon(0.f)
{
 	
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	SetRootComponent(StaticMeshComponent);

}

void ARangedWeapon::BeginPlay()
{
	Super::BeginPlay();

	if (WeaponTableToUse)
	{
		InitializeWeapon(WeaponTableToUse);
	}
	
}


void ARangedWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ARangedWeapon::InitializeWeapon(UDataTable* WeaponDataTable)
{
	FRangedWeap* WeaponRow = WeaponDataTable->FindRow<FRangedWeap>(NameOfWeapon, "");
	if (WeaponRow)
	{
		DamageOfWeapon = WeaponRow->Damage;

	}
}

