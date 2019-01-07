// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kinect4Unreal/Private/Kinect4UnrealPrivatePCH.h"
#include "Kinect4Unreal/Private/KinectInterfaceComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKinectInterfaceComponent() {}
// Cross Module References
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UKinectInterfaceComponent_NoRegister();
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UKinectInterfaceComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Kinect4Unreal();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_ECoordinateConvention();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetAudioBeamRotationInDegrees();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EKinectCameraType();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetCenteredBody();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EBodyNumber();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EKinectJoints();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EHandState();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EHands();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_ETrackingConfidenceType();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetKinectPitch();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetMicrophoneVolumeIntensity();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetNearestBody();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetTrackedBodies();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_IsKinectAwake();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_ResetSmoothingParameters();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamMode();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EAudioBeamMode();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamRotationInDegrees();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_SetFilteredBodies();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters();
// End Cross Module References
	void UKinectInterfaceComponent::StaticRegisterNativesUKinectInterfaceComponent()
	{
		UClass* Class = UKinectInterfaceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertCoordinates", &UKinectInterfaceComponent::execConvertCoordinates },
			{ "ConvertDepthPixelCoordinatesToUVCoordinates", &UKinectInterfaceComponent::execConvertDepthPixelCoordinatesToUVCoordinates },
			{ "ConvertPositionToDepthPixelCoordinates", &UKinectInterfaceComponent::execConvertPositionToDepthPixelCoordinates },
			{ "ConvertPositionToRGBPixelCoordinates", &UKinectInterfaceComponent::execConvertPositionToRGBPixelCoordinates },
			{ "ConvertRGBPixelCoordinatesToUVCoordinates", &UKinectInterfaceComponent::execConvertRGBPixelCoordinatesToUVCoordinates },
			{ "GetAudioBeamRotationInDegrees", &UKinectInterfaceComponent::execGetAudioBeamRotationInDegrees },
			{ "GetCameraFrame", &UKinectInterfaceComponent::execGetCameraFrame },
			{ "GetCenteredBody", &UKinectInterfaceComponent::execGetCenteredBody },
			{ "GetDistanceBetweenJoints", &UKinectInterfaceComponent::execGetDistanceBetweenJoints },
			{ "GetHandState", &UKinectInterfaceComponent::execGetHandState },
			{ "GetHandStateAsExecution", &UKinectInterfaceComponent::execGetHandStateAsExecution },
			{ "GetJointAbsolutePosition", &UKinectInterfaceComponent::execGetJointAbsolutePosition },
			{ "GetJointConfidence", &UKinectInterfaceComponent::execGetJointConfidence },
			{ "GetJointDeltaPosition", &UKinectInterfaceComponent::execGetJointDeltaPosition },
			{ "GetJointOrientation", &UKinectInterfaceComponent::execGetJointOrientation },
			{ "GetJointRelativePosition", &UKinectInterfaceComponent::execGetJointRelativePosition },
			{ "GetKinectPitch", &UKinectInterfaceComponent::execGetKinectPitch },
			{ "GetLeanAmount", &UKinectInterfaceComponent::execGetLeanAmount },
			{ "GetMicrophoneVolumeIntensity", &UKinectInterfaceComponent::execGetMicrophoneVolumeIntensity },
			{ "GetNearestBody", &UKinectInterfaceComponent::execGetNearestBody },
			{ "GetPitchAdjustedJointPosition", &UKinectInterfaceComponent::execGetPitchAdjustedJointPosition },
			{ "GetSmoothedJointOrientation", &UKinectInterfaceComponent::execGetSmoothedJointOrientation },
			{ "GetTrackedBodies", &UKinectInterfaceComponent::execGetTrackedBodies },
			{ "IsBodyTracked", &UKinectInterfaceComponent::execIsBodyTracked },
			{ "IsKinectAwake", &UKinectInterfaceComponent::execIsKinectAwake },
			{ "ResetSmoothingParameters", &UKinectInterfaceComponent::execResetSmoothingParameters },
			{ "SetAudioBeamMode", &UKinectInterfaceComponent::execSetAudioBeamMode },
			{ "SetAudioBeamRotationInDegrees", &UKinectInterfaceComponent::execSetAudioBeamRotationInDegrees },
			{ "SetCameraFrameIsUpdating", &UKinectInterfaceComponent::execSetCameraFrameIsUpdating },
			{ "SetFilteredBodies", &UKinectInterfaceComponent::execSetFilteredBodies },
			{ "SetSmoothingParameters", &UKinectInterfaceComponent::execSetSmoothingParameters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics
	{
		struct KinectInterfaceComponent_eventConvertCoordinates_Parms
		{
			TEnumAsByte<ECoordinateConvention::Type> InputCoordinateSystem;
			FVector InputValue;
			TEnumAsByte<ECoordinateConvention::Type> OutputCoordinateSystem;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputCoordinateSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputCoordinateSystem;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputCoordinateSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputCoordinateSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventConvertCoordinates_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::NewProp_OutputCoordinateSystem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::NewProp_OutputCoordinateSystem = { UE4CodeGen_Private::EPropertyClass::Byte, "OutputCoordinateSystem", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventConvertCoordinates_Parms, OutputCoordinateSystem), Z_Construct_UEnum_Kinect4Unreal_ECoordinateConvention, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::NewProp_OutputCoordinateSystem_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::NewProp_OutputCoordinateSystem_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::NewProp_InputValue = { UE4CodeGen_Private::EPropertyClass::Struct, "InputValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventConvertCoordinates_Parms, InputValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::NewProp_InputCoordinateSystem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::NewProp_InputCoordinateSystem = { UE4CodeGen_Private::EPropertyClass::Byte, "InputCoordinateSystem", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventConvertCoordinates_Parms, InputCoordinateSystem), Z_Construct_UEnum_Kinect4Unreal_ECoordinateConvention, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::NewProp_InputCoordinateSystem_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::NewProp_InputCoordinateSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::NewProp_OutputCoordinateSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::NewProp_InputValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::NewProp_InputCoordinateSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Joints" },
		{ "Keywords", "Axis" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns a converted FVector for the specified co-ordinated system and units." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "ConvertCoordinates", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(KinectInterfaceComponent_eventConvertCoordinates_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates_Statics
	{
		struct KinectInterfaceComponent_eventConvertDepthPixelCoordinatesToUVCoordinates_Parms
		{
			FVector2D DepthPixelCoordinates;
			bool InputIsValid;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_InputIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InputIsValid;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DepthPixelCoordinates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventConvertDepthPixelCoordinatesToUVCoordinates_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates_Statics::NewProp_InputIsValid_SetBit(void* Obj)
	{
		((KinectInterfaceComponent_eventConvertDepthPixelCoordinatesToUVCoordinates_Parms*)Obj)->InputIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates_Statics::NewProp_InputIsValid = { UE4CodeGen_Private::EPropertyClass::Bool, "InputIsValid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KinectInterfaceComponent_eventConvertDepthPixelCoordinatesToUVCoordinates_Parms), &Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates_Statics::NewProp_InputIsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates_Statics::NewProp_DepthPixelCoordinates = { UE4CodeGen_Private::EPropertyClass::Struct, "DepthPixelCoordinates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventConvertDepthPixelCoordinatesToUVCoordinates_Parms, DepthPixelCoordinates), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates_Statics::NewProp_InputIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates_Statics::NewProp_DepthPixelCoordinates,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Coordinate Mapping" },
		{ "Keywords", "RGB, UV, pixel" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns the UV coordinates of the given Depth pixel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "ConvertDepthPixelCoordinatesToUVCoordinates", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(KinectInterfaceComponent_eventConvertDepthPixelCoordinatesToUVCoordinates_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates_Statics
	{
		struct KinectInterfaceComponent_eventConvertPositionToDepthPixelCoordinates_Parms
		{
			FVector Position;
			bool InputIsValid;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_InputIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InputIsValid;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventConvertPositionToDepthPixelCoordinates_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates_Statics::NewProp_InputIsValid_SetBit(void* Obj)
	{
		((KinectInterfaceComponent_eventConvertPositionToDepthPixelCoordinates_Parms*)Obj)->InputIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates_Statics::NewProp_InputIsValid = { UE4CodeGen_Private::EPropertyClass::Bool, "InputIsValid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KinectInterfaceComponent_eventConvertPositionToDepthPixelCoordinates_Parms), &Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates_Statics::NewProp_InputIsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventConvertPositionToDepthPixelCoordinates_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates_Statics::NewProp_InputIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Coordinate Mapping" },
		{ "Keywords", "Camera, RGB, depth, pixel" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns the pixel coordinates of the Depth camera frame which align with the given 3d position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "ConvertPositionToDepthPixelCoordinates", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(KinectInterfaceComponent_eventConvertPositionToDepthPixelCoordinates_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates_Statics
	{
		struct KinectInterfaceComponent_eventConvertPositionToRGBPixelCoordinates_Parms
		{
			FVector Position;
			bool InputIsValid;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_InputIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InputIsValid;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventConvertPositionToRGBPixelCoordinates_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates_Statics::NewProp_InputIsValid_SetBit(void* Obj)
	{
		((KinectInterfaceComponent_eventConvertPositionToRGBPixelCoordinates_Parms*)Obj)->InputIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates_Statics::NewProp_InputIsValid = { UE4CodeGen_Private::EPropertyClass::Bool, "InputIsValid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KinectInterfaceComponent_eventConvertPositionToRGBPixelCoordinates_Parms), &Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates_Statics::NewProp_InputIsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventConvertPositionToRGBPixelCoordinates_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates_Statics::NewProp_InputIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Coordinate Mapping" },
		{ "Keywords", "Camera, RGB, depth, pixel" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns the pixel coordinates of the RGB camera frame which align with the given 3d position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "ConvertPositionToRGBPixelCoordinates", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(KinectInterfaceComponent_eventConvertPositionToRGBPixelCoordinates_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates_Statics
	{
		struct KinectInterfaceComponent_eventConvertRGBPixelCoordinatesToUVCoordinates_Parms
		{
			FVector2D RGBPixelCoordinates;
			bool InputIsValid;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_InputIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InputIsValid;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RGBPixelCoordinates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventConvertRGBPixelCoordinatesToUVCoordinates_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates_Statics::NewProp_InputIsValid_SetBit(void* Obj)
	{
		((KinectInterfaceComponent_eventConvertRGBPixelCoordinatesToUVCoordinates_Parms*)Obj)->InputIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates_Statics::NewProp_InputIsValid = { UE4CodeGen_Private::EPropertyClass::Bool, "InputIsValid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KinectInterfaceComponent_eventConvertRGBPixelCoordinatesToUVCoordinates_Parms), &Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates_Statics::NewProp_InputIsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates_Statics::NewProp_RGBPixelCoordinates = { UE4CodeGen_Private::EPropertyClass::Struct, "RGBPixelCoordinates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventConvertRGBPixelCoordinatesToUVCoordinates_Parms, RGBPixelCoordinates), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates_Statics::NewProp_InputIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates_Statics::NewProp_RGBPixelCoordinates,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Coordinate Mapping" },
		{ "Keywords", "RGB, UV, pixel" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns the UV coordinates of the given RGB pixel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "ConvertRGBPixelCoordinatesToUVCoordinates", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(KinectInterfaceComponent_eventConvertRGBPixelCoordinatesToUVCoordinates_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_GetAudioBeamRotationInDegrees_Statics
	{
		struct KinectInterfaceComponent_eventGetAudioBeamRotationInDegrees_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetAudioBeamRotationInDegrees_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetAudioBeamRotationInDegrees_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_GetAudioBeamRotationInDegrees_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetAudioBeamRotationInDegrees_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetAudioBeamRotationInDegrees_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Audio" },
		{ "Keywords", "Sound" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns the angle in degrees pointing to the loudest Audio source in the room, relative to the centre of the Kinect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_GetAudioBeamRotationInDegrees_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "GetAudioBeamRotationInDegrees", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KinectInterfaceComponent_eventGetAudioBeamRotationInDegrees_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_GetAudioBeamRotationInDegrees_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetAudioBeamRotationInDegrees_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetAudioBeamRotationInDegrees_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetAudioBeamRotationInDegrees_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetAudioBeamRotationInDegrees()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_GetAudioBeamRotationInDegrees_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame_Statics
	{
		struct KinectInterfaceComponent_eventGetCameraFrame_Parms
		{
			TEnumAsByte<EKinectCameraType::Type> KinectCameraType;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KinectCameraType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KinectCameraType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetCameraFrame_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame_Statics::NewProp_KinectCameraType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame_Statics::NewProp_KinectCameraType = { UE4CodeGen_Private::EPropertyClass::Byte, "KinectCameraType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetCameraFrame_Parms, KinectCameraType), Z_Construct_UEnum_Kinect4Unreal_EKinectCameraType, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame_Statics::NewProp_KinectCameraType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame_Statics::NewProp_KinectCameraType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame_Statics::NewProp_KinectCameraType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Camera Streams" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Retrieves the dynamic, auto-updated texture from the given type of Kinect camera." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "GetCameraFrame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KinectInterfaceComponent_eventGetCameraFrame_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_GetCenteredBody_Statics
	{
		struct KinectInterfaceComponent_eventGetCenteredBody_Parms
		{
			TEnumAsByte<EBodyNumber::Type> CenteredBody;
			bool IsTracked;
		};
		static void NewProp_IsTracked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTracked;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CenteredBody;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKinectInterfaceComponent_GetCenteredBody_Statics::NewProp_IsTracked_SetBit(void* Obj)
	{
		((KinectInterfaceComponent_eventGetCenteredBody_Parms*)Obj)->IsTracked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetCenteredBody_Statics::NewProp_IsTracked = { UE4CodeGen_Private::EPropertyClass::Bool, "IsTracked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KinectInterfaceComponent_eventGetCenteredBody_Parms), &Z_Construct_UFunction_UKinectInterfaceComponent_GetCenteredBody_Statics::NewProp_IsTracked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetCenteredBody_Statics::NewProp_CenteredBody = { UE4CodeGen_Private::EPropertyClass::Byte, "CenteredBody", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetCenteredBody_Parms, CenteredBody), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_GetCenteredBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetCenteredBody_Statics::NewProp_IsTracked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetCenteredBody_Statics::NewProp_CenteredBody,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetCenteredBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Body Tracking" },
		{ "Keywords", "Centred, Player" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns the body number of the body closest to the centre of the Kinect's view." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_GetCenteredBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "GetCenteredBody", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(KinectInterfaceComponent_eventGetCenteredBody_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_GetCenteredBody_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetCenteredBody_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetCenteredBody_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetCenteredBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetCenteredBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_GetCenteredBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics
	{
		struct KinectInterfaceComponent_eventGetDistanceBetweenJoints_Parms
		{
			TEnumAsByte<EKinectJoints::Type> StartJoint;
			TEnumAsByte<EKinectJoints::Type> EndJoint;
			TEnumAsByte<EBodyNumber::Type> BodyNumber;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndJoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndJoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartJoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StartJoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetDistanceBetweenJoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::NewProp_BodyNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::NewProp_BodyNumber = { UE4CodeGen_Private::EPropertyClass::Byte, "BodyNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetDistanceBetweenJoints_Parms, BodyNumber), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::NewProp_BodyNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::NewProp_BodyNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::NewProp_EndJoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::NewProp_EndJoint = { UE4CodeGen_Private::EPropertyClass::Byte, "EndJoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetDistanceBetweenJoints_Parms, EndJoint), Z_Construct_UEnum_Kinect4Unreal_EKinectJoints, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::NewProp_EndJoint_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::NewProp_EndJoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::NewProp_StartJoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::NewProp_StartJoint = { UE4CodeGen_Private::EPropertyClass::Byte, "StartJoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetDistanceBetweenJoints_Parms, StartJoint), Z_Construct_UEnum_Kinect4Unreal_EKinectJoints, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::NewProp_StartJoint_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::NewProp_StartJoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::NewProp_BodyNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::NewProp_EndJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::NewProp_StartJoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Joints" },
		{ "Keywords", "Bone" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns distance between two joints in Unreal world co-ordinates." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "GetDistanceBetweenJoints", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KinectInterfaceComponent_eventGetDistanceBetweenJoints_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics
	{
		struct KinectInterfaceComponent_eventGetHandState_Parms
		{
			TEnumAsByte<EHands::Type> Hand;
			TEnumAsByte<EBodyNumber::Type> BodyNumber;
			TEnumAsByte<EHandState::Type> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000582, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetHandState_Parms, ReturnValue), Z_Construct_UEnum_Kinect4Unreal_EHandState, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::NewProp_BodyNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::NewProp_BodyNumber = { UE4CodeGen_Private::EPropertyClass::Byte, "BodyNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetHandState_Parms, BodyNumber), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::NewProp_BodyNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::NewProp_BodyNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::NewProp_Hand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Byte, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetHandState_Parms, Hand), Z_Construct_UEnum_Kinect4Unreal_EHands, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::NewProp_Hand_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::NewProp_Hand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::NewProp_BodyNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Hands" },
		{ "Keywords", "Gesture" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns the state of the input hand for the input body." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "GetHandState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KinectInterfaceComponent_eventGetHandState_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics
	{
		struct KinectInterfaceComponent_eventGetHandStateAsExecution_Parms
		{
			TEnumAsByte<EHands::Type> Hand;
			TEnumAsByte<EBodyNumber::Type> BodyNumber;
			TEnumAsByte<EHandState::Type> HandState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::NewProp_HandState = { UE4CodeGen_Private::EPropertyClass::Byte, "HandState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetHandStateAsExecution_Parms, HandState), Z_Construct_UEnum_Kinect4Unreal_EHandState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::NewProp_BodyNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::NewProp_BodyNumber = { UE4CodeGen_Private::EPropertyClass::Byte, "BodyNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetHandStateAsExecution_Parms, BodyNumber), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::NewProp_BodyNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::NewProp_BodyNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::NewProp_Hand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Byte, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetHandStateAsExecution_Parms, Hand), Z_Construct_UEnum_Kinect4Unreal_EHands, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::NewProp_Hand_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::NewProp_Hand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::NewProp_HandState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::NewProp_BodyNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Hands" },
		{ "ExpandEnumAsExecs", "HandState" },
		{ "Keywords", "Gesture" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns the input hand's state as execution pins for input body." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "GetHandStateAsExecution", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(KinectInterfaceComponent_eventGetHandStateAsExecution_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics
	{
		struct KinectInterfaceComponent_eventGetJointAbsolutePosition_Parms
		{
			TEnumAsByte<EKinectJoints::Type> JointType;
			TEnumAsByte<EBodyNumber::Type> BodyNumber;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JointType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetJointAbsolutePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::NewProp_BodyNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::NewProp_BodyNumber = { UE4CodeGen_Private::EPropertyClass::Byte, "BodyNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetJointAbsolutePosition_Parms, BodyNumber), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::NewProp_BodyNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::NewProp_BodyNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::NewProp_JointType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::NewProp_JointType = { UE4CodeGen_Private::EPropertyClass::Byte, "JointType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetJointAbsolutePosition_Parms, JointType), Z_Construct_UEnum_Kinect4Unreal_EKinectJoints, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::NewProp_JointType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::NewProp_JointType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::NewProp_BodyNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::NewProp_JointType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Joints" },
		{ "Keywords", "Bone, Location" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns an absolute position FVector for the specified joint, in Unreal co-ordinates." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "GetJointAbsolutePosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(KinectInterfaceComponent_eventGetJointAbsolutePosition_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics
	{
		struct KinectInterfaceComponent_eventGetJointConfidence_Parms
		{
			TEnumAsByte<EKinectJoints::Type> JointType;
			TEnumAsByte<EBodyNumber::Type> BodyNumber;
			TEnumAsByte<ETrackingConfidenceType::Type> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JointType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000582, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetJointConfidence_Parms, ReturnValue), Z_Construct_UEnum_Kinect4Unreal_ETrackingConfidenceType, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::NewProp_BodyNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::NewProp_BodyNumber = { UE4CodeGen_Private::EPropertyClass::Byte, "BodyNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetJointConfidence_Parms, BodyNumber), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::NewProp_BodyNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::NewProp_BodyNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::NewProp_JointType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::NewProp_JointType = { UE4CodeGen_Private::EPropertyClass::Byte, "JointType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetJointConfidence_Parms, JointType), Z_Construct_UEnum_Kinect4Unreal_EKinectJoints, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::NewProp_JointType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::NewProp_JointType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::NewProp_BodyNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::NewProp_JointType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Joints" },
		{ "Keywords", "Bone" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns the Kinect's confidence in tracking for the specified joint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "GetJointConfidence", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KinectInterfaceComponent_eventGetJointConfidence_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics
	{
		struct KinectInterfaceComponent_eventGetJointDeltaPosition_Parms
		{
			TEnumAsByte<EKinectJoints::Type> JointType;
			TEnumAsByte<EBodyNumber::Type> BodyNumber;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JointType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetJointDeltaPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::NewProp_BodyNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::NewProp_BodyNumber = { UE4CodeGen_Private::EPropertyClass::Byte, "BodyNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetJointDeltaPosition_Parms, BodyNumber), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::NewProp_BodyNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::NewProp_BodyNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::NewProp_JointType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::NewProp_JointType = { UE4CodeGen_Private::EPropertyClass::Byte, "JointType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetJointDeltaPosition_Parms, JointType), Z_Construct_UEnum_Kinect4Unreal_EKinectJoints, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::NewProp_JointType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::NewProp_JointType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::NewProp_BodyNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::NewProp_JointType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Joints" },
		{ "Keywords", "Bone, Location" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns an FVector representing the change in position (metres per second) of a joint in Unreal co-ordinates." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "GetJointDeltaPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(KinectInterfaceComponent_eventGetJointDeltaPosition_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics
	{
		struct KinectInterfaceComponent_eventGetJointOrientation_Parms
		{
			TEnumAsByte<EKinectJoints::Type> JointType;
			TEnumAsByte<EBodyNumber::Type> BodyNumber;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JointType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetJointOrientation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::NewProp_BodyNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::NewProp_BodyNumber = { UE4CodeGen_Private::EPropertyClass::Byte, "BodyNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetJointOrientation_Parms, BodyNumber), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::NewProp_BodyNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::NewProp_BodyNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::NewProp_JointType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::NewProp_JointType = { UE4CodeGen_Private::EPropertyClass::Byte, "JointType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetJointOrientation_Parms, JointType), Z_Construct_UEnum_Kinect4Unreal_EKinectJoints, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::NewProp_JointType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::NewProp_JointType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::NewProp_BodyNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::NewProp_JointType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Joints" },
		{ "Keywords", "Bone, Rotation" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns the rotation of this bone as an FRotator in Unreal world co-ordinates." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "GetJointOrientation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(KinectInterfaceComponent_eventGetJointOrientation_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics
	{
		struct KinectInterfaceComponent_eventGetJointRelativePosition_Parms
		{
			TEnumAsByte<EKinectJoints::Type> StartJoint;
			TEnumAsByte<EBodyNumber::Type> StartJointBodyNumber;
			TEnumAsByte<EKinectJoints::Type> EndJoint;
			TEnumAsByte<EBodyNumber::Type> EndJointBodyNumber;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndJointBodyNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndJointBodyNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndJoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndJoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartJointBodyNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StartJointBodyNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartJoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StartJoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetJointRelativePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_EndJointBodyNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_EndJointBodyNumber = { UE4CodeGen_Private::EPropertyClass::Byte, "EndJointBodyNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetJointRelativePosition_Parms, EndJointBodyNumber), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_EndJointBodyNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_EndJointBodyNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_EndJoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_EndJoint = { UE4CodeGen_Private::EPropertyClass::Byte, "EndJoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetJointRelativePosition_Parms, EndJoint), Z_Construct_UEnum_Kinect4Unreal_EKinectJoints, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_EndJoint_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_EndJoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_StartJointBodyNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_StartJointBodyNumber = { UE4CodeGen_Private::EPropertyClass::Byte, "StartJointBodyNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetJointRelativePosition_Parms, StartJointBodyNumber), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_StartJointBodyNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_StartJointBodyNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_StartJoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_StartJoint = { UE4CodeGen_Private::EPropertyClass::Byte, "StartJoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetJointRelativePosition_Parms, StartJoint), Z_Construct_UEnum_Kinect4Unreal_EKinectJoints, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_StartJoint_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_StartJoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_EndJointBodyNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_EndJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_StartJointBodyNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::NewProp_StartJoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Joints" },
		{ "Keywords", "Bone" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns the vector between two given joints in Unreal world co-ordinates." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "GetJointRelativePosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(KinectInterfaceComponent_eventGetJointRelativePosition_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_GetKinectPitch_Statics
	{
		struct KinectInterfaceComponent_eventGetKinectPitch_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetKinectPitch_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetKinectPitch_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_GetKinectPitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetKinectPitch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetKinectPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect| Device Checking" },
		{ "Keywords", "Angle, Floor" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns the pitch of the Kinect in degrees from horizontal." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_GetKinectPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "GetKinectPitch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KinectInterfaceComponent_eventGetKinectPitch_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_GetKinectPitch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetKinectPitch_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetKinectPitch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetKinectPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetKinectPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_GetKinectPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount_Statics
	{
		struct KinectInterfaceComponent_eventGetLeanAmount_Parms
		{
			TEnumAsByte<EBodyNumber::Type> BodyNumber;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetLeanAmount_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount_Statics::NewProp_BodyNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount_Statics::NewProp_BodyNumber = { UE4CodeGen_Private::EPropertyClass::Byte, "BodyNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetLeanAmount_Parms, BodyNumber), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount_Statics::NewProp_BodyNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount_Statics::NewProp_BodyNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount_Statics::NewProp_BodyNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Leaning" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns how much the current body is leaning from vertical." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "GetLeanAmount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(KinectInterfaceComponent_eventGetLeanAmount_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_GetMicrophoneVolumeIntensity_Statics
	{
		struct KinectInterfaceComponent_eventGetMicrophoneVolumeIntensity_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetMicrophoneVolumeIntensity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetMicrophoneVolumeIntensity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_GetMicrophoneVolumeIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetMicrophoneVolumeIntensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetMicrophoneVolumeIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Audio" },
		{ "Keywords", "Sound" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns the current volume, relative to background noise, from zero to one. Note: May return negative values after loud noises." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_GetMicrophoneVolumeIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "GetMicrophoneVolumeIntensity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KinectInterfaceComponent_eventGetMicrophoneVolumeIntensity_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_GetMicrophoneVolumeIntensity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetMicrophoneVolumeIntensity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetMicrophoneVolumeIntensity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetMicrophoneVolumeIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetMicrophoneVolumeIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_GetMicrophoneVolumeIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_GetNearestBody_Statics
	{
		struct KinectInterfaceComponent_eventGetNearestBody_Parms
		{
			TEnumAsByte<EBodyNumber::Type> NearestBody;
			bool IsTracked;
		};
		static void NewProp_IsTracked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTracked;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NearestBody;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKinectInterfaceComponent_GetNearestBody_Statics::NewProp_IsTracked_SetBit(void* Obj)
	{
		((KinectInterfaceComponent_eventGetNearestBody_Parms*)Obj)->IsTracked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetNearestBody_Statics::NewProp_IsTracked = { UE4CodeGen_Private::EPropertyClass::Bool, "IsTracked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KinectInterfaceComponent_eventGetNearestBody_Parms), &Z_Construct_UFunction_UKinectInterfaceComponent_GetNearestBody_Statics::NewProp_IsTracked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetNearestBody_Statics::NewProp_NearestBody = { UE4CodeGen_Private::EPropertyClass::Byte, "NearestBody", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetNearestBody_Parms, NearestBody), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_GetNearestBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetNearestBody_Statics::NewProp_IsTracked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetNearestBody_Statics::NewProp_NearestBody,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetNearestBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Body Tracking" },
		{ "Keywords", "Closest, Player" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns the body number of the body nearest to the Kinect camera." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_GetNearestBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "GetNearestBody", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(KinectInterfaceComponent_eventGetNearestBody_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_GetNearestBody_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetNearestBody_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetNearestBody_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetNearestBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetNearestBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_GetNearestBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics
	{
		struct KinectInterfaceComponent_eventGetPitchAdjustedJointPosition_Parms
		{
			TEnumAsByte<EKinectJoints::Type> JointType;
			TEnumAsByte<EBodyNumber::Type> BodyNumber;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JointType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetPitchAdjustedJointPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::NewProp_BodyNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::NewProp_BodyNumber = { UE4CodeGen_Private::EPropertyClass::Byte, "BodyNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetPitchAdjustedJointPosition_Parms, BodyNumber), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::NewProp_BodyNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::NewProp_BodyNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::NewProp_JointType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::NewProp_JointType = { UE4CodeGen_Private::EPropertyClass::Byte, "JointType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetPitchAdjustedJointPosition_Parms, JointType), Z_Construct_UEnum_Kinect4Unreal_EKinectJoints, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::NewProp_JointType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::NewProp_JointType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::NewProp_BodyNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::NewProp_JointType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Joints" },
		{ "Keywords", "Bone, Angle, Floor, Location" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns a joint position adjusted to compensate for the current pitch angle of the Kinect relative to the floor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "GetPitchAdjustedJointPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(KinectInterfaceComponent_eventGetPitchAdjustedJointPosition_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics
	{
		struct KinectInterfaceComponent_eventGetSmoothedJointOrientation_Parms
		{
			TEnumAsByte<EKinectJoints::Type> JointType;
			TEnumAsByte<EBodyNumber::Type> BodyNumber;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JointType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetSmoothedJointOrientation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::NewProp_BodyNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::NewProp_BodyNumber = { UE4CodeGen_Private::EPropertyClass::Byte, "BodyNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetSmoothedJointOrientation_Parms, BodyNumber), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::NewProp_BodyNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::NewProp_BodyNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::NewProp_JointType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::NewProp_JointType = { UE4CodeGen_Private::EPropertyClass::Byte, "JointType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetSmoothedJointOrientation_Parms, JointType), Z_Construct_UEnum_Kinect4Unreal_EKinectJoints, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::NewProp_JointType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::NewProp_JointType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::NewProp_BodyNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::NewProp_JointType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Joints" },
		{ "Keywords", "Bone, Rotation" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns the smoothed rotation of this bone as an FRotator in Unreal world co-ordinates." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "GetSmoothedJointOrientation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(KinectInterfaceComponent_eventGetSmoothedJointOrientation_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_GetTrackedBodies_Statics
	{
		struct KinectInterfaceComponent_eventGetTrackedBodies_Parms
		{
			TArray<TEnumAsByte<EBodyNumber::Type> > ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetTrackedBodies_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventGetTrackedBodies_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_GetTrackedBodies_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_GetTrackedBodies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetTrackedBodies_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_GetTrackedBodies_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_GetTrackedBodies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Body Tracking" },
		{ "Keywords", "Tracking, Player" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "reReturns an array of all bodies currently detected by the Kinect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_GetTrackedBodies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "GetTrackedBodies", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KinectInterfaceComponent_eventGetTrackedBodies_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_GetTrackedBodies_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetTrackedBodies_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_GetTrackedBodies_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_GetTrackedBodies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_GetTrackedBodies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_GetTrackedBodies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked_Statics
	{
		struct KinectInterfaceComponent_eventIsBodyTracked_Parms
		{
			TEnumAsByte<EBodyNumber::Type> BodyNumber;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KinectInterfaceComponent_eventIsBodyTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KinectInterfaceComponent_eventIsBodyTracked_Parms), &Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked_Statics::NewProp_BodyNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked_Statics::NewProp_BodyNumber = { UE4CodeGen_Private::EPropertyClass::Byte, "BodyNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventIsBodyTracked_Parms, BodyNumber), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked_Statics::NewProp_BodyNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked_Statics::NewProp_BodyNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked_Statics::NewProp_BodyNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Body Tracking" },
		{ "Keywords", "Tracking, Player" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns true if a given Body Number is currently detected by the Kinect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "IsBodyTracked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KinectInterfaceComponent_eventIsBodyTracked_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_IsKinectAwake_Statics
	{
		struct KinectInterfaceComponent_eventIsKinectAwake_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKinectInterfaceComponent_IsKinectAwake_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KinectInterfaceComponent_eventIsKinectAwake_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_IsKinectAwake_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KinectInterfaceComponent_eventIsKinectAwake_Parms), &Z_Construct_UFunction_UKinectInterfaceComponent_IsKinectAwake_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_IsKinectAwake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_IsKinectAwake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_IsKinectAwake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect| Device Checking" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Returns whether the Kinect device is awake and tracking." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_IsKinectAwake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "IsKinectAwake", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KinectInterfaceComponent_eventIsKinectAwake_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_IsKinectAwake_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_IsKinectAwake_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_IsKinectAwake_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_IsKinectAwake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_IsKinectAwake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_IsKinectAwake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_ResetSmoothingParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_ResetSmoothingParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Smoothing" },
		{ "Keywords", "Orientation" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Resets the parameters used to smooth out spikes in orientation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_ResetSmoothingParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "ResetSmoothingParameters", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_ResetSmoothingParameters_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_ResetSmoothingParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_ResetSmoothingParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_ResetSmoothingParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamMode_Statics
	{
		struct KinectInterfaceComponent_eventSetAudioBeamMode_Parms
		{
			TEnumAsByte<EAudioBeamMode::Type> BeamMode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeamMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BeamMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamMode_Statics::NewProp_BeamMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamMode_Statics::NewProp_BeamMode = { UE4CodeGen_Private::EPropertyClass::Byte, "BeamMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventSetAudioBeamMode_Parms, BeamMode), Z_Construct_UEnum_Kinect4Unreal_EAudioBeamMode, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamMode_Statics::NewProp_BeamMode_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamMode_Statics::NewProp_BeamMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamMode_Statics::NewProp_BeamMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Audio" },
		{ "Keywords", "Sound" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Controls the mode of the audio beam. Automatic means it will actively shift its angle to the loudest noise in the room" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "SetAudioBeamMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KinectInterfaceComponent_eventSetAudioBeamMode_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamRotationInDegrees_Statics
	{
		struct KinectInterfaceComponent_eventSetAudioBeamRotationInDegrees_Parms
		{
			float Angle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamRotationInDegrees_Statics::NewProp_Angle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamRotationInDegrees_Statics::NewProp_Angle = { UE4CodeGen_Private::EPropertyClass::Float, "Angle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventSetAudioBeamRotationInDegrees_Parms, Angle), METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamRotationInDegrees_Statics::NewProp_Angle_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamRotationInDegrees_Statics::NewProp_Angle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamRotationInDegrees_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamRotationInDegrees_Statics::NewProp_Angle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamRotationInDegrees_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Audio" },
		{ "Keywords", "Sound" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Sets the listening direction of the audio beam from the centre line of the Kinect device (will be overriden if Beam in Automatic mode)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamRotationInDegrees_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "SetAudioBeamRotationInDegrees", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KinectInterfaceComponent_eventSetAudioBeamRotationInDegrees_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamRotationInDegrees_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamRotationInDegrees_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamRotationInDegrees_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamRotationInDegrees_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamRotationInDegrees()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamRotationInDegrees_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating_Statics
	{
		struct KinectInterfaceComponent_eventSetCameraFrameIsUpdating_Parms
		{
			TEnumAsByte<EKinectCameraType::Type> KinectCameraType;
			bool IsUpdating;
		};
		static void NewProp_IsUpdating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUpdating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KinectCameraType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KinectCameraType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating_Statics::NewProp_IsUpdating_SetBit(void* Obj)
	{
		((KinectInterfaceComponent_eventSetCameraFrameIsUpdating_Parms*)Obj)->IsUpdating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating_Statics::NewProp_IsUpdating = { UE4CodeGen_Private::EPropertyClass::Bool, "IsUpdating", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KinectInterfaceComponent_eventSetCameraFrameIsUpdating_Parms), &Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating_Statics::NewProp_IsUpdating_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating_Statics::NewProp_KinectCameraType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating_Statics::NewProp_KinectCameraType = { UE4CodeGen_Private::EPropertyClass::Byte, "KinectCameraType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventSetCameraFrameIsUpdating_Parms, KinectCameraType), Z_Construct_UEnum_Kinect4Unreal_EKinectCameraType, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating_Statics::NewProp_KinectCameraType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating_Statics::NewProp_KinectCameraType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating_Statics::NewProp_IsUpdating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating_Statics::NewProp_KinectCameraType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Camera Streams" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Instructs the selected camera whether it should actively update its frame buffer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "SetCameraFrameIsUpdating", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KinectInterfaceComponent_eventSetCameraFrameIsUpdating_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_SetFilteredBodies_Statics
	{
		struct KinectInterfaceComponent_eventSetFilteredBodies_Parms
		{
			TArray<TEnumAsByte<EBodyNumber::Type> > Bodies;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bodies;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bodies_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_SetFilteredBodies_Statics::NewProp_Bodies = { UE4CodeGen_Private::EPropertyClass::Array, "Bodies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventSetFilteredBodies_Parms, Bodies), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_SetFilteredBodies_Statics::NewProp_Bodies_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Bodies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_SetFilteredBodies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_SetFilteredBodies_Statics::NewProp_Bodies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_SetFilteredBodies_Statics::NewProp_Bodies_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_SetFilteredBodies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Camera Streams" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Allocates the bodies that are displayed by the filtered camera feeds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_SetFilteredBodies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "SetFilteredBodies", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KinectInterfaceComponent_eventSetFilteredBodies_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_SetFilteredBodies_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_SetFilteredBodies_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_SetFilteredBodies_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_SetFilteredBodies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_SetFilteredBodies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_SetFilteredBodies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics
	{
		struct KinectInterfaceComponent_eventSetSmoothingParameters_Parms
		{
			float RotationSpikeThreshold;
			float RotationSpikeClampWeight;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpikeClampWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpikeClampWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpikeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpikeThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics::NewProp_RotationSpikeClampWeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics::NewProp_RotationSpikeClampWeight = { UE4CodeGen_Private::EPropertyClass::Float, "RotationSpikeClampWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventSetSmoothingParameters_Parms, RotationSpikeClampWeight), METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics::NewProp_RotationSpikeClampWeight_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics::NewProp_RotationSpikeClampWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics::NewProp_RotationSpikeThreshold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics::NewProp_RotationSpikeThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "RotationSpikeThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectInterfaceComponent_eventSetSmoothingParameters_Parms, RotationSpikeThreshold), METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics::NewProp_RotationSpikeThreshold_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics::NewProp_RotationSpikeThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics::NewProp_RotationSpikeClampWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics::NewProp_RotationSpikeThreshold,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Smoothing" },
		{ "Keywords", "Orientation" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ToolTip", "Configures the sensitivity to spikes in joint orientation and how strongly it is clamped down upon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectInterfaceComponent, "SetSmoothingParameters", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KinectInterfaceComponent_eventSetSmoothingParameters_Parms), Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKinectInterfaceComponent_NoRegister()
	{
		return UKinectInterfaceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKinectInterfaceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKinectInterfaceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Kinect4Unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKinectInterfaceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_ConvertCoordinates, "ConvertCoordinates" }, // 3959540723
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_ConvertDepthPixelCoordinatesToUVCoordinates, "ConvertDepthPixelCoordinatesToUVCoordinates" }, // 1575378180
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToDepthPixelCoordinates, "ConvertPositionToDepthPixelCoordinates" }, // 2390533287
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_ConvertPositionToRGBPixelCoordinates, "ConvertPositionToRGBPixelCoordinates" }, // 2690043979
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_ConvertRGBPixelCoordinatesToUVCoordinates, "ConvertRGBPixelCoordinatesToUVCoordinates" }, // 1871571593
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_GetAudioBeamRotationInDegrees, "GetAudioBeamRotationInDegrees" }, // 442331433
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_GetCameraFrame, "GetCameraFrame" }, // 3709590006
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_GetCenteredBody, "GetCenteredBody" }, // 1782359641
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_GetDistanceBetweenJoints, "GetDistanceBetweenJoints" }, // 543718248
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_GetHandState, "GetHandState" }, // 1597895272
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_GetHandStateAsExecution, "GetHandStateAsExecution" }, // 368615345
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_GetJointAbsolutePosition, "GetJointAbsolutePosition" }, // 3939019406
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_GetJointConfidence, "GetJointConfidence" }, // 2765538703
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_GetJointDeltaPosition, "GetJointDeltaPosition" }, // 1075606442
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_GetJointOrientation, "GetJointOrientation" }, // 1317449930
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_GetJointRelativePosition, "GetJointRelativePosition" }, // 536876590
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_GetKinectPitch, "GetKinectPitch" }, // 2499872181
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_GetLeanAmount, "GetLeanAmount" }, // 1933750361
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_GetMicrophoneVolumeIntensity, "GetMicrophoneVolumeIntensity" }, // 4175980345
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_GetNearestBody, "GetNearestBody" }, // 2020881919
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_GetPitchAdjustedJointPosition, "GetPitchAdjustedJointPosition" }, // 2763312247
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_GetSmoothedJointOrientation, "GetSmoothedJointOrientation" }, // 1747414043
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_GetTrackedBodies, "GetTrackedBodies" }, // 2186678708
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_IsBodyTracked, "IsBodyTracked" }, // 1554069619
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_IsKinectAwake, "IsKinectAwake" }, // 3731365138
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_ResetSmoothingParameters, "ResetSmoothingParameters" }, // 529622422
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamMode, "SetAudioBeamMode" }, // 3042538761
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_SetAudioBeamRotationInDegrees, "SetAudioBeamRotationInDegrees" }, // 781449331
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_SetCameraFrameIsUpdating, "SetCameraFrameIsUpdating" }, // 1838759801
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_SetFilteredBodies, "SetFilteredBodies" }, // 2682066593
		{ &Z_Construct_UFunction_UKinectInterfaceComponent_SetSmoothingParameters, "SetSmoothingParameters" }, // 3727670468
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectInterfaceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Kinect" },
		{ "IncludePath", "KinectInterfaceComponent.h" },
		{ "ModuleRelativePath", "Private/KinectInterfaceComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Provides access to all Kinect functions supplied by Kinect 4 Unreal\nReplaces the now depricated Kinect Player Controller" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKinectInterfaceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKinectInterfaceComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKinectInterfaceComponent_Statics::ClassParams = {
		&UKinectInterfaceComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UKinectInterfaceComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKinectInterfaceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKinectInterfaceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKinectInterfaceComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKinectInterfaceComponent, 1831353062);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKinectInterfaceComponent(Z_Construct_UClass_UKinectInterfaceComponent, &UKinectInterfaceComponent::StaticClass, TEXT("/Script/Kinect4Unreal"), TEXT("UKinectInterfaceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKinectInterfaceComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
