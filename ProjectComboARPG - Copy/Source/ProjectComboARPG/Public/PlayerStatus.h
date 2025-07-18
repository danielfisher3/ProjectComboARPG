#pragma once

UENUM(BlueprintType)
enum class EPlayerStatus : uint8 
{
	EPS_Unoccupied UMETA(DisplayName = "Unoccupied"),
	EPS_Falling UMETA(DisplayName = "Falling/InAir"),
	EPS_Dodging UMETA(DisplayName = "Dodging"),
	EPS_LightAttacking UMETA(DisplayName = "LightAttacking"),
	EPS_HeavyAttacking UMETA(DisplayName = "HeavyAttacking"),
	EPS_BlockParry UMETA(DisplayName = "BlockOrParry"),
	EPS_Crouching UMETA(DisplayName = "Crouching"),
	EPS_Vaulting UMETA(DisplayName = "Vaulting"),
	EPS_MAX UMETA(DisplayName = "DefaultMAX")
};