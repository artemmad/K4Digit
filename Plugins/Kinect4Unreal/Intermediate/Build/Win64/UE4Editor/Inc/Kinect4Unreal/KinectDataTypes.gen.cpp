// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kinect4Unreal/Private/Kinect4UnrealPrivatePCH.h"
#include "Kinect4Unreal/Private/KinectDataTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKinectDataTypes() {}
// Cross Module References
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_ETrackingConfidenceType();
	UPackage* Z_Construct_UPackage__Script_Kinect4Unreal();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EKinectCameraType();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EHandState();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EAudioBeamMode();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EHands();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EKinectJoints();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_ECoordinateConvention();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EBodyNumber();
	KINECT4UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FKinectBodyData();
// End Cross Module References
	static UEnum* ETrackingConfidenceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Kinect4Unreal_ETrackingConfidenceType, Z_Construct_UPackage__Script_Kinect4Unreal(), TEXT("ETrackingConfidenceType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrackingConfidenceType(ETrackingConfidenceType_StaticEnum, TEXT("/Script/Kinect4Unreal"), TEXT("ETrackingConfidenceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Kinect4Unreal_ETrackingConfidenceType_CRC() { return 3172511290U; }
	UEnum* Z_Construct_UEnum_Kinect4Unreal_ETrackingConfidenceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Kinect4Unreal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrackingConfidenceType"), 0, Get_Z_Construct_UEnum_Kinect4Unreal_ETrackingConfidenceType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETrackingConfidenceType::NotTracked", (int64)ETrackingConfidenceType::NotTracked },
				{ "ETrackingConfidenceType::Inferred", (int64)ETrackingConfidenceType::Inferred },
				{ "ETrackingConfidenceType::Tracked", (int64)ETrackingConfidenceType::Tracked },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Inferred.DisplayName", "Kinect data point inferred" },
				{ "ModuleRelativePath", "Private/KinectDataTypes.h" },
				{ "NotTracked.DisplayName", "Kinect data point not tracked" },
				{ "Tracked.DisplayName", "Kinect data point fully tracked" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Kinect4Unreal,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETrackingConfidenceType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ETrackingConfidenceType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EKinectCameraType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Kinect4Unreal_EKinectCameraType, Z_Construct_UPackage__Script_Kinect4Unreal(), TEXT("EKinectCameraType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKinectCameraType(EKinectCameraType_StaticEnum, TEXT("/Script/Kinect4Unreal"), TEXT("EKinectCameraType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Kinect4Unreal_EKinectCameraType_CRC() { return 3559787003U; }
	UEnum* Z_Construct_UEnum_Kinect4Unreal_EKinectCameraType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Kinect4Unreal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKinectCameraType"), 0, Get_Z_Construct_UEnum_Kinect4Unreal_EKinectCameraType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKinectCameraType::RGB", (int64)EKinectCameraType::RGB },
				{ "EKinectCameraType::IR", (int64)EKinectCameraType::IR },
				{ "EKinectCameraType::Depth", (int64)EKinectCameraType::Depth },
				{ "EKinectCameraType::BodyFilterDepth", (int64)EKinectCameraType::BodyFilterDepth },
				{ "EKinectCameraType::BodyFilterRGB", (int64)EKinectCameraType::BodyFilterRGB },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BodyFilterDepth.DisplayName", "Normalized Depth Camera (with body stamping)" },
				{ "BodyFilterRGB.DisplayName", "Raw Color Camera (with body stamping)" },
				{ "Depth.DisplayName", "Normalized Depth Camera feed" },
				{ "IR.DisplayName", "Raw Infrared Camera feed" },
				{ "ModuleRelativePath", "Private/KinectDataTypes.h" },
				{ "RGB.DisplayName", "Raw Color Camera feed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Kinect4Unreal,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EKinectCameraType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EKinectCameraType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHandState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Kinect4Unreal_EHandState, Z_Construct_UPackage__Script_Kinect4Unreal(), TEXT("EHandState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHandState(EHandState_StaticEnum, TEXT("/Script/Kinect4Unreal"), TEXT("EHandState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Kinect4Unreal_EHandState_CRC() { return 1766267194U; }
	UEnum* Z_Construct_UEnum_Kinect4Unreal_EHandState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Kinect4Unreal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHandState"), 0, Get_Z_Construct_UEnum_Kinect4Unreal_EHandState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHandState::Unknown", (int64)EHandState::Unknown },
				{ "EHandState::NotTracked", (int64)EHandState::NotTracked },
				{ "EHandState::Open", (int64)EHandState::Open },
				{ "EHandState::Closed", (int64)EHandState::Closed },
				{ "EHandState::Lasso", (int64)EHandState::Lasso },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Closed.DisplayName", "Closed Hand" },
				{ "Lasso.DisplayName", "Lasso Hand" },
				{ "ModuleRelativePath", "Private/KinectDataTypes.h" },
				{ "NotTracked.DisplayName", "Hand Not Tracked" },
				{ "Open.DisplayName", "Open Hand" },
				{ "Unknown.DisplayName", "Unknown Hand State" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Kinect4Unreal,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EHandState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EHandState::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAudioBeamMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Kinect4Unreal_EAudioBeamMode, Z_Construct_UPackage__Script_Kinect4Unreal(), TEXT("EAudioBeamMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAudioBeamMode(EAudioBeamMode_StaticEnum, TEXT("/Script/Kinect4Unreal"), TEXT("EAudioBeamMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Kinect4Unreal_EAudioBeamMode_CRC() { return 132739472U; }
	UEnum* Z_Construct_UEnum_Kinect4Unreal_EAudioBeamMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Kinect4Unreal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAudioBeamMode"), 0, Get_Z_Construct_UEnum_Kinect4Unreal_EAudioBeamMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAudioBeamMode::AudioBeamMode_Automatic", (int64)EAudioBeamMode::AudioBeamMode_Automatic },
				{ "EAudioBeamMode::AudioBeamMode_Manual", (int64)EAudioBeamMode::AudioBeamMode_Manual },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AudioBeamMode_Automatic.DisplayName", "AudioBeam Automatic Mode" },
				{ "AudioBeamMode_Manual.DisplayName", "AudioBeam Manual Mode" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/KinectDataTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Kinect4Unreal,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAudioBeamMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EAudioBeamMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHands_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Kinect4Unreal_EHands, Z_Construct_UPackage__Script_Kinect4Unreal(), TEXT("EHands"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHands(EHands_StaticEnum, TEXT("/Script/Kinect4Unreal"), TEXT("EHands"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Kinect4Unreal_EHands_CRC() { return 1694186057U; }
	UEnum* Z_Construct_UEnum_Kinect4Unreal_EHands()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Kinect4Unreal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHands"), 0, Get_Z_Construct_UEnum_Kinect4Unreal_EHands_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHands::Left", (int64)EHands::Left },
				{ "EHands::Right", (int64)EHands::Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Left.DisplayName", "The Left hand" },
				{ "ModuleRelativePath", "Private/KinectDataTypes.h" },
				{ "Right.DisplayName", "The Right hand" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Kinect4Unreal,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EHands",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EHands::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EKinectJoints_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Kinect4Unreal_EKinectJoints, Z_Construct_UPackage__Script_Kinect4Unreal(), TEXT("EKinectJoints"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKinectJoints(EKinectJoints_StaticEnum, TEXT("/Script/Kinect4Unreal"), TEXT("EKinectJoints"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Kinect4Unreal_EKinectJoints_CRC() { return 482668142U; }
	UEnum* Z_Construct_UEnum_Kinect4Unreal_EKinectJoints()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Kinect4Unreal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKinectJoints"), 0, Get_Z_Construct_UEnum_Kinect4Unreal_EKinectJoints_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKinectJoints::SpineBase", (int64)EKinectJoints::SpineBase },
				{ "EKinectJoints::SpineMid", (int64)EKinectJoints::SpineMid },
				{ "EKinectJoints::Neck", (int64)EKinectJoints::Neck },
				{ "EKinectJoints::Head", (int64)EKinectJoints::Head },
				{ "EKinectJoints::ShoulderLeft", (int64)EKinectJoints::ShoulderLeft },
				{ "EKinectJoints::ElbowLeft", (int64)EKinectJoints::ElbowLeft },
				{ "EKinectJoints::WristLeft", (int64)EKinectJoints::WristLeft },
				{ "EKinectJoints::HandLeft", (int64)EKinectJoints::HandLeft },
				{ "EKinectJoints::ShoulderRight", (int64)EKinectJoints::ShoulderRight },
				{ "EKinectJoints::ElbowRight", (int64)EKinectJoints::ElbowRight },
				{ "EKinectJoints::WristRight", (int64)EKinectJoints::WristRight },
				{ "EKinectJoints::HandRight", (int64)EKinectJoints::HandRight },
				{ "EKinectJoints::HipLeft", (int64)EKinectJoints::HipLeft },
				{ "EKinectJoints::KneeLeft", (int64)EKinectJoints::KneeLeft },
				{ "EKinectJoints::AnkleLeft", (int64)EKinectJoints::AnkleLeft },
				{ "EKinectJoints::FootLeft", (int64)EKinectJoints::FootLeft },
				{ "EKinectJoints::HipRight", (int64)EKinectJoints::HipRight },
				{ "EKinectJoints::KneeRight", (int64)EKinectJoints::KneeRight },
				{ "EKinectJoints::AnkleRight", (int64)EKinectJoints::AnkleRight },
				{ "EKinectJoints::FootRight", (int64)EKinectJoints::FootRight },
				{ "EKinectJoints::SpineShoulder", (int64)EKinectJoints::SpineShoulder },
				{ "EKinectJoints::HandTipLeft", (int64)EKinectJoints::HandTipLeft },
				{ "EKinectJoints::ThumbLeft", (int64)EKinectJoints::ThumbLeft },
				{ "EKinectJoints::HandTipRight", (int64)EKinectJoints::HandTipRight },
				{ "EKinectJoints::ThumbRight", (int64)EKinectJoints::ThumbRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnkleLeft.DisplayName", "Left Ankle" },
				{ "AnkleRight.DisplayName", "Right Ankle" },
				{ "BlueprintType", "true" },
				{ "ElbowLeft.DisplayName", "Left Elbow" },
				{ "ElbowRight.DisplayName", "Right Elbow" },
				{ "FootLeft.DisplayName", "Left Foot" },
				{ "FootRight.DisplayName", "Right Foot" },
				{ "HandLeft.DisplayName", "Left Hand" },
				{ "HandRight.DisplayName", "Right Hand" },
				{ "HandTipLeft.DisplayName", "Hand Tip Left" },
				{ "HandTipRight.DisplayName", "Hand Tip Right" },
				{ "Head.DisplayName", "Head" },
				{ "HipLeft.DisplayName", "Left Hip" },
				{ "HipRight.DisplayName", "Right Hip" },
				{ "KneeLeft.DisplayName", "Left Knee" },
				{ "KneeRight.DisplayName", "Right Knee" },
				{ "ModuleRelativePath", "Private/KinectDataTypes.h" },
				{ "Neck.DisplayName", "Neck" },
				{ "ShoulderLeft.DisplayName", "Left Shoulder" },
				{ "ShoulderRight.DisplayName", "Right Shoulder" },
				{ "SpineBase.DisplayName", "Base of Spine" },
				{ "SpineMid.DisplayName", "Middle of Spine" },
				{ "SpineShoulder.DisplayName", "Spine Shoulder" },
				{ "ThumbLeft.DisplayName", "Thumb Left" },
				{ "ThumbRight.DisplayName", "Thumb Right" },
				{ "ToolTip", "Please note: Order is important here as it must match the enumeration found in Kinect20.h." },
				{ "WristLeft.DisplayName", "Left Wrist" },
				{ "WristRight.DisplayName", "Right Wrist" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Kinect4Unreal,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EKinectJoints",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EKinectJoints::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECoordinateConvention_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Kinect4Unreal_ECoordinateConvention, Z_Construct_UPackage__Script_Kinect4Unreal(), TEXT("ECoordinateConvention"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECoordinateConvention(ECoordinateConvention_StaticEnum, TEXT("/Script/Kinect4Unreal"), TEXT("ECoordinateConvention"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Kinect4Unreal_ECoordinateConvention_CRC() { return 2526178514U; }
	UEnum* Z_Construct_UEnum_Kinect4Unreal_ECoordinateConvention()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Kinect4Unreal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECoordinateConvention"), 0, Get_Z_Construct_UEnum_Kinect4Unreal_ECoordinateConvention_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECoordinateConvention::Unreal", (int64)ECoordinateConvention::Unreal },
				{ "ECoordinateConvention::Kinect", (int64)ECoordinateConvention::Kinect },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Kinect.DisplayName", "Kinect Device (meters)" },
				{ "ModuleRelativePath", "Private/KinectDataTypes.h" },
				{ "ToolTip", "Represent the two different coordinate systems that are used by the plugin" },
				{ "Unreal.DisplayName", "Unreal Engine (centimeters)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Kinect4Unreal,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECoordinateConvention",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ECoordinateConvention::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBodyNumber_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, Z_Construct_UPackage__Script_Kinect4Unreal(), TEXT("EBodyNumber"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBodyNumber(EBodyNumber_StaticEnum, TEXT("/Script/Kinect4Unreal"), TEXT("EBodyNumber"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Kinect4Unreal_EBodyNumber_CRC() { return 4201699188U; }
	UEnum* Z_Construct_UEnum_Kinect4Unreal_EBodyNumber()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Kinect4Unreal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBodyNumber"), 0, Get_Z_Construct_UEnum_Kinect4Unreal_EBodyNumber_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBodyNumber::Body0", (int64)EBodyNumber::Body0 },
				{ "EBodyNumber::Body1", (int64)EBodyNumber::Body1 },
				{ "EBodyNumber::Body2", (int64)EBodyNumber::Body2 },
				{ "EBodyNumber::Body3", (int64)EBodyNumber::Body3 },
				{ "EBodyNumber::Body4", (int64)EBodyNumber::Body4 },
				{ "EBodyNumber::Body5", (int64)EBodyNumber::Body5 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Body0.DisplayName", "Body 0" },
				{ "Body1.DisplayName", "Body 1" },
				{ "Body2.DisplayName", "Body 2" },
				{ "Body3.DisplayName", "Body 3" },
				{ "Body4.DisplayName", "Body 4" },
				{ "Body5.DisplayName", "Body 5" },
				{ "ModuleRelativePath", "Private/KinectDataTypes.h" },
				{ "ToolTip", "The indexes representing the detected bodies of up to six people detected by the Kinect sensor." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Kinect4Unreal,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBodyNumber",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EBodyNumber::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FKinectBodyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KINECT4UNREAL_API uint32 Get_Z_Construct_UScriptStruct_FKinectBodyData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKinectBodyData, Z_Construct_UPackage__Script_Kinect4Unreal(), TEXT("KinectBodyData"), sizeof(FKinectBodyData), Get_Z_Construct_UScriptStruct_FKinectBodyData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKinectBodyData(FKinectBodyData::StaticStruct, TEXT("/Script/Kinect4Unreal"), TEXT("KinectBodyData"), false, nullptr, nullptr);
static struct FScriptStruct_Kinect4Unreal_StaticRegisterNativesFKinectBodyData
{
	FScriptStruct_Kinect4Unreal_StaticRegisterNativesFKinectBodyData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KinectBodyData")),new UScriptStruct::TCppStructOps<FKinectBodyData>);
	}
} ScriptStruct_Kinect4Unreal_StaticRegisterNativesFKinectBodyData;
	struct Z_Construct_UScriptStruct_FKinectBodyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyIsTracked_MetaData[];
#endif
		static void NewProp_BodyIsTracked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BodyIsTracked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBodyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/KinectDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKinectBodyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKinectBodyData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinectBodyData_Statics::NewProp_BodyIsTracked_MetaData[] = {
		{ "ModuleRelativePath", "Private/KinectDataTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKinectBodyData_Statics::NewProp_BodyIsTracked_SetBit(void* Obj)
	{
		((FKinectBodyData*)Obj)->BodyIsTracked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKinectBodyData_Statics::NewProp_BodyIsTracked = { UE4CodeGen_Private::EPropertyClass::Bool, "BodyIsTracked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FKinectBodyData), &Z_Construct_UScriptStruct_FKinectBodyData_Statics::NewProp_BodyIsTracked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBodyData_Statics::NewProp_BodyIsTracked_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBodyData_Statics::NewProp_BodyIsTracked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKinectBodyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinectBodyData_Statics::NewProp_BodyIsTracked,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKinectBodyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Kinect4Unreal,
		nullptr,
		&NewStructOps,
		"KinectBodyData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FKinectBodyData),
		alignof(FKinectBodyData),
		Z_Construct_UScriptStruct_FKinectBodyData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBodyData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKinectBodyData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKinectBodyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKinectBodyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKinectBodyData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Kinect4Unreal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KinectBodyData"), sizeof(FKinectBodyData), Get_Z_Construct_UScriptStruct_FKinectBodyData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKinectBodyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKinectBodyData_CRC() { return 1355949085U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
