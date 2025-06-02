// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCombatStatus.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCOMBOARPG_PlayerCombatStatus_generated_h
#error "PlayerCombatStatus.generated.h already included, missing '#pragma once' in PlayerCombatStatus.h"
#endif
#define PROJECTCOMBOARPG_PlayerCombatStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerCombatStatus_h


#define FOREACH_ENUM_EPLAYERWEAPONSTATUS(op) \
	op(EPlayerWeaponStatus::EPWS_Unarmed) \
	op(EPlayerWeaponStatus::EPWS_ArmedMelee) \
	op(EPlayerWeaponStatus::EPWS_ArmedRanged) 

enum class EPlayerWeaponStatus : uint8;
template<> struct TIsUEnumClass<EPlayerWeaponStatus> { enum { Value = true }; };
template<> PROJECTCOMBOARPG_API UEnum* StaticEnum<EPlayerWeaponStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
