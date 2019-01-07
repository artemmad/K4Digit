// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef KINECT4UNREAL_KinectHelpers_generated_h
#error "KinectHelpers.generated.h already included, missing '#pragma once' in KinectHelpers.h"
#endif
#define KINECT4UNREAL_KinectHelpers_generated_h

#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertCoordinates) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InputCoordinateSystem); \
		P_GET_STRUCT(FVector,Z_Param_InputValue); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OutputCoordinateSystem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKinectHelpers::ConvertCoordinates(ECoordinateConvention::Type(Z_Param_InputCoordinateSystem),Z_Param_InputValue,ECoordinateConvention::Type(Z_Param_OutputCoordinateSystem)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvateeringConversionRotator) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_JointType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKinectHelpers::GetAvateeringConversionRotator(EKinectJoints::Type(Z_Param_JointType)); \
		P_NATIVE_END; \
	}


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertCoordinates) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InputCoordinateSystem); \
		P_GET_STRUCT(FVector,Z_Param_InputValue); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OutputCoordinateSystem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKinectHelpers::ConvertCoordinates(ECoordinateConvention::Type(Z_Param_InputCoordinateSystem),Z_Param_InputValue,ECoordinateConvention::Type(Z_Param_OutputCoordinateSystem)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvateeringConversionRotator) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_JointType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UKinectHelpers::GetAvateeringConversionRotator(EKinectJoints::Type(Z_Param_JointType)); \
		P_NATIVE_END; \
	}


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKinectHelpers(); \
	friend struct Z_Construct_UClass_UKinectHelpers_Statics; \
public: \
	DECLARE_CLASS(UKinectHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kinect4Unreal"), NO_API) \
	DECLARE_SERIALIZER(UKinectHelpers)


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUKinectHelpers(); \
	friend struct Z_Construct_UClass_UKinectHelpers_Statics; \
public: \
	DECLARE_CLASS(UKinectHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kinect4Unreal"), NO_API) \
	DECLARE_SERIALIZER(UKinectHelpers)


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKinectHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKinectHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKinectHelpers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKinectHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKinectHelpers(UKinectHelpers&&); \
	NO_API UKinectHelpers(const UKinectHelpers&); \
public:


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKinectHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKinectHelpers(UKinectHelpers&&); \
	NO_API UKinectHelpers(const UKinectHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKinectHelpers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKinectHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKinectHelpers)


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h_10_PRIVATE_PROPERTY_OFFSET
#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h_7_PROLOG
#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h_10_PRIVATE_PROPERTY_OFFSET \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h_10_RPC_WRAPPERS \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h_10_INCLASS \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h_10_PRIVATE_PROPERTY_OFFSET \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h_10_INCLASS_NO_PURE_DECLS \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
