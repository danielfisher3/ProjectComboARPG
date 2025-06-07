#pragma once

UENUM(BlueprintType)
enum class EWeaponClass : uint8 
{
	EWC_OneHanded UMETA(DisplayName = "One-Handed"),
	EWC_TwoHanded UMETA(DisplayName = "Two-Handed"),
	EWC_Ranged UMETA(DisplayName = "Ranged"),
	EWC_MAX UMETA(DisplayName = "DefaultMAX")
	
};

UENUM(BlueprintType)
enum class EOneHandedWeaponType : uint8
{
	EOHWT_Dagger UMETA(DisplayName = "Dagger"),
	EOHWT_LongSword UMETA(DisplayName = "Longsword"),
	EOHWT_OHSpecial UMETA(DisplayName = "One-HandedSpecial"),
	EOHWT_MAX UMETA(DisplayName = "DefaultMAX")

};


UENUM(BlueprintType)
enum class ETwoHandedWeaponType : uint8
{
	ETHWT_Club UMETA(DisplayName = "Club"),
	ETHWT_GreatSword UMETA(DisplayName = "GreatSword"),
	ETHWT_THSpecial UMETA(DisplayName = "Two-HandedSpecial"),
	ETHWT_MAX UMETA(DisplayName = "DefaultMAX")

};

UENUM(BlueprintType)
enum class ERangedWeaponType : uint8
{
	ERWT_Bow UMETA(DisplayName = "Bow"),
	ERWT_Rifle UMETA(DisplayName = "Rifle"),
	ERWT_RangedSpecial UMETA(DisplayName = "RangedSpecial"),
	ERWT_MAX UMETA(DisplayName = "DefaultMAX")

};
