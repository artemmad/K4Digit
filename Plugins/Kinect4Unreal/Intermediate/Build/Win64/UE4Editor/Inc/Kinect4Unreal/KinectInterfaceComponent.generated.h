// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
struct FVector;
class UTexture2D;
struct FRotator;
#ifdef KINECT4UNREAL_KinectInterfaceComponent_generated_h
#error "KinectInterfaceComponent.generated.h already included, missing '#pragma once' in KinectInterfaceComponent.h"
#endif
#define KINECT4UNREAL_KinectInterfaceComponent_generated_h

#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLeanAmount) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetLeanAmount(EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertDepthPixelCoordinatesToUVCoordinates) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_DepthPixelCoordinates); \
		P_GET_UBOOL_REF(Z_Param_Out_InputIsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->ConvertDepthPixelCoordinatesToUVCoordinates(Z_Param_DepthPixelCoordinates,Z_Param_Out_InputIsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertRGBPixelCoordinatesToUVCoordinates) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_RGBPixelCoordinates); \
		P_GET_UBOOL_REF(Z_Param_Out_InputIsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->ConvertRGBPixelCoordinatesToUVCoordinates(Z_Param_RGBPixelCoordinates,Z_Param_Out_InputIsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertPositionToDepthPixelCoordinates) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_UBOOL_REF(Z_Param_Out_InputIsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->ConvertPositionToDepthPixelCoordinates(Z_Param_Position,Z_Param_Out_InputIsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertPositionToRGBPixelCoordinates) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_UBOOL_REF(Z_Param_Out_InputIsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->ConvertPositionToRGBPixelCoordinates(Z_Param_Position,Z_Param_Out_InputIsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertCoordinates) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InputCoordinateSystem); \
		P_GET_STRUCT(FVector,Z_Param_InputValue); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OutputCoordinateSystem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKinectInterfaceComponent::ConvertCoordinates(ECoordinateConvention::Type(Z_Param_InputCoordinateSystem),Z_Param_InputValue,ECoordinateConvention::Type(Z_Param_OutputCoordinateSystem)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFilteredBodies) \
	{ \
		P_GET_TARRAY(TEnumAsByte<EBodyNumber::Type>,Z_Param_Bodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFilteredBodies(Z_Param_Bodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCameraFrameIsUpdating) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_KinectCameraType); \
		P_GET_UBOOL(Z_Param_IsUpdating); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCameraFrameIsUpdating(EKinectCameraType::Type(Z_Param_KinectCameraType),Z_Param_IsUpdating); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraFrame) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_KinectCameraType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetCameraFrame(EKinectCameraType::Type(Z_Param_KinectCameraType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackedBodies) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TEnumAsByte<EBodyNumber::Type> >*)Z_Param__Result=P_THIS->GetTrackedBodies(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenteredBody) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_CenteredBody); \
		P_GET_UBOOL_REF(Z_Param_Out_IsTracked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCenteredBody((TEnumAsByte<EBodyNumber::Type>&)(Z_Param_Out_CenteredBody),Z_Param_Out_IsTracked); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNearestBody) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NearestBody); \
		P_GET_UBOOL_REF(Z_Param_Out_IsTracked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNearestBody((TEnumAsByte<EBodyNumber::Type>&)(Z_Param_Out_NearestBody),Z_Param_Out_IsTracked); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBodyTracked) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBodyTracked(EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execGetHandStateAsExecution) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Hand); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_HandState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetHandStateAsExecution(EHands::Type(Z_Param_Hand),EBodyNumber::Type(Z_Param_BodyNumber),(TEnumAsByte<EHandState::Type>&)(Z_Param_Out_HandState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetSmoothingParameters) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetSmoothingParameters(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSmoothingParameters) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RotationSpikeThreshold); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RotationSpikeClampWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSmoothingParameters(Z_Param_RotationSpikeThreshold,Z_Param_RotationSpikeClampWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPitchAdjustedJointPosition) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_JointType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPitchAdjustedJointPosition(EKinectJoints::Type(Z_Param_JointType),EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJointRelativePosition) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_StartJoint); \
		P_GET_PROPERTY(UByteProperty,Z_Param_StartJointBodyNumber); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EndJoint); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EndJointBodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetJointRelativePosition(EKinectJoints::Type(Z_Param_StartJoint),EBodyNumber::Type(Z_Param_StartJointBodyNumber),EKinectJoints::Type(Z_Param_EndJoint),EBodyNumber::Type(Z_Param_EndJointBodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceBetweenJoints) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_StartJoint); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EndJoint); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDistanceBetweenJoints(EKinectJoints::Type(Z_Param_StartJoint),EKinectJoints::Type(Z_Param_EndJoint),EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJointConfidence) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_JointType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ETrackingConfidenceType::Type>*)Z_Param__Result=P_THIS->GetJointConfidence(EKinectJoints::Type(Z_Param_JointType),EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSmoothedJointOrientation) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_JointType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetSmoothedJointOrientation(EKinectJoints::Type(Z_Param_JointType),EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJointOrientation) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_JointType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetJointOrientation(EKinectJoints::Type(Z_Param_JointType),EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJointDeltaPosition) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_JointType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetJointDeltaPosition(EKinectJoints::Type(Z_Param_JointType),EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJointAbsolutePosition) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_JointType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetJointAbsolutePosition(EKinectJoints::Type(Z_Param_JointType),EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAudioBeamRotationInDegrees) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAudioBeamRotationInDegrees(Z_Param_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAudioBeamMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_BeamMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAudioBeamMode(EAudioBeamMode::Type(Z_Param_BeamMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioBeamRotationInDegrees) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAudioBeamRotationInDegrees(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMicrophoneVolumeIntensity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMicrophoneVolumeIntensity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKinectPitch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetKinectPitch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsKinectAwake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsKinectAwake(); \
		P_NATIVE_END; \
	}


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLeanAmount) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetLeanAmount(EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertDepthPixelCoordinatesToUVCoordinates) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_DepthPixelCoordinates); \
		P_GET_UBOOL_REF(Z_Param_Out_InputIsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->ConvertDepthPixelCoordinatesToUVCoordinates(Z_Param_DepthPixelCoordinates,Z_Param_Out_InputIsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertRGBPixelCoordinatesToUVCoordinates) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_RGBPixelCoordinates); \
		P_GET_UBOOL_REF(Z_Param_Out_InputIsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->ConvertRGBPixelCoordinatesToUVCoordinates(Z_Param_RGBPixelCoordinates,Z_Param_Out_InputIsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertPositionToDepthPixelCoordinates) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_UBOOL_REF(Z_Param_Out_InputIsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->ConvertPositionToDepthPixelCoordinates(Z_Param_Position,Z_Param_Out_InputIsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertPositionToRGBPixelCoordinates) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_UBOOL_REF(Z_Param_Out_InputIsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->ConvertPositionToRGBPixelCoordinates(Z_Param_Position,Z_Param_Out_InputIsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertCoordinates) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InputCoordinateSystem); \
		P_GET_STRUCT(FVector,Z_Param_InputValue); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OutputCoordinateSystem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UKinectInterfaceComponent::ConvertCoordinates(ECoordinateConvention::Type(Z_Param_InputCoordinateSystem),Z_Param_InputValue,ECoordinateConvention::Type(Z_Param_OutputCoordinateSystem)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFilteredBodies) \
	{ \
		P_GET_TARRAY(TEnumAsByte<EBodyNumber::Type>,Z_Param_Bodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFilteredBodies(Z_Param_Bodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCameraFrameIsUpdating) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_KinectCameraType); \
		P_GET_UBOOL(Z_Param_IsUpdating); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCameraFrameIsUpdating(EKinectCameraType::Type(Z_Param_KinectCameraType),Z_Param_IsUpdating); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraFrame) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_KinectCameraType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetCameraFrame(EKinectCameraType::Type(Z_Param_KinectCameraType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackedBodies) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TEnumAsByte<EBodyNumber::Type> >*)Z_Param__Result=P_THIS->GetTrackedBodies(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenteredBody) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_CenteredBody); \
		P_GET_UBOOL_REF(Z_Param_Out_IsTracked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCenteredBody((TEnumAsByte<EBodyNumber::Type>&)(Z_Param_Out_CenteredBody),Z_Param_Out_IsTracked); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNearestBody) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_NearestBody); \
		P_GET_UBOOL_REF(Z_Param_Out_IsTracked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNearestBody((TEnumAsByte<EBodyNumber::Type>&)(Z_Param_Out_NearestBody),Z_Param_Out_IsTracked); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBodyTracked) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBodyTracked(EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execGetHandStateAsExecution) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Hand); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_HandState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetHandStateAsExecution(EHands::Type(Z_Param_Hand),EBodyNumber::Type(Z_Param_BodyNumber),(TEnumAsByte<EHandState::Type>&)(Z_Param_Out_HandState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetSmoothingParameters) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetSmoothingParameters(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSmoothingParameters) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RotationSpikeThreshold); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RotationSpikeClampWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSmoothingParameters(Z_Param_RotationSpikeThreshold,Z_Param_RotationSpikeClampWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPitchAdjustedJointPosition) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_JointType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPitchAdjustedJointPosition(EKinectJoints::Type(Z_Param_JointType),EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJointRelativePosition) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_StartJoint); \
		P_GET_PROPERTY(UByteProperty,Z_Param_StartJointBodyNumber); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EndJoint); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EndJointBodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetJointRelativePosition(EKinectJoints::Type(Z_Param_StartJoint),EBodyNumber::Type(Z_Param_StartJointBodyNumber),EKinectJoints::Type(Z_Param_EndJoint),EBodyNumber::Type(Z_Param_EndJointBodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceBetweenJoints) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_StartJoint); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EndJoint); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDistanceBetweenJoints(EKinectJoints::Type(Z_Param_StartJoint),EKinectJoints::Type(Z_Param_EndJoint),EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJointConfidence) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_JointType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ETrackingConfidenceType::Type>*)Z_Param__Result=P_THIS->GetJointConfidence(EKinectJoints::Type(Z_Param_JointType),EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSmoothedJointOrientation) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_JointType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetSmoothedJointOrientation(EKinectJoints::Type(Z_Param_JointType),EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJointOrientation) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_JointType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetJointOrientation(EKinectJoints::Type(Z_Param_JointType),EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJointDeltaPosition) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_JointType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetJointDeltaPosition(EKinectJoints::Type(Z_Param_JointType),EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJointAbsolutePosition) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_JointType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_BodyNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetJointAbsolutePosition(EKinectJoints::Type(Z_Param_JointType),EBodyNumber::Type(Z_Param_BodyNumber)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAudioBeamRotationInDegrees) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAudioBeamRotationInDegrees(Z_Param_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAudioBeamMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_BeamMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAudioBeamMode(EAudioBeamMode::Type(Z_Param_BeamMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioBeamRotationInDegrees) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAudioBeamRotationInDegrees(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMicrophoneVolumeIntensity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMicrophoneVolumeIntensity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKinectPitch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetKinectPitch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsKinectAwake) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsKinectAwake(); \
		P_NATIVE_END; \
	}


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKinectInterfaceComponent(); \
	friend struct Z_Construct_UClass_UKinectInterfaceComponent_Statics; \
public: \
	DECLARE_CLASS(UKinectInterfaceComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kinect4Unreal"), NO_API) \
	DECLARE_SERIALIZER(UKinectInterfaceComponent)


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUKinectInterfaceComponent(); \
	friend struct Z_Construct_UClass_UKinectInterfaceComponent_Statics; \
public: \
	DECLARE_CLASS(UKinectInterfaceComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Kinect4Unreal"), NO_API) \
	DECLARE_SERIALIZER(UKinectInterfaceComponent)


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKinectInterfaceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKinectInterfaceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKinectInterfaceComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKinectInterfaceComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKinectInterfaceComponent(UKinectInterfaceComponent&&); \
	NO_API UKinectInterfaceComponent(const UKinectInterfaceComponent&); \
public:


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKinectInterfaceComponent(UKinectInterfaceComponent&&); \
	NO_API UKinectInterfaceComponent(const UKinectInterfaceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKinectInterfaceComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKinectInterfaceComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKinectInterfaceComponent)


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h_12_PROLOG
#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h_15_RPC_WRAPPERS \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h_15_INCLASS \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h_15_INCLASS_NO_PURE_DECLS \
	K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectInterfaceComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
