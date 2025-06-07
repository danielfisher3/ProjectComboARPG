// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DTObjectClasses/DTOneHandWeapon.h"
#include "Weapon.generated.h"

UCLASS()
class PROJECTCOMBOARPG_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	
	AWeapon();

	virtual void Tick(float DeltaTime) override;

protected:
	
	virtual void BeginPlay() override;

	void InitializeWeapon(UDataTable* WeaponDataTable);

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* WeaponTableToUse;
	
	UPROPERTY(EditAnywhere)
	FName NameOfWeapon;


private:

	UPROPERTY(VisibleAnywhere)
	float DamageOfWeapon;

};
