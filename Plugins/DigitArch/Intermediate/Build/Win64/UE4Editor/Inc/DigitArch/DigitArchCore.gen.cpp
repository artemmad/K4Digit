// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitArch/Public/DigitArchCore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDigitArchCore() {}
// Cross Module References
	DIGITARCH_API UClass* Z_Construct_UClass_UDigitArchCore_NoRegister();
	DIGITARCH_API UClass* Z_Construct_UClass_UDigitArchCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DigitArch();
	DIGITARCH_API UFunction* Z_Construct_UFunction_UDigitArchCore_CreateDigitArchCore();
	DIGITARCH_API UEnum* Z_Construct_UEnum_DigitArch_CameraType();
	DIGITARCH_API UFunction* Z_Construct_UFunction_UDigitArchCore_SetPoint();
	DIGITARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPointVariable();
// End Cross Module References
	void UDigitArchCore::StaticRegisterNativesUDigitArchCore()
	{
		UClass* Class = UDigitArchCore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDigitArchCore", &UDigitArchCore::execCreateDigitArchCore },
			{ "SetPoint", &UDigitArchCore::execSetPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDigitArchCore_CreateDigitArchCore_Statics
	{
		struct DigitArchCore_eventCreateDigitArchCore_Parms
		{
			CameraType camera_type;
			UDigitArchCore* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_camera_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_camera_type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDigitArchCore_CreateDigitArchCore_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(DigitArchCore_eventCreateDigitArchCore_Parms, ReturnValue), Z_Construct_UClass_UDigitArchCore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDigitArchCore_CreateDigitArchCore_Statics::NewProp_camera_type = { UE4CodeGen_Private::EPropertyClass::Enum, "camera_type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DigitArchCore_eventCreateDigitArchCore_Parms, camera_type), Z_Construct_UEnum_DigitArch_CameraType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDigitArchCore_CreateDigitArchCore_Statics::NewProp_camera_type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDigitArchCore_CreateDigitArchCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDigitArchCore_CreateDigitArchCore_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDigitArchCore_CreateDigitArchCore_Statics::NewProp_camera_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDigitArchCore_CreateDigitArchCore_Statics::NewProp_camera_type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDigitArchCore_CreateDigitArchCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DigitArchCore.h" },
		{ "ToolTip", "Create class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDigitArchCore_CreateDigitArchCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDigitArchCore, "CreateDigitArchCore", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(DigitArchCore_eventCreateDigitArchCore_Parms), Z_Construct_UFunction_UDigitArchCore_CreateDigitArchCore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDigitArchCore_CreateDigitArchCore_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDigitArchCore_CreateDigitArchCore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDigitArchCore_CreateDigitArchCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDigitArchCore_CreateDigitArchCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDigitArchCore_CreateDigitArchCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDigitArchCore_SetPoint_Statics
	{
		struct DigitArchCore_eventSetPoint_Parms
		{
			TArray<FPointVariable> Points;
			bool log_to_file;
		};
		static void NewProp_log_to_file_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_log_to_file;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDigitArchCore_SetPoint_Statics::NewProp_log_to_file_SetBit(void* Obj)
	{
		((DigitArchCore_eventSetPoint_Parms*)Obj)->log_to_file = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDigitArchCore_SetPoint_Statics::NewProp_log_to_file = { UE4CodeGen_Private::EPropertyClass::Bool, "log_to_file", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DigitArchCore_eventSetPoint_Parms), &Z_Construct_UFunction_UDigitArchCore_SetPoint_Statics::NewProp_log_to_file_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDigitArchCore_SetPoint_Statics::NewProp_Points = { UE4CodeGen_Private::EPropertyClass::Array, "Points", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DigitArchCore_eventSetPoint_Parms, Points), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDigitArchCore_SetPoint_Statics::NewProp_Points_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Points", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPointVariable, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDigitArchCore_SetPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDigitArchCore_SetPoint_Statics::NewProp_log_to_file,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDigitArchCore_SetPoint_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDigitArchCore_SetPoint_Statics::NewProp_Points_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDigitArchCore_SetPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DigitArchCore.h" },
		{ "ToolTip", "Set data from point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDigitArchCore_SetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDigitArchCore, "SetPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DigitArchCore_eventSetPoint_Parms), Z_Construct_UFunction_UDigitArchCore_SetPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDigitArchCore_SetPoint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDigitArchCore_SetPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDigitArchCore_SetPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDigitArchCore_SetPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDigitArchCore_SetPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDigitArchCore_NoRegister()
	{
		return UDigitArchCore::StaticClass();
	}
	struct Z_Construct_UClass_UDigitArchCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDigitArchCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DigitArch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDigitArchCore_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDigitArchCore_CreateDigitArchCore, "CreateDigitArchCore" }, // 1932258332
		{ &Z_Construct_UFunction_UDigitArchCore_SetPoint, "SetPoint" }, // 3394969992
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDigitArchCore_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DigitArchCore.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DigitArchCore.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDigitArchCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDigitArchCore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDigitArchCore_Statics::ClassParams = {
		&UDigitArchCore::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UDigitArchCore_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDigitArchCore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDigitArchCore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDigitArchCore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDigitArchCore, 2952422740);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDigitArchCore(Z_Construct_UClass_UDigitArchCore, &UDigitArchCore::StaticClass, TEXT("/Script/DigitArch"), TEXT("UDigitArchCore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDigitArchCore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
