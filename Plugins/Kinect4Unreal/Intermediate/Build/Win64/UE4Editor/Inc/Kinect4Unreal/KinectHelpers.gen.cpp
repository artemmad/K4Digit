// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kinect4Unreal/Private/Kinect4UnrealPrivatePCH.h"
#include "Kinect4Unreal/Private/KinectHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKinectHelpers() {}
// Cross Module References
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UKinectHelpers_NoRegister();
	KINECT4UNREAL_API UClass* Z_Construct_UClass_UKinectHelpers();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Kinect4Unreal();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_ECoordinateConvention();
	KINECT4UNREAL_API UFunction* Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	KINECT4UNREAL_API UEnum* Z_Construct_UEnum_Kinect4Unreal_EKinectJoints();
// End Cross Module References
	void UKinectHelpers::StaticRegisterNativesUKinectHelpers()
	{
		UClass* Class = UKinectHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertCoordinates", &UKinectHelpers::execConvertCoordinates },
			{ "GetAvateeringConversionRotator", &UKinectHelpers::execGetAvateeringConversionRotator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics
	{
		struct KinectHelpers_eventConvertCoordinates_Parms
		{
			TEnumAsByte<ECoordinateConvention::Type> InputCoordinateSystem;
			FVector InputValue;
			TEnumAsByte<ECoordinateConvention::Type> OutputCoordinateSystem;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputCoordinateSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputCoordinateSystem;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputCoordinateSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputCoordinateSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectHelpers_eventConvertCoordinates_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::NewProp_OutputCoordinateSystem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::NewProp_OutputCoordinateSystem = { UE4CodeGen_Private::EPropertyClass::Byte, "OutputCoordinateSystem", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectHelpers_eventConvertCoordinates_Parms, OutputCoordinateSystem), Z_Construct_UEnum_Kinect4Unreal_ECoordinateConvention, METADATA_PARAMS(Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::NewProp_OutputCoordinateSystem_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::NewProp_OutputCoordinateSystem_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::NewProp_InputValue = { UE4CodeGen_Private::EPropertyClass::Struct, "InputValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KinectHelpers_eventConvertCoordinates_Parms, InputValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::NewProp_InputCoordinateSystem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::NewProp_InputCoordinateSystem = { UE4CodeGen_Private::EPropertyClass::Byte, "InputCoordinateSystem", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectHelpers_eventConvertCoordinates_Parms, InputCoordinateSystem), Z_Construct_UEnum_Kinect4Unreal_ECoordinateConvention, METADATA_PARAMS(Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::NewProp_InputCoordinateSystem_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::NewProp_InputCoordinateSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::NewProp_OutputCoordinateSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::NewProp_InputValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::NewProp_InputCoordinateSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Joints" },
		{ "Keywords", "Axis" },
		{ "ModuleRelativePath", "Private/KinectHelpers.h" },
		{ "ToolTip", "Returns a converted FVector for the specified co-ordinated system and units." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectHelpers, "ConvertCoordinates", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(KinectHelpers_eventConvertCoordinates_Parms), Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator_Statics
	{
		struct KinectHelpers_eventGetAvateeringConversionRotator_Parms
		{
			TEnumAsByte<EKinectJoints::Type> JointType;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KinectHelpers_eventGetAvateeringConversionRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator_Statics::NewProp_JointType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator_Statics::NewProp_JointType = { UE4CodeGen_Private::EPropertyClass::Byte, "JointType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KinectHelpers_eventGetAvateeringConversionRotator_Parms, JointType), Z_Construct_UEnum_Kinect4Unreal_EKinectJoints, METADATA_PARAMS(Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator_Statics::NewProp_JointType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator_Statics::NewProp_JointType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator_Statics::NewProp_JointType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kinect|Utility" },
		{ "Keywords", "Avateering" },
		{ "ModuleRelativePath", "Private/KinectHelpers.h" },
		{ "ToolTip", "Retrieve the rotator to combine with a joint orientation for use in standard avateering" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKinectHelpers, "GetAvateeringConversionRotator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(KinectHelpers_eventGetAvateeringConversionRotator_Parms), Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKinectHelpers_NoRegister()
	{
		return UKinectHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UKinectHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKinectHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Kinect4Unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKinectHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKinectHelpers_ConvertCoordinates, "ConvertCoordinates" }, // 83215429
		{ &Z_Construct_UFunction_UKinectHelpers_GetAvateeringConversionRotator, "GetAvateeringConversionRotator" }, // 1725434130
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKinectHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KinectHelpers.h" },
		{ "ModuleRelativePath", "Private/KinectHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKinectHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKinectHelpers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKinectHelpers_Statics::ClassParams = {
		&UKinectHelpers::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UKinectHelpers_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKinectHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKinectHelpers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKinectHelpers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKinectHelpers, 1800067514);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKinectHelpers(Z_Construct_UClass_UKinectHelpers, &UKinectHelpers::StaticClass, TEXT("/Script/Kinect4Unreal"), TEXT("UKinectHelpers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKinectHelpers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
