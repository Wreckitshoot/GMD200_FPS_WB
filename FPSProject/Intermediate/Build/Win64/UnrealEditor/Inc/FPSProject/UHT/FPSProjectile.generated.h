// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FPSPROJECT_FPSProjectile_generated_h
#error "FPSProjectile.generated.h already included, missing '#pragma once' in FPSProjectile.h"
#endif
#define FPSPROJECT_FPSProjectile_generated_h

#define FID_Users_william_bishop_Documents_Unreal_Projects_fps_FPSProject_Source_FPSProject_FPSProjectile_h_12_SPARSE_DATA
#define FID_Users_william_bishop_Documents_Unreal_Projects_fps_FPSProject_Source_FPSProject_FPSProjectile_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_william_bishop_Documents_Unreal_Projects_fps_FPSProject_Source_FPSProject_FPSProjectile_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_william_bishop_Documents_Unreal_Projects_fps_FPSProject_Source_FPSProject_FPSProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_william_bishop_Documents_Unreal_Projects_fps_FPSProject_Source_FPSProject_FPSProjectile_h_12_ACCESSORS
#define FID_Users_william_bishop_Documents_Unreal_Projects_fps_FPSProject_Source_FPSProject_FPSProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSProjectile(); \
	friend struct Z_Construct_UClass_AFPSProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSProjectile)


#define FID_Users_william_bishop_Documents_Unreal_Projects_fps_FPSProject_Source_FPSProject_FPSProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSProjectile(AFPSProjectile&&); \
	NO_API AFPSProjectile(const AFPSProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSProjectile) \
	NO_API virtual ~AFPSProjectile();


#define FID_Users_william_bishop_Documents_Unreal_Projects_fps_FPSProject_Source_FPSProject_FPSProjectile_h_9_PROLOG
#define FID_Users_william_bishop_Documents_Unreal_Projects_fps_FPSProject_Source_FPSProject_FPSProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_william_bishop_Documents_Unreal_Projects_fps_FPSProject_Source_FPSProject_FPSProjectile_h_12_SPARSE_DATA \
	FID_Users_william_bishop_Documents_Unreal_Projects_fps_FPSProject_Source_FPSProject_FPSProjectile_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_william_bishop_Documents_Unreal_Projects_fps_FPSProject_Source_FPSProject_FPSProjectile_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_william_bishop_Documents_Unreal_Projects_fps_FPSProject_Source_FPSProject_FPSProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_william_bishop_Documents_Unreal_Projects_fps_FPSProject_Source_FPSProject_FPSProjectile_h_12_ACCESSORS \
	FID_Users_william_bishop_Documents_Unreal_Projects_fps_FPSProject_Source_FPSProject_FPSProjectile_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_william_bishop_Documents_Unreal_Projects_fps_FPSProject_Source_FPSProject_FPSProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSPROJECT_API UClass* StaticClass<class AFPSProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_william_bishop_Documents_Unreal_Projects_fps_FPSProject_Source_FPSProject_FPSProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
