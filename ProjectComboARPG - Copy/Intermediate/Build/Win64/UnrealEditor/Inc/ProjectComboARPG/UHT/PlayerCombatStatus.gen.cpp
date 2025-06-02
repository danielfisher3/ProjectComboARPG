// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectComboARPG/Public/PlayerCombatStatus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCombatStatus() {}
// Cross Module References
	PROJECTCOMBOARPG_API UEnum* Z_Construct_UEnum_ProjectComboARPG_EPlayerWeaponStatus();
	UPackage* Z_Construct_UPackage__Script_ProjectComboARPG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerWeaponStatus;
	static UEnum* EPlayerWeaponStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerWeaponStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerWeaponStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectComboARPG_EPlayerWeaponStatus, (UObject*)Z_Construct_UPackage__Script_ProjectComboARPG(), TEXT("EPlayerWeaponStatus"));
		}
		return Z_Registration_Info_UEnum_EPlayerWeaponStatus.OuterSingleton;
	}
	template<> PROJECTCOMBOARPG_API UEnum* StaticEnum<EPlayerWeaponStatus>()
	{
		return EPlayerWeaponStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_ProjectComboARPG_EPlayerWeaponStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ProjectComboARPG_EPlayerWeaponStatus_Statics::Enumerators[] = {
		{ "EPlayerWeaponStatus::EPWS_Unarmed", (int64)EPlayerWeaponStatus::EPWS_Unarmed },
		{ "EPlayerWeaponStatus::EPWS_ArmedMelee", (int64)EPlayerWeaponStatus::EPWS_ArmedMelee },
		{ "EPlayerWeaponStatus::EPWS_ArmedRanged", (int64)EPlayerWeaponStatus::EPWS_ArmedRanged },
		{ "EPlayerWeaponStatus::EPWS_MAX", (int64)EPlayerWeaponStatus::EPWS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ProjectComboARPG_EPlayerWeaponStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EPWS_ArmedMelee.DisplayName", "ArmedMelee" },
		{ "EPWS_ArmedMelee.Name", "EPlayerWeaponStatus::EPWS_ArmedMelee" },
		{ "EPWS_ArmedRanged.DisplayName", "ArmedRanged" },
		{ "EPWS_ArmedRanged.Name", "EPlayerWeaponStatus::EPWS_ArmedRanged" },
		{ "EPWS_MAX.DisplayName", "DefaultMAX" },
		{ "EPWS_MAX.Name", "EPlayerWeaponStatus::EPWS_MAX" },
		{ "EPWS_Unarmed.DisplayName", "Unarmed" },
		{ "EPWS_Unarmed.Name", "EPlayerWeaponStatus::EPWS_Unarmed" },
		{ "ModuleRelativePath", "Public/PlayerCombatStatus.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectComboARPG_EPlayerWeaponStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ProjectComboARPG,
		nullptr,
		"EPlayerWeaponStatus",
		"EPlayerWeaponStatus",
		Z_Construct_UEnum_ProjectComboARPG_EPlayerWeaponStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectComboARPG_EPlayerWeaponStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectComboARPG_EPlayerWeaponStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectComboARPG_EPlayerWeaponStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ProjectComboARPG_EPlayerWeaponStatus()
	{
		if (!Z_Registration_Info_UEnum_EPlayerWeaponStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerWeaponStatus.InnerSingleton, Z_Construct_UEnum_ProjectComboARPG_EPlayerWeaponStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerWeaponStatus.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerCombatStatus_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerCombatStatus_h_Statics::EnumInfo[] = {
		{ EPlayerWeaponStatus_StaticEnum, TEXT("EPlayerWeaponStatus"), &Z_Registration_Info_UEnum_EPlayerWeaponStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1293115174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerCombatStatus_h_1949872525(TEXT("/Script/ProjectComboARPG"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerCombatStatus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerCombatStatus_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
