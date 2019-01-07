// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kinect4Unreal/Private/Kinect4UnrealPrivatePCH.h"
#include "Kinect4Unreal/Private/Avateering/KinectPoseableMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKinectPoseableMeshComponent() {}
// Cross Module References
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UKinectPoseableMeshComponent_NoRegister();
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UKinectPoseableMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Kinect4Unreal();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneSpaces();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EBodyNumber();
// End Cross Module References
	void UKinectPoseableMeshComponent::StaticRegisterNativesUKinectPoseableMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UKinectPoseableMeshComponent_NoRegister()
	{
		return UKinectPoseableMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKinectPoseableMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSmoothing_MetaData[];
#endif
		static void NewProp_IsSmoothing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSmoothing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableMeshSelfUpdate_MetaData[];
#endif
		static void NewProp_EnableMeshSelfUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableMeshSelfUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseableMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Kinect4Unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Kinect" },
		{ "HideCategories", "Object Physics Object Mobility Trigger" },
		{ "IncludePath", "Avateering/KinectPoseableMeshComponent.h" },
		{ "ModuleRelativePath", "Private/Avateering/KinectPoseableMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Provides direct means to update bones of skeletal meshes dervied from the default\nUnreal Engine 4 skeleton with Kinect joint roations" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_IsSmoothing_MetaData[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Private/Avateering/KinectPoseableMeshComponent.h" },
		{ "ToolTip", "Are joint orientations are smoothed before being applied to bone." },
	};
#endif
	void Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_IsSmoothing_SetBit(void* Obj)
	{
		((UKinectPoseableMeshComponent*)Obj)->IsSmoothing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_IsSmoothing = { UE4CodeGen_Private::EPropertyClass::Bool, "IsSmoothing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UKinectPoseableMeshComponent), &Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_IsSmoothing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_IsSmoothing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_IsSmoothing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_BoneSpace_MetaData[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Private/Avateering/KinectPoseableMeshComponent.h" },
		{ "ToolTip", "The coordinate space that the bones are rotated within." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_BoneSpace = { UE4CodeGen_Private::EPropertyClass::Byte, "BoneSpace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UKinectPoseableMeshComponent, BoneSpace), Z_Construct_UEnum_Engine_EBoneSpaces, METADATA_PARAMS(Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_BoneSpace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_BoneSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_TargetBody_MetaData[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Private/Avateering/KinectPoseableMeshComponent.h" },
		{ "ToolTip", "The Kinect body that bone information is being derived from." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_TargetBody = { UE4CodeGen_Private::EPropertyClass::Byte, "TargetBody", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UKinectPoseableMeshComponent, TargetBody), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_TargetBody_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_TargetBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_EnableMeshSelfUpdate_MetaData[] = {
		{ "Category", "Kinect" },
		{ "ModuleRelativePath", "Private/Avateering/KinectPoseableMeshComponent.h" },
		{ "ToolTip", "Is the mesh updating its bone information?" },
	};
#endif
	void Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_EnableMeshSelfUpdate_SetBit(void* Obj)
	{
		((UKinectPoseableMeshComponent*)Obj)->EnableMeshSelfUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_EnableMeshSelfUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableMeshSelfUpdate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UKinectPoseableMeshComponent), &Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_EnableMeshSelfUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_EnableMeshSelfUpdate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_EnableMeshSelfUpdate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_IsSmoothing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_BoneSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_TargetBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::NewProp_EnableMeshSelfUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKinectPoseableMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::ClassParams = {
		&UKinectPoseableMeshComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		nullptr, 0,
		Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKinectPoseableMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKinectPoseableMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKinectPoseableMeshComponent, 908736564);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKinectPoseableMeshComponent(Z_Construct_UClass_UKinectPoseableMeshComponent, &UKinectPoseableMeshComponent::StaticClass, TEXT("/Script/Kinect4Unreal"), TEXT("UKinectPoseableMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKinectPoseableMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
