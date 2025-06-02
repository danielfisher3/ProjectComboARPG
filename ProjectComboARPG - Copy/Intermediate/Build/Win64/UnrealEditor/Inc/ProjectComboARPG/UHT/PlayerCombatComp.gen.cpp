// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectComboARPG/Public/PlayerComponents/PlayerCombatComp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCombatComp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	PROJECTCOMBOARPG_API UClass* Z_Construct_UClass_UPlayerCombatComp();
	PROJECTCOMBOARPG_API UClass* Z_Construct_UClass_UPlayerCombatComp_NoRegister();
	PROJECTCOMBOARPG_API UEnum* Z_Construct_UEnum_ProjectComboARPG_EPlayerWeaponStatus();
	UPackage* Z_Construct_UPackage__Script_ProjectComboARPG();
// End Cross Module References
	void UPlayerCombatComp::StaticRegisterNativesUPlayerCombatComp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerCombatComp);
	UClass* Z_Construct_UClass_UPlayerCombatComp_NoRegister()
	{
		return UPlayerCombatComp::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerCombatComp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponStatus_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponStatus_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightAttackMontageUnarmed_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LightAttackMontageUnarmed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeavyAttackMontageUnarmed_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeavyAttackMontageUnarmed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightSkillAttackMontageUnarmed_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LightSkillAttackMontageUnarmed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeavySkillAttackMontageUnarmed_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeavySkillAttackMontageUnarmed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerCombatComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectComboARPG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatComp_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatComp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerComponents/PlayerCombatComp.h" },
		{ "ModuleRelativePath", "Public/PlayerComponents/PlayerCombatComp.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_WeaponStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_WeaponStatus_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*PlayerWeaponStatus*/" },
#endif
		{ "ModuleRelativePath", "Public/PlayerComponents/PlayerCombatComp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PlayerWeaponStatus" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_WeaponStatus = { "WeaponStatus", nullptr, (EPropertyFlags)0x0040000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerCombatComp, WeaponStatus), Z_Construct_UEnum_ProjectComboARPG_EPlayerWeaponStatus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_WeaponStatus_MetaData), Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_WeaponStatus_MetaData) }; // 1293115174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_LightAttackMontageUnarmed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attacks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Attack Montages*/" },
#endif
		{ "ModuleRelativePath", "Public/PlayerComponents/PlayerCombatComp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attack Montages" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_LightAttackMontageUnarmed = { "LightAttackMontageUnarmed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerCombatComp, LightAttackMontageUnarmed), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_LightAttackMontageUnarmed_MetaData), Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_LightAttackMontageUnarmed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_HeavyAttackMontageUnarmed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "Public/PlayerComponents/PlayerCombatComp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_HeavyAttackMontageUnarmed = { "HeavyAttackMontageUnarmed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerCombatComp, HeavyAttackMontageUnarmed), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_HeavyAttackMontageUnarmed_MetaData), Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_HeavyAttackMontageUnarmed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_LightSkillAttackMontageUnarmed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "Public/PlayerComponents/PlayerCombatComp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_LightSkillAttackMontageUnarmed = { "LightSkillAttackMontageUnarmed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerCombatComp, LightSkillAttackMontageUnarmed), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_LightSkillAttackMontageUnarmed_MetaData), Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_LightSkillAttackMontageUnarmed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_HeavySkillAttackMontageUnarmed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attacks" },
		{ "ModuleRelativePath", "Public/PlayerComponents/PlayerCombatComp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_HeavySkillAttackMontageUnarmed = { "HeavySkillAttackMontageUnarmed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerCombatComp, HeavySkillAttackMontageUnarmed), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_HeavySkillAttackMontageUnarmed_MetaData), Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_HeavySkillAttackMontageUnarmed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerCombatComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_WeaponStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_WeaponStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_LightAttackMontageUnarmed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_HeavyAttackMontageUnarmed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_LightSkillAttackMontageUnarmed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCombatComp_Statics::NewProp_HeavySkillAttackMontageUnarmed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerCombatComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerCombatComp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCombatComp_Statics::ClassParams = {
		&UPlayerCombatComp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerCombatComp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatComp_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatComp_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerCombatComp_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCombatComp_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerCombatComp()
	{
		if (!Z_Registration_Info_UClass_UPlayerCombatComp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerCombatComp.OuterSingleton, Z_Construct_UClass_UPlayerCombatComp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerCombatComp.OuterSingleton;
	}
	template<> PROJECTCOMBOARPG_API UClass* StaticClass<UPlayerCombatComp>()
	{
		return UPlayerCombatComp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCombatComp);
	UPlayerCombatComp::~UPlayerCombatComp() {}
	struct Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerComponents_PlayerCombatComp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerComponents_PlayerCombatComp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerCombatComp, UPlayerCombatComp::StaticClass, TEXT("UPlayerCombatComp"), &Z_Registration_Info_UClass_UPlayerCombatComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerCombatComp), 1658202725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerComponents_PlayerCombatComp_h_204027240(TEXT("/Script/ProjectComboARPG"),
		Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerComponents_PlayerCombatComp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerComponents_PlayerCombatComp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
