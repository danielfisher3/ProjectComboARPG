// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectComboARPG/Public/Controllers/PlController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	PROJECTCOMBOARPG_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	PROJECTCOMBOARPG_API UClass* Z_Construct_UClass_APlController();
	PROJECTCOMBOARPG_API UClass* Z_Construct_UClass_APlController_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectComboARPG();
// End Cross Module References
	void APlController::StaticRegisterNativesAPlController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlController);
	UClass* Z_Construct_UClass_APlController_NoRegister()
	{
		return APlController::StaticClass();
	}
	struct Z_Construct_UClass_APlController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PLChar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PLChar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDOverlayClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDOverlayClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDOverlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectComboARPG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/PlController.h" },
		{ "ModuleRelativePath", "Public/Controllers/PlController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlController_Statics::NewProp_PLChar_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerRef" },
		{ "ModuleRelativePath", "Public/Controllers/PlController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlController_Statics::NewProp_PLChar = { "PLChar", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlController, PLChar), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlController_Statics::NewProp_PLChar_MetaData), Z_Construct_UClass_APlController_Statics::NewProp_PLChar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlController_Statics::NewProp_HUDOverlayClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/Controllers/PlController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlController_Statics::NewProp_HUDOverlayClass = { "HUDOverlayClass", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlController, HUDOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlController_Statics::NewProp_HUDOverlayClass_MetaData), Z_Construct_UClass_APlController_Statics::NewProp_HUDOverlayClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlController_Statics::NewProp_HUDOverlay_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controllers/PlController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlController_Statics::NewProp_HUDOverlay = { "HUDOverlay", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlController, HUDOverlay), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlController_Statics::NewProp_HUDOverlay_MetaData), Z_Construct_UClass_APlController_Statics::NewProp_HUDOverlay_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlController_Statics::NewProp_PLChar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlController_Statics::NewProp_HUDOverlayClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlController_Statics::NewProp_HUDOverlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlController_Statics::ClassParams = {
		&APlController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlController_Statics::Class_MetaDataParams), Z_Construct_UClass_APlController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlController()
	{
		if (!Z_Registration_Info_UClass_APlController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlController.OuterSingleton, Z_Construct_UClass_APlController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlController.OuterSingleton;
	}
	template<> PROJECTCOMBOARPG_API UClass* StaticClass<APlController>()
	{
		return APlController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlController);
	APlController::~APlController() {}
	struct Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_Controllers_PlController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_Controllers_PlController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlController, APlController::StaticClass, TEXT("APlController"), &Z_Registration_Info_UClass_APlController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlController), 4232323363U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_Controllers_PlController_h_1108121089(TEXT("/Script/ProjectComboARPG"),
		Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_Controllers_PlController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Daniel_Documents_Unreal_Projects_ProjectComboARPG_Source_ProjectComboARPG_Public_Controllers_PlController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
