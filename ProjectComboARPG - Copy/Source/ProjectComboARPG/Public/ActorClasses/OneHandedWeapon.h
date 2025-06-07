// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DTObjectClasses/DTOneHandWeapon.h"
#include "OneHandedWeapon.generated.h"

UCLASS()
class PROJECTCOMBOARPG_API AOneHandedWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	
	AOneHandedWeapon();

	virtual void Tick(float DeltaTime) override;

protected:
	
	virtual void BeginPlay() override;

	void InitializeWeapon(UDataTable* WeaponDataTable);

public:	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* WeaponTableToUse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditAnywhere)
	FName NameOfWeapon;

private:

	UPROPERTY(VisibleAnywhere)
	float DamageOfWeapon;

};
