// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kinect4Unreal/Private/Kinect4UnrealPrivatePCH.h"
#include "Kinect4Unreal/Private/Camera/DepthCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDepthCameraComponent() {}
// Cross Module References
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UDepthCameraComponent_NoRegister();
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UDepthCameraComponent();
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UKinectCameraComponent();
	UPackage* Z_Construct_UPackage__Script_Kinect4Unreal();
// End Cross Module References
	void UDepthCameraComponent::StaticRegisterNativesUDepthCameraComponent()
	{
	}
	UClass* Z_Construct_UClass_UDepthCameraComponent_NoRegister()
	{
		return UDepthCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDepthCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDepthCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKinectCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Kinect4Unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDepthCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Camera/DepthCameraComponent.h" },
		{ "ModuleRelativePath", "Private/Camera/DepthCameraComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This component reads data from the device depth frame showing the depth from the lens of objects in view." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDepthCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDepthCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDepthCameraComponent_Statics::ClassParams = {
		&UDepthCameraComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UDepthCameraComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDepthCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDepthCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDepthCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDepthCameraComponent, 1406290850);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDepthCameraComponent(Z_Construct_UClass_UDepthCameraComponent, &UDepthCameraComponent::StaticClass, TEXT("/Script/Kinect4Unreal"), TEXT("UDepthCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDepthCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
