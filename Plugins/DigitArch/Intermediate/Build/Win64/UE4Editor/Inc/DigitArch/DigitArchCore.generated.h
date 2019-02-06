// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPointVariable;
enum class CameraType : uint8;
class UDigitArchCore;
#ifdef DIGITARCH_DigitArchCore_generated_h
#error "DigitArchCore.generated.h already included, missing '#pragma once' in DigitArchCore.h"
#endif
#define DIGITARCH_DigitArchCore_generated_h

#define Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPoint) \
	{ \
		P_GET_TARRAY(FPointVariable,Z_Param_Points); \
		P_GET_UBOOL(Z_Param_log_to_file); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPoint(Z_Param_Points,Z_Param_log_to_file); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateDigitArchCore) \
	{ \
		P_GET_ENUM(CameraType,Z_Param_camera_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDigitArchCore**)Z_Param__Result=UDigitArchCore::CreateDigitArchCore(CameraType(Z_Param_camera_type)); \
		P_NATIVE_END; \
	}


#define Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPoint) \
	{ \
		P_GET_TARRAY(FPointVariable,Z_Param_Points); \
		P_GET_UBOOL(Z_Param_log_to_file); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPoint(Z_Param_Points,Z_Param_log_to_file); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateDigitArchCore) \
	{ \
		P_GET_ENUM(CameraType,Z_Param_camera_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDigitArchCore**)Z_Param__Result=UDigitArchCore::CreateDigitArchCore(CameraType(Z_Param_camera_type)); \
		P_NATIVE_END; \
	}


#define Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDigitArchCore(); \
	friend struct Z_Construct_UClass_UDigitArchCore_Statics; \
public: \
	DECLARE_CLASS(UDigitArchCore, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DigitArch"), NO_API) \
	DECLARE_SERIALIZER(UDigitArchCore)


#define Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDigitArchCore(); \
	friend struct Z_Construct_UClass_UDigitArchCore_Statics; \
public: \
	DECLARE_CLASS(UDigitArchCore, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DigitArch"), NO_API) \
	DECLARE_SERIALIZER(UDigitArchCore)


#define Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDigitArchCore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDigitArchCore) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDigitArchCore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDigitArchCore); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDigitArchCore(UDigitArchCore&&); \
	NO_API UDigitArchCore(const UDigitArchCore&); \
public:


#define Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDigitArchCore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDigitArchCore(UDigitArchCore&&); \
	NO_API UDigitArchCore(const UDigitArchCore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDigitArchCore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDigitArchCore); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDigitArchCore)


#define Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h_16_PRIVATE_PROPERTY_OFFSET
#define Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h_13_PROLOG
#define Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h_16_PRIVATE_PROPERTY_OFFSET \
	Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h_16_RPC_WRAPPERS \
	Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h_16_INCLASS \
	Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h_16_PRIVATE_PROPERTY_OFFSET \
	Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h_16_INCLASS_NO_PURE_DECLS \
	Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Users_wowiv_Desktop_UE_Custom_Plugin_DigitArch_HostProject_Plugins_DigitArch_Source_DigitArch_Public_DigitArchCore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
