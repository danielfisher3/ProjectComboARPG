// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerStatus.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCOMBOARPG_PlayerStatus_generated_h
#error "PlayerStatus.generated.h already included, missing '#pragma once' in PlayerStatus.h"
#endif
#define PROJECTCOMBOARPG_PlayerStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerStatus_h


#define FOREACH_ENUM_EPLAYERSTATUS(op) \
	op(EPlayerStatus::EPS_Unoccupied) \
	op(EPlayerStatus::EPS_Falling) \
	op(EPlayerStatus::EPS_Dodging) \
	op(EPlayerStatus::EPS_Attacking) 

enum class EPlayerStatus : uint8;
template<> struct TIsUEnumClass<EPlayerStatus> { enum { Value = true }; };
template<> PROJECTCOMBOARPG_API UEnum* StaticEnum<EPlayerStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
