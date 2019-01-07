// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kinect4Unreal/Private/Kinect4UnrealPrivatePCH.h"
#include "Kinect4Unreal/Private/Camera/IRCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIRCameraComponent() {}
// Cross Module References
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UIRCameraComponent_NoRegister();
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UIRCameraComponent();
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UKinectCameraComponent();
	UPackage* Z_Construct_UPackage__Script_Kinect4Unreal();
// End Cross Module References
	void UIRCameraComponent::StaticRegisterNativesUIRCameraComponent()
	{
	}
	UClass* Z_Construct_UClass_UIRCameraComponent_NoRegister()
	{
		return UIRCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UIRCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIRCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKinectCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Kinect4Unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIRCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Camera/IRCameraComponent.h" },
		{ "ModuleRelativePath", "Private/Camera/IRCameraComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This component reads data from the device infrared frame to create a texture of current infrared view from the Kinect Camera." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIRCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIRCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIRCameraComponent_Statics::ClassParams = {
		&UIRCameraComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UIRCameraComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UIRCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIRCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIRCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIRCameraComponent, 1985655176);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIRCameraComponent(Z_Construct_UClass_UIRCameraComponent, &UIRCameraComponent::StaticClass, TEXT("/Script/Kinect4Unreal"), TEXT("UIRCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIRCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
