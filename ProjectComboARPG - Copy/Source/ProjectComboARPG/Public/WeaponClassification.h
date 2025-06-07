#pragma once

UENUM(BlueprintType)
enum class EWeaponClass : uint8 
{
	EWC_OneHanded UMETA(DisplayName = "One-Handed"),
	EWC_TwoHanded UMETA(DisplayName = "Two-Handed"),
	EWC_Ranged UMETA(DisplayName = "Ranged"),
	EWC_Special UMETA(DisplayName = "Special"),
	EWC_MAX UMETA(DisplayName = "DefaultMAX")
	
};
