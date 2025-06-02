// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectComboARPG/Public/PlayerStatus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStatus() {}
// Cross Module References
	PROJECTCOMBOARPG_API UEnum* Z_Construct_UEnum_ProjectComboARPG_EPlayerStatus();
	UPackage* Z_Construct_UPackage__Script_ProjectComboARPG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerStatus;
	static UEnum* EPlayerStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectComboARPG_EPlayerStatus, (UObject*)Z_Construct_UPackage__Script_ProjectComboARPG(), TEXT("EPlayerStatus"));
		}
		return Z_Registration_Info_UEnum_EPlayerStatus.OuterSingleton;
	}
	template<> PROJECTCOMBOARPG_API UEnum* StaticEnum<EPlayerStatus>()
	{
		return EPlayerStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_ProjectComboARPG_EPlayerStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ProjectComboARPG_EPlayerStatus_Statics::Enumerators[] = {
		{ "EPlayerStatus::EPS_Unoccupied", (int64)EPlayerStatus::EPS_Unoccupied },
		{ "EPlayerStatus::EPS_Falling", (int64)EPlayerStatus::EPS_Falling },
		{ "EPlayerStatus::EPS_Dodging", (int64)EPlayerStatus::EPS_Dodging },
		{ "EPlayerStatus::EPS_Attacking", (int64)EPlayerStatus::EPS_Attacking },
		{ "EPlayerStatus::EPS_MAX", (int64)EPlayerStatus::EPS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ProjectComboARPG_EPlayerStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EPS_Attacking.DisplayName", "Attacking" },
		{ "EPS_Attacking.Name", "EPlayerStatus::EPS_Attacking" },
		{ "EPS_Dodging.DisplayName", "Dodging" },
		{ "EPS_Dodging.Name", "EPlayerStatus::EPS_Dodging" },
		{ "EPS_Falling.DisplayName", "Falling/InAir" },
		{ "EPS_Falling.Name", "EPlayerStatus::EPS_Falling" },
		{ "EPS_MAX.DisplayName", "DefaultMAX" },
		{ "EPS_MAX.Name", "EPlayerStatus::EPS_MAX" },
		{ "EPS_Unoccupied.DisplayName", "Unoccupied" },
		{ "EPS_Unoccupied.Name", "EPlayerStatus::EPS_Unoccupied" },
		{ "ModuleRelativePath", "Public/PlayerStatus.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectComboARPG_EPlayerStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ProjectComboARPG,
		nullptr,
		"EPlayerStatus",
		"EPlayerStatus",
		Z_Construct_UEnum_ProjectComboARPG_EPlayerStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectComboARPG_EPlayerStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectComboARPG_EPlayerStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectComboARPG_EPlayerStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ProjectComboARPG_EPlayerStatus()
	{
		if (!Z_Registration_Info_UEnum_EPlayerStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerStatus.InnerSingleton, Z_Construct_UEnum_ProjectComboARPG_EPlayerStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerStatus.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerStatus_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerStatus_h_Statics::EnumInfo[] = {
		{ EPlayerStatus_StaticEnum, TEXT("EPlayerStatus"), &Z_Registration_Info_UEnum_EPlayerStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4098675485U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerStatus_h_410246651(TEXT("/Script/ProjectComboARPG"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerStatus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerStatus_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
