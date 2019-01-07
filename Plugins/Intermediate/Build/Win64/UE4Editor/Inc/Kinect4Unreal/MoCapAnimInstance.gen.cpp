// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kinect4Unreal/Private/Kinect4UnrealPrivatePCH.h"
#include "Kinect4Unreal/Private/Avateering/MoCapAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoCapAnimInstance() {}
// Cross Module References
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UMoCapAnimInstance_NoRegister();
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UMoCapAnimInstance();
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UKinectAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Kinect4Unreal();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EBodyNumber();
// End Cross Module References
	void UMoCapAnimInstance::StaticRegisterNativesUMoCapAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UMoCapAnimInstance_NoRegister()
	{
		return UMoCapAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMoCapAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDetectedBodyTracked_MetaData[];
#endif
		static void NewProp_IsDetectedBodyTracked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDetectedBodyTracked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetectedBody;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoCapAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKinectAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Kinect4Unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoCapAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance AnimInstance AnimInstance" },
		{ "IncludePath", "Avateering/MoCapAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Avateering/MoCapAnimInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A Kinect Animation Instance that automatically updates an exposed body for use in the animation graph. It can be used with the Animation editor record feature\nfor motion capture." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoCapAnimInstance_Statics::NewProp_IsDetectedBodyTracked_MetaData[] = {
		{ "Category", "Kinect|Motion Capture" },
		{ "ModuleRelativePath", "Private/Avateering/MoCapAnimInstance.h" },
		{ "ToolTip", "A flag indicating if the current value of Detected Body is tracked by the Kinect" },
	};
#endif
	void Z_Construct_UClass_UMoCapAnimInstance_Statics::NewProp_IsDetectedBodyTracked_SetBit(void* Obj)
	{
		((UMoCapAnimInstance*)Obj)->IsDetectedBodyTracked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoCapAnimInstance_Statics::NewProp_IsDetectedBodyTracked = { UE4CodeGen_Private::EPropertyClass::Bool, "IsDetectedBodyTracked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMoCapAnimInstance), &Z_Construct_UClass_UMoCapAnimInstance_Statics::NewProp_IsDetectedBodyTracked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoCapAnimInstance_Statics::NewProp_IsDetectedBodyTracked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMoCapAnimInstance_Statics::NewProp_IsDetectedBodyTracked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoCapAnimInstance_Statics::NewProp_DetectedBody_MetaData[] = {
		{ "Category", "Kinect|Motion Capture" },
		{ "ModuleRelativePath", "Private/Avateering/MoCapAnimInstance.h" },
		{ "ToolTip", "A body that automatically updates itself on animation update to the body centered in front of the Kinect device" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoCapAnimInstance_Statics::NewProp_DetectedBody = { UE4CodeGen_Private::EPropertyClass::Byte, "DetectedBody", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UMoCapAnimInstance, DetectedBody), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(Z_Construct_UClass_UMoCapAnimInstance_Statics::NewProp_DetectedBody_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMoCapAnimInstance_Statics::NewProp_DetectedBody_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoCapAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoCapAnimInstance_Statics::NewProp_IsDetectedBodyTracked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoCapAnimInstance_Statics::NewProp_DetectedBody,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoCapAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoCapAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoCapAnimInstance_Statics::ClassParams = {
		&UMoCapAnimInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A8u,
		nullptr, 0,
		Z_Construct_UClass_UMoCapAnimInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMoCapAnimInstance_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMoCapAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMoCapAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoCapAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoCapAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoCapAnimInstance, 33822713);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoCapAnimInstance(Z_Construct_UClass_UMoCapAnimInstance, &UMoCapAnimInstance::StaticClass, TEXT("/Script/Kinect4Unreal"), TEXT("UMoCapAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoCapAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
