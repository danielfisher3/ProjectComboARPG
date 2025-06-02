// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectComboARPG/Public/PlayerComponents/PlayerStatsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStatsComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PROJECTCOMBOARPG_API UClass* Z_Construct_UClass_UPlayerStatsComponent();
	PROJECTCOMBOARPG_API UClass* Z_Construct_UClass_UPlayerStatsComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectComboARPG();
// End Cross Module References
	void UPlayerStatsComponent::StaticRegisterNativesUPlayerStatsComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerStatsComponent);
	UClass* Z_Construct_UClass_UPlayerStatsComponent_NoRegister()
	{
		return UPlayerStatsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerStatsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentExpPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentExpPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerStatsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectComboARPG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatsComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerComponents/PlayerStatsComponent.h" },
		{ "ModuleRelativePath", "Public/PlayerComponents/PlayerStatsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/PlayerComponents/PlayerStatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStatsComponent, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_CurrentHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/PlayerComponents/PlayerStatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStatsComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/PlayerComponents/PlayerStatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStatsComponent, CurrentStamina), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_CurrentStamina_MetaData), Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_CurrentStamina_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/PlayerComponents/PlayerStatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStatsComponent, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxStamina_MetaData), Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxStamina_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_CurrentExpPoints_MetaData[] = {
		{ "Category", "XP" },
		{ "ModuleRelativePath", "Public/PlayerComponents/PlayerStatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_CurrentExpPoints = { "CurrentExpPoints", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStatsComponent, CurrentExpPoints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_CurrentExpPoints_MetaData), Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_CurrentExpPoints_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerStatsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_CurrentStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_MaxStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStatsComponent_Statics::NewProp_CurrentExpPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerStatsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerStatsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerStatsComponent_Statics::ClassParams = {
		&UPlayerStatsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerStatsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerStatsComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatsComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerStatsComponent()
	{
		if (!Z_Registration_Info_UClass_UPlayerStatsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerStatsComponent.OuterSingleton, Z_Construct_UClass_UPlayerStatsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerStatsComponent.OuterSingleton;
	}
	template<> PROJECTCOMBOARPG_API UClass* StaticClass<UPlayerStatsComponent>()
	{
		return UPlayerStatsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerStatsComponent);
	UPlayerStatsComponent::~UPlayerStatsComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerComponents_PlayerStatsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerComponents_PlayerStatsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerStatsComponent, UPlayerStatsComponent::StaticClass, TEXT("UPlayerStatsComponent"), &Z_Registration_Info_UClass_UPlayerStatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerStatsComponent), 937301494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerComponents_PlayerStatsComponent_h_4201650555(TEXT("/Script/ProjectComboARPG"),
		Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerComponents_PlayerStatsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_PlayerComponents_PlayerStatsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
