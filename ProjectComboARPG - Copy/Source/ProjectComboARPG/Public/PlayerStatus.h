#pragma once

UENUM(BlueprintType)
enum class EPlayerStatus : uint8 
{
	EPS_Unoccupied UMETA(DisplayName = "Unoccupied"),
	EPS_Falling UMETA(DisplayName = "Falling/InAir"),
	EPS_Dodging UMETA(DisplayName = "Dodging"),
	EPS_Attacking UMETA(DisplayName = "Attacking"),
	EPS_BlockParry UMETA(DisplayName = "BlockOrParry"),
	EPS_MAX UMETA(DisplayName = "DefaultMAX")
};