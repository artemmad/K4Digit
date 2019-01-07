// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kinect4Unreal/Private/Kinect4UnrealPrivatePCH.h"
#include "Kinect4Unreal/Private/Camera/RGBCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRGBCameraComponent() {}
// Cross Module References
	KINECT4UNREAL_API UClass* Z_Construct_UClass_URGBCameraComponent_NoRegister();
	KINECT4UNREAL_API UClass* Z_Construct_UClass_URGBCameraComponent();
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UKinectCameraComponent();
	UPackage* Z_Construct_UPackage__Script_Kinect4Unreal();
// End Cross Module References
	void URGBCameraComponent::StaticRegisterNativesURGBCameraComponent()
	{
	}
	UClass* Z_Construct_UClass_URGBCameraComponent_NoRegister()
	{
		return URGBCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_URGBCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URGBCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKinectCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Kinect4Unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URGBCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Camera/RGBCameraComponent.h" },
		{ "ModuleRelativePath", "Private/Camera/RGBCameraComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This class reads data from the device color frame to create a texture of the\ncurrent view from the Kinect Camera in RBG format." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URGBCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URGBCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URGBCameraComponent_Statics::ClassParams = {
		&URGBCameraComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_URGBCameraComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URGBCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URGBCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URGBCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URGBCameraComponent, 3672461749);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URGBCameraComponent(Z_Construct_UClass_URGBCameraComponent, &URGBCameraComponent::StaticClass, TEXT("/Script/Kinect4Unreal"), TEXT("URGBCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URGBCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
