// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kinect4Unreal/Private/Kinect4UnrealPrivatePCH.h"
#include "Kinect4Unreal/Private/Avateering/KinectAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKinectAnimInstance() {}
// Cross Module References
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UKinectAnimInstance_NoRegister();
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UKinectAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Kinect4Unreal();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EBodyNumber();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EKinectJoints();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectAnimInstance_GetHandState();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EHandState();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EHands();
// End Cross Module References
	void UKinectAnimInstance::StaticRegisterNativesUKinectAnimInstance()
	{
		UClass* Class = UKinectAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConvertedJointOrientation", &UKinectAnimInstance::execGetConvertedJointOrientation },
			{ "GetHandState", &UKinectAnimInstance::execGetHandState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics
	{
		struct KinectAnimInstance_eventGetConvertedJointOrientation_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectAnimInstance_eventGetConvertedJointOrientation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::NewProp_BodyNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::NewProp_BodyNumber = { UE4CodeGen_Private::EPropertyClass::Byte, "BodyNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectAnimInstance_eventGetConvertedJointOrientation_Parms, BodyNumber), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::NewProp_BodyNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::NewProp_BodyNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::NewProp_JointType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::NewProp_JointType = { UE4CodeGen_Private::EPropertyClass::Byte, "JointType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectAnimInstance_eventGetConvertedJointOrientation_Parms, JointType), Z_Construct_UEnum_Kinect4Unreal_EKinectJoints, METADATA_PARAMS(Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::NewProp_JointType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::NewProp_JointType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::NewProp_BodyNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::NewProp_JointType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Animation" },
		{ "Keywords", "Bone" },
		{ "ModuleRelativePath", "Private/Avateering/KinectAnimInstance.h" },
		{ "ToolTip", "Returns a converted FRotator for use suitable for avateering the standard UE4 skeleton." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectAnimInstance, "GetConvertedJointOrientation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(KinectAnimInstance_eventGetConvertedJointOrientation_Parms), Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics
	{
		struct KinectAnimInstance_eventGetHandState_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000582, 1, nullptr, STRUCT_OFFSET(KinectAnimInstance_eventGetHandState_Parms, ReturnValue), Z_Construct_UEnum_Kinect4Unreal_EHandState, METADATA_PARAMS(Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::NewProp_BodyNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::NewProp_BodyNumber = { UE4CodeGen_Private::EPropertyClass::Byte, "BodyNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectAnimInstance_eventGetHandState_Parms, BodyNumber), Z_Construct_UEnum_Kinect4Unreal_EBodyNumber, METADATA_PARAMS(Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::NewProp_BodyNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::NewProp_BodyNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::NewProp_Hand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Byte, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectAnimInstance_eventGetHandState_Parms, Hand), Z_Construct_UEnum_Kinect4Unreal_EHands, METADATA_PARAMS(Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::NewProp_Hand_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::NewProp_Hand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::NewProp_BodyNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Animation" },
		{ "ModuleRelativePath", "Private/Avateering/KinectAnimInstance.h" },
		{ "ToolTip", "Returns the current state of the input hand on the input body." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectAnimInstance, "GetHandState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(KinectAnimInstance_eventGetHandState_Parms), Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectAnimInstance_GetHandState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectAnimInstance_GetHandState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKinectAnimInstance_NoRegister()
	{
		return UKinectAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UKinectAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMirrored_MetaData[];
#endif
		static void NewProp_IsMirrored_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMirrored;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSmoothing_MetaData[];
#endif
		static void NewProp_IsSmoothing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSmoothing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKinectAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Kinect4Unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKinectAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKinectAnimInstance_GetConvertedJointOrientation, "GetConvertedJointOrientation" }, // 399824205
		{ &Z_Construct_UFunction_UKinectAnimInstance_GetHandState, "GetHandState" }, // 1436507142
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance AnimInstance" },
		{ "IncludePath", "Avateering/KinectAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Avateering/KinectAnimInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Provides an interface to use Kinect joint rotations for direct manipulation of\nskeletal mesh bones using the Animation system Skeletal Controls." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_IsMirrored_MetaData[] = {
		{ "Category", "Kinect|Animation" },
		{ "ModuleRelativePath", "Private/Avateering/KinectAnimInstance.h" },
		{ "ToolTip", "Are joint orientations mirrored along vertical axis?" },
	};
#endif
	void Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_IsMirrored_SetBit(void* Obj)
	{
		((UKinectAnimInstance*)Obj)->IsMirrored = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_IsMirrored = { UE4CodeGen_Private::EPropertyClass::Bool, "IsMirrored", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UKinectAnimInstance), &Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_IsMirrored_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_IsMirrored_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_IsMirrored_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_IsSmoothing_MetaData[] = {
		{ "Category", "Kinect|Animation" },
		{ "ModuleRelativePath", "Private/Avateering/KinectAnimInstance.h" },
		{ "ToolTip", "Are joint orientations smoothed during their retrieval?." },
	};
#endif
	void Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_IsSmoothing_SetBit(void* Obj)
	{
		((UKinectAnimInstance*)Obj)->IsSmoothing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_IsSmoothing = { UE4CodeGen_Private::EPropertyClass::Bool, "IsSmoothing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UKinectAnimInstance), &Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_IsSmoothing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_IsSmoothing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_IsSmoothing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKinectAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_IsMirrored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKinectAnimInstance_Statics::NewProp_IsSmoothing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKinectAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKinectAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKinectAnimInstance_Statics::ClassParams = {
		&UKinectAnimInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UKinectAnimInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UKinectAnimInstance_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UKinectAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKinectAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKinectAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKinectAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKinectAnimInstance, 2178461407);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKinectAnimInstance(Z_Construct_UClass_UKinectAnimInstance, &UKinectAnimInstance::StaticClass, TEXT("/Script/Kinect4Unreal"), TEXT("UKinectAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKinectAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
