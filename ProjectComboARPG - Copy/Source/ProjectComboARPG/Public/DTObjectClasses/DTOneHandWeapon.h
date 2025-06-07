// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "WeaponClassification.h"
#include "DTOneHandWeapon.generated.h"

USTRUCT(BlueprintType)
struct FOneHandedWeap : public FTableRowBase 
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOneHandedWeaponType OHType = EOneHandedWeaponType::EOHWT_MAX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString WeaponName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage;

	
};


UCLASS()
class PROJECTCOMBOARPG_API UDTOneHandWeapon : public UObject
{
	GENERATED_BODY()

	
};
