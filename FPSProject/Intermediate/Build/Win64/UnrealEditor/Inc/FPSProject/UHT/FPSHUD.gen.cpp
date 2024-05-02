// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSProject/FPSHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSHUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FPSPROJECT_API UClass* Z_Construct_UClass_AFPSHUD();
	FPSPROJECT_API UClass* Z_Construct_UClass_AFPSHUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSProject();
// End Cross Module References
	void AFPSHUD::StaticRegisterNativesAFPSHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSHUD);
	UClass* Z_Construct_UClass_AFPSHUD_NoRegister()
	{
		return AFPSHUD::StaticClass();
	}
	struct Z_Construct_UClass_AFPSHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FPSHUD.h" },
		{ "ModuleRelativePath", "FPSHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSHUD_Statics::NewProp_CrosshairTexture_MetaData[] = {
		{ "Category", "FPSHUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This will be drawn at the center of the screen.\n" },
#endif
		{ "ModuleRelativePath", "FPSHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will be drawn at the center of the screen." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSHUD_Statics::NewProp_CrosshairTexture = { "CrosshairTexture", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSHUD, CrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSHUD_Statics::NewProp_CrosshairTexture_MetaData), Z_Construct_UClass_AFPSHUD_Statics::NewProp_CrosshairTexture_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSHUD_Statics::NewProp_CrosshairTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSHUD_Statics::ClassParams = {
		&AFPSHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFPSHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFPSHUD()
	{
		if (!Z_Registration_Info_UClass_AFPSHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSHUD.OuterSingleton, Z_Construct_UClass_AFPSHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPSHUD.OuterSingleton;
	}
	template<> FPSPROJECT_API UClass* StaticClass<AFPSHUD>()
	{
		return AFPSHUD::StaticClass();
	}
	AFPSHUD::AFPSHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSHUD);
	AFPSHUD::~AFPSHUD() {}
	struct Z_CompiledInDeferFile_FID_Users_johnp_OneDrive_Desktop_GMD200_FPS_WB_FPSProject_Source_FPSProject_FPSHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_johnp_OneDrive_Desktop_GMD200_FPS_WB_FPSProject_Source_FPSProject_FPSHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPSHUD, AFPSHUD::StaticClass, TEXT("AFPSHUD"), &Z_Registration_Info_UClass_AFPSHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSHUD), 408750877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_johnp_OneDrive_Desktop_GMD200_FPS_WB_FPSProject_Source_FPSProject_FPSHUD_h_2633757155(TEXT("/Script/FPSProject"),
		Z_CompiledInDeferFile_FID_Users_johnp_OneDrive_Desktop_GMD200_FPS_WB_FPSProject_Source_FPSProject_FPSHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_johnp_OneDrive_Desktop_GMD200_FPS_WB_FPSProject_Source_FPSProject_FPSHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
