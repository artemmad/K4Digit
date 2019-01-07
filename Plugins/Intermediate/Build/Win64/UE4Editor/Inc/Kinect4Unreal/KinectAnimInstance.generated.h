// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
#ifdef KINECT4UNREAL_KinectAnimInstance_generated_h
#error "KinectAnimInstance.generated.h already included, missing '#pragma once' in KinectAnimInstance.h"
#endif
#define KINECT4UNREAL_KinectAnimInstance_generated_h

#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHandState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Hand); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EHandState::Type>*)Z_Param__Result=P_THIS->GetHandState(EHands::Type(Z_Param_Hand),EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConvertedJointOrientation) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_JointType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetConvertedJointOrientation(EKinectJoints::Type(Z_Param_JointType),EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	}


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHandState) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Hand); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EHandState::Type>*)Z_Param__Result=P_THIS->GetHandState(EHands::Type(Z_Param_Hand),EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConvertedJointOrientation) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_JointType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetConvertedJointOrientation(EKinectJoints::Type(Z_Param_JointType),EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	}


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKinectAnimInstance(); \
	friend struct Z_Construct_UClass_UKinectAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UKinectAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Kinect4Unreal"), NO_API) \
	DECLARE_SERIALIZER(UKinectAnimInstance)


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUKinectAnimInstance(); \
	friend struct Z_Construct_UClass_UKinectAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UKinectAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Kinect4Unreal"), NO_API) \
	DECLARE_SERIALIZER(UKinectAnimInstance)


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKinectAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKinectAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKinectAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKinectAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKinectAnimInstance(UKinectAnimInstance&&); \
	NO_API UKinectAnimInstance(const UKinectAnimInstance&); \
public:


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKinectAnimInstance(UKinectAnimInstance&&); \
	NO_API UKinectAnimInstance(const UKinectAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKinectAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKinectAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKinectAnimInstance)


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h_12_PROLOG
#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h_15_RPC_WRAPPERS \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h_15_INCLASS \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_Avateering_KinectAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
