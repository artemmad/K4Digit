// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KINECT4UNREAL_KinectDataTypes_generated_h
#error "KinectDataTypes.generated.h already included, missing '#pragma once' in KinectDataTypes.h"
#endif
#define KINECT4UNREAL_KinectDataTypes_generated_h

#define K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectDataTypes_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKinectBodyData_Statics; \
	static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID K4UIntroduction_Plugins_Kinect4Unreal_Source_Kinect4Unreal_Private_KinectDataTypes_h


#define FOREACH_ENUM_ETRACKINGCONFIDENCETYPE(op) \
	op(ETrackingConfidenceType::NotTracked) \
	op(ETrackingConfidenceType::Inferred) \
	op(ETrackingConfidenceType::Tracked) 
#define FOREACH_ENUM_EKINECTCAMERATYPE(op) \
	op(EKinectCameraType::RGB) \
	op(EKinectCameraType::IR) \
	op(EKinectCameraType::Depth) \
	op(EKinectCameraType::BodyFilterDepth) \
	op(EKinectCameraType::BodyFilterRGB) 
#define FOREACH_ENUM_EHANDSTATE(op) \
	op(EHandState::Unknown) \
	op(EHandState::NotTracked) \
	op(EHandState::Open) \
	op(EHandState::Closed) \
	op(EHandState::Lasso) 
#define FOREACH_ENUM_EAUDIOBEAMMODE(op) \
	op(EAudioBeamMode::AudioBeamMode_Automatic) \
	op(EAudioBeamMode::AudioBeamMode_Manual) 
#define FOREACH_ENUM_EHANDS(op) \
	op(EHands::Left) \
	op(EHands::Right) 
#define FOREACH_ENUM_EKINECTJOINTS(op) \
	op(EKinectJoints::SpineBase) \
	op(EKinectJoints::SpineMid) \
	op(EKinectJoints::Neck) \
	op(EKinectJoints::Head) \
	op(EKinectJoints::ShoulderLeft) \
	op(EKinectJoints::ElbowLeft) \
	op(EKinectJoints::WristLeft) \
	op(EKinectJoints::HandLeft) \
	op(EKinectJoints::ShoulderRight) \
	op(EKinectJoints::ElbowRight) \
	op(EKinectJoints::WristRight) \
	op(EKinectJoints::HandRight) \
	op(EKinectJoints::HipLeft) \
	op(EKinectJoints::KneeLeft) \
	op(EKinectJoints::AnkleLeft) \
	op(EKinectJoints::FootLeft) \
	op(EKinectJoints::HipRight) \
	op(EKinectJoints::KneeRight) \
	op(EKinectJoints::AnkleRight) \
	op(EKinectJoints::FootRight) \
	op(EKinectJoints::SpineShoulder) \
	op(EKinectJoints::HandTipLeft) \
	op(EKinectJoints::ThumbLeft) \
	op(EKinectJoints::HandTipRight) \
	op(EKinectJoints::ThumbRight) 
#define FOREACH_ENUM_ECOORDINATECONVENTION(op) \
	op(ECoordinateConvention::Unreal) \
	op(ECoordinateConvention::Kinect) 
#define FOREACH_ENUM_EBODYNUMBER(op) \
	op(EBodyNumber::Body0) \
	op(EBodyNumber::Body1) \
	op(EBodyNumber::Body2) \
	op(EBodyNumber::Body3) \
	op(EBodyNumber::Body4) \
	op(EBodyNumber::Body5) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
