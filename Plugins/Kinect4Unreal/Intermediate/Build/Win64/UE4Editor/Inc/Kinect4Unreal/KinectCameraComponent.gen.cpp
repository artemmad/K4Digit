// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kinect4Unreal/Private/Kinect4UnrealPrivatePCH.h"
#include "Kinect4Unreal/Private/Camera/KinectCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKinectCameraComponent() {}
// Cross Module References
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UKinectCameraComponent_NoRegister();
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UKinectCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Kinect4Unreal();
// End Cross Module References
	void UKinectCameraComponent::StaticRegisterNativesUKinectCameraComponent()
	{
	}
	UClass* Z_Construct_UClass_UKinectCameraComponent_NoRegister()
	{
		return UKinectCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKinectCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKinectCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Kinect4Unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Camera/KinectCameraComponent.h" },
		{ "ModuleRelativePath", "Private/Camera/KinectCameraComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The parent class for all Kinect camera components. Camera components populate a visual data\narray before converting it into textures that can be retrieved and utilized in Blueprints." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKinectCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKinectCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKinectCameraComponent_Statics::ClassParams = {
		&UKinectCameraComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UKinectCameraComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKinectCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKinectCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKinectCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKinectCameraComponent, 3977118259);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKinectCameraComponent(Z_Construct_UClass_UKinectCameraComponent, &UKinectCameraComponent::StaticClass, TEXT("/Script/Kinect4Unreal"), TEXT("UKinectCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKinectCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
