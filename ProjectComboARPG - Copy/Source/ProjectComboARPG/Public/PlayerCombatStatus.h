#pragma once

UENUM(BlueprintType)
enum class EPlayerWeaponStatus : uint8 
{
	EPWS_Unarmed UMETA(DisplayName = "Unarmed"),
	EPWS_ArmedMelee UMETA(DisplayName = "ArmedMelee"),
	EPWS_ArmedRanged UMETA(DisplayName = "ArmedRanged"),
	EPWS_MAX UMETA(DisplayName = "DefaultMAX")
};
