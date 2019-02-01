// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kinect4Unreal/Private/Kinect4UnrealPrivatePCH.h"
#include "Kinect4Unreal/Private/Audio/AudioCaptureComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioCaptureComponent() {}
// Cross Module References
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UKinectAudioCaptureComponent_NoRegister();
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UKinectAudioCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Kinect4Unreal();
// End Cross Module References
	void UKinectAudioCaptureComponent::StaticRegisterNativesUKinectAudioCaptureComponent()
	{
	}
	UClass* Z_Construct_UClass_UKinectAudioCaptureComponent_NoRegister()
	{
		return UKinectAudioCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKinectAudioCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKinectAudioCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Kinect4Unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectAudioCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Audio/AudioCaptureComponent.h" },
		{ "ModuleRelativePath", "Private/Audio/AudioCaptureComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKinectAudioCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKinectAudioCaptureComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKinectAudioCaptureComponent_Statics::ClassParams = {
		&UKinectAudioCaptureComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UKinectAudioCaptureComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKinectAudioCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKinectAudioCaptureComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKinectAudioCaptureComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKinectAudioCaptureComponent, 1950328235);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKinectAudioCaptureComponent(Z_Construct_UClass_UKinectAudioCaptureComponent, &UKinectAudioCaptureComponent::StaticClass, TEXT("/Script/Kinect4Unreal"), TEXT("UKinectAudioCaptureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKinectAudioCaptureComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
