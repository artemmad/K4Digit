// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kinect4Unreal/Private/Kinect4UnrealPrivatePCH.h"
#include "Kinect4Unreal/Private/BodyData/WindowsBodyUpdateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsBodyUpdateComponent() {}
// Cross Module References
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UWindowsBodyUpdateComponent_NoRegister();
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UWindowsBodyUpdateComponent();
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UBodyUpdateComponent();
	UPackage* Z_Construct_UPackage__Script_Kinect4Unreal();
// End Cross Module References
	void UWindowsBodyUpdateComponent::StaticRegisterNativesUWindowsBodyUpdateComponent()
	{
	}
	UClass* Z_Construct_UClass_UWindowsBodyUpdateComponent_NoRegister()
	{
		return UWindowsBodyUpdateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWindowsBodyUpdateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWindowsBodyUpdateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBodyUpdateComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Kinect4Unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsBodyUpdateComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BodyData/WindowsBodyUpdateComponent.h" },
		{ "ModuleRelativePath", "Private/BodyData/WindowsBodyUpdateComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An implementation that updates the Kinect Bodies through an interface to the\nKinect for Windows device." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWindowsBodyUpdateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowsBodyUpdateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWindowsBodyUpdateComponent_Statics::ClassParams = {
		&UWindowsBodyUpdateComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UWindowsBodyUpdateComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWindowsBodyUpdateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWindowsBodyUpdateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWindowsBodyUpdateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWindowsBodyUpdateComponent, 4053357224);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWindowsBodyUpdateComponent(Z_Construct_UClass_UWindowsBodyUpdateComponent, &UWindowsBodyUpdateComponent::StaticClass, TEXT("/Script/Kinect4Unreal"), TEXT("UWindowsBodyUpdateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowsBodyUpdateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
