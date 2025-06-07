// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "WeaponClassification.h"
#include "DTTwoHandWeapon.generated.h"

USTRUCT(BlueprintType)
struct FTwoHandedWeap : public FTableRowBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETwoHandedWeaponType THType = ETwoHandedWeaponType::ETHWT_MAX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString WeaponName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage;


};
UCLASS()
class PROJECTCOMBOARPG_API UDTTwoHandWeapon : public UObject
{
	GENERATED_BODY()
	
};
