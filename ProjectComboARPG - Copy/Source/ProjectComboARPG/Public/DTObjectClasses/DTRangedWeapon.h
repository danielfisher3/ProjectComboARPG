// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "WeaponClassification.h"
#include "DTRangedWeapon.generated.h"

USTRUCT(BlueprintType)
struct FRangedWeap : public FTableRowBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ERangedWeaponType RWType = ERangedWeaponType::ERWT_MAX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString WeaponName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage;


};

UCLASS()
class PROJECTCOMBOARPG_API UDTRangedWeapon : public UObject
{
	GENERATED_BODY()
	
};
