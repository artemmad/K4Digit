// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DigitArch/Public/DigitArchType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDigitArchType() {}
// Cross Module References
	DIGITARCH_API UEnum* Z_Construct_UEnum_DigitArch_CameraType();
	UPackage* Z_Construct_UPackage__Script_DigitArch();
	DIGITARCH_API UEnum* Z_Construct_UEnum_DigitArch_PointType();
	DIGITARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPointVariable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DIGITARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoints();
	DIGITARCH_API UScriptStruct* Z_Construct_UScriptStruct_FCameraDigit();
	DIGITARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPointParam();
	DIGITARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPointInfo();
// End Cross Module References
	static UEnum* CameraType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DigitArch_CameraType, Z_Construct_UPackage__Script_DigitArch(), TEXT("CameraType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CameraType(CameraType_StaticEnum, TEXT("/Script/DigitArch"), TEXT("CameraType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DigitArch_CameraType_CRC() { return 3072735153U; }
	UEnum* Z_Construct_UEnum_DigitArch_CameraType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DigitArch();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CameraType"), 0, Get_Z_Construct_UEnum_DigitArch_CameraType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CameraType::Kinect", (int64)CameraType::Kinect },
				{ "CameraType::OptiTrack", (int64)CameraType::OptiTrack },
				{ "CameraType::Vive", (int64)CameraType::Vive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/DigitArchType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DigitArch,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"CameraType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"CameraType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* PointType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DigitArch_PointType, Z_Construct_UPackage__Script_DigitArch(), TEXT("PointType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_PointType(PointType_StaticEnum, TEXT("/Script/DigitArch"), TEXT("PointType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DigitArch_PointType_CRC() { return 923698199U; }
	UEnum* Z_Construct_UEnum_DigitArch_PointType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DigitArch();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("PointType"), 0, Get_Z_Construct_UEnum_DigitArch_PointType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PointType::One", (int64)PointType::One },
				{ "PointType::Two", (int64)PointType::Two },
				{ "PointType::Three", (int64)PointType::Three },
				{ "PointType::Four", (int64)PointType::Four },
				{ "PointType::Five", (int64)PointType::Five },
				{ "PointType::Six", (int64)PointType::Six },
				{ "PointType::Seven", (int64)PointType::Seven },
				{ "PointType::Eight", (int64)PointType::Eight },
				{ "PointType::Nine", (int64)PointType::Nine },
				{ "PointType::Ten", (int64)PointType::Ten },
				{ "PointType::Eleven", (int64)PointType::Eleven },
				{ "PointType::Twelve", (int64)PointType::Twelve },
				{ "PointType::Thirteen", (int64)PointType::Thirteen },
				{ "PointType::Fourteen", (int64)PointType::Fourteen },
				{ "PointType::Fifteen", (int64)PointType::Fifteen },
				{ "PointType::Sixteen", (int64)PointType::Sixteen },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/DigitArchType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DigitArch,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"PointType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"PointType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPointVariable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DIGITARCH_API uint32 Get_Z_Construct_UScriptStruct_FPointVariable_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointVariable, Z_Construct_UPackage__Script_DigitArch(), TEXT("PointVariable"), sizeof(FPointVariable), Get_Z_Construct_UScriptStruct_FPointVariable_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointVariable(FPointVariable::StaticStruct, TEXT("/Script/DigitArch"), TEXT("PointVariable"), false, nullptr, nullptr);
static struct FScriptStruct_DigitArch_StaticRegisterNativesFPointVariable
{
	FScriptStruct_DigitArch_StaticRegisterNativesFPointVariable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PointVariable")),new UScriptStruct::TCppStructOps<FPointVariable>);
	}
} ScriptStruct_DigitArch_StaticRegisterNativesFPointVariable;
	struct Z_Construct_UScriptStruct_FPointVariable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CameraAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointVariable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DigitArchType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointVariable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointVariable_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "PointVariable" },
		{ "ModuleRelativePath", "Public/DigitArchType.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointVariable_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FPointVariable, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointVariable_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointVariable_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointVariable_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "PointVariable" },
		{ "ModuleRelativePath", "Public/DigitArchType.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPointVariable_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FPointVariable, Type), Z_Construct_UEnum_DigitArch_PointType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointVariable_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointVariable_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPointVariable_Statics::NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointVariable_Statics::NewProp_CameraAt_MetaData[] = {
		{ "Category", "PointVariable" },
		{ "ModuleRelativePath", "Public/DigitArchType.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointVariable_Statics::NewProp_CameraAt = { UE4CodeGen_Private::EPropertyClass::Int, "CameraAt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FPointVariable, CameraAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointVariable_Statics::NewProp_CameraAt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointVariable_Statics::NewProp_CameraAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointVariable_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointVariable_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointVariable_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointVariable_Statics::NewProp_CameraAt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DigitArch,
		nullptr,
		&NewStructOps,
		"PointVariable",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FPointVariable),
		alignof(FPointVariable),
		Z_Construct_UScriptStruct_FPointVariable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointVariable_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointVariable_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointVariable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointVariable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointVariable_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_DigitArch();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointVariable"), sizeof(FPointVariable), Get_Z_Construct_UScriptStruct_FPointVariable_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPointVariable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointVariable_CRC() { return 576990185U; }
class UScriptStruct* FPoints::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DIGITARCH_API uint32 Get_Z_Construct_UScriptStruct_FPoints_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoints, Z_Construct_UPackage__Script_DigitArch(), TEXT("Points"), sizeof(FPoints), Get_Z_Construct_UScriptStruct_FPoints_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPoints(FPoints::StaticStruct, TEXT("/Script/DigitArch"), TEXT("Points"), false, nullptr, nullptr);
static struct FScriptStruct_DigitArch_StaticRegisterNativesFPoints
{
	FScriptStruct_DigitArch_StaticRegisterNativesFPoints()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Points")),new UScriptStruct::TCppStructOps<FPoints>);
	}
} ScriptStruct_DigitArch_StaticRegisterNativesFPoints;
	struct Z_Construct_UScriptStruct_FPoints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeviceData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeviceData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoints_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DigitArchType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoints_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoints>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoints_Statics::NewProp_DeviceData_MetaData[] = {
		{ "Category", "Points" },
		{ "ModuleRelativePath", "Public/DigitArchType.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoints_Statics::NewProp_DeviceData = { UE4CodeGen_Private::EPropertyClass::Array, "DeviceData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FPoints, DeviceData), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoints_Statics::NewProp_DeviceData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoints_Statics::NewProp_DeviceData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoints_Statics::NewProp_DeviceData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "DeviceData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCameraDigit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoints_Statics::NewProp_DeviceType_MetaData[] = {
		{ "Category", "Points" },
		{ "ModuleRelativePath", "Public/DigitArchType.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPoints_Statics::NewProp_DeviceType = { UE4CodeGen_Private::EPropertyClass::Enum, "DeviceType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FPoints, DeviceType), Z_Construct_UEnum_DigitArch_CameraType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoints_Statics::NewProp_DeviceType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoints_Statics::NewProp_DeviceType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPoints_Statics::NewProp_DeviceType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoints_Statics::NewProp_DeviceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoints_Statics::NewProp_DeviceData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoints_Statics::NewProp_DeviceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoints_Statics::NewProp_DeviceType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoints_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DigitArch,
		nullptr,
		&NewStructOps,
		"Points",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FPoints),
		alignof(FPoints),
		Z_Construct_UScriptStruct_FPoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoints_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoints_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoints_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoints()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPoints_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_DigitArch();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Points"), sizeof(FPoints), Get_Z_Construct_UScriptStruct_FPoints_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPoints_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPoints_CRC() { return 817805026U; }
class UScriptStruct* FCameraDigit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DIGITARCH_API uint32 Get_Z_Construct_UScriptStruct_FCameraDigit_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraDigit, Z_Construct_UPackage__Script_DigitArch(), TEXT("CameraDigit"), sizeof(FCameraDigit), Get_Z_Construct_UScriptStruct_FCameraDigit_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraDigit(FCameraDigit::StaticStruct, TEXT("/Script/DigitArch"), TEXT("CameraDigit"), false, nullptr, nullptr);
static struct FScriptStruct_DigitArch_StaticRegisterNativesFCameraDigit
{
	FScriptStruct_DigitArch_StaticRegisterNativesFCameraDigit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraDigit")),new UScriptStruct::TCppStructOps<FCameraDigit>);
	}
} ScriptStruct_DigitArch_StaticRegisterNativesFCameraDigit;
	struct Z_Construct_UScriptStruct_FCameraDigit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CameraAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraDigit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DigitArchType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraDigit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraDigit>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraDigit_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "CameraDigit" },
		{ "ModuleRelativePath", "Public/DigitArchType.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCameraDigit_Statics::NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Array, "Data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FCameraDigit, Data), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraDigit_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraDigit_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraDigit_Statics::NewProp_Data_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPointParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraDigit_Statics::NewProp_CameraAt_MetaData[] = {
		{ "Category", "CameraDigit" },
		{ "ModuleRelativePath", "Public/DigitArchType.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCameraDigit_Statics::NewProp_CameraAt = { UE4CodeGen_Private::EPropertyClass::Int, "CameraAt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FCameraDigit, CameraAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraDigit_Statics::NewProp_CameraAt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraDigit_Statics::NewProp_CameraAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraDigit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDigit_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDigit_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraDigit_Statics::NewProp_CameraAt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraDigit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DigitArch,
		nullptr,
		&NewStructOps,
		"CameraDigit",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCameraDigit),
		alignof(FCameraDigit),
		Z_Construct_UScriptStruct_FCameraDigit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraDigit_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraDigit_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraDigit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraDigit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraDigit_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_DigitArch();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraDigit"), sizeof(FCameraDigit), Get_Z_Construct_UScriptStruct_FCameraDigit_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraDigit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraDigit_CRC() { return 306266213U; }
class UScriptStruct* FPointParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DIGITARCH_API uint32 Get_Z_Construct_UScriptStruct_FPointParam_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointParam, Z_Construct_UPackage__Script_DigitArch(), TEXT("PointParam"), sizeof(FPointParam), Get_Z_Construct_UScriptStruct_FPointParam_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointParam(FPointParam::StaticStruct, TEXT("/Script/DigitArch"), TEXT("PointParam"), false, nullptr, nullptr);
static struct FScriptStruct_DigitArch_StaticRegisterNativesFPointParam
{
	FScriptStruct_DigitArch_StaticRegisterNativesFPointParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PointParam")),new UScriptStruct::TCppStructOps<FPointParam>);
	}
} ScriptStruct_DigitArch_StaticRegisterNativesFPointParam;
	struct Z_Construct_UScriptStruct_FPointParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DigitArchType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointParam_Statics::NewProp_PointInfo_MetaData[] = {
		{ "Category", "PointParam" },
		{ "ModuleRelativePath", "Public/DigitArchType.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPointParam_Statics::NewProp_PointInfo = { UE4CodeGen_Private::EPropertyClass::Array, "PointInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FPointParam, PointInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointParam_Statics::NewProp_PointInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointParam_Statics::NewProp_PointInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointParam_Statics::NewProp_PointInfo_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PointInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPointInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointParam_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "PointParam" },
		{ "ModuleRelativePath", "Public/DigitArchType.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPointParam_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FPointParam, Type), Z_Construct_UEnum_DigitArch_PointType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointParam_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointParam_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPointParam_Statics::NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointParam_Statics::NewProp_PointInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointParam_Statics::NewProp_PointInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointParam_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointParam_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DigitArch,
		nullptr,
		&NewStructOps,
		"PointParam",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FPointParam),
		alignof(FPointParam),
		Z_Construct_UScriptStruct_FPointParam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointParam_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointParam_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointParam_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_DigitArch();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointParam"), sizeof(FPointParam), Get_Z_Construct_UScriptStruct_FPointParam_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPointParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointParam_CRC() { return 3824446893U; }
class UScriptStruct* FPointInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DIGITARCH_API uint32 Get_Z_Construct_UScriptStruct_FPointInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointInfo, Z_Construct_UPackage__Script_DigitArch(), TEXT("PointInfo"), sizeof(FPointInfo), Get_Z_Construct_UScriptStruct_FPointInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointInfo(FPointInfo::StaticStruct, TEXT("/Script/DigitArch"), TEXT("PointInfo"), false, nullptr, nullptr);
static struct FScriptStruct_DigitArch_StaticRegisterNativesFPointInfo
{
	FScriptStruct_DigitArch_StaticRegisterNativesFPointInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PointInfo")),new UScriptStruct::TCppStructOps<FPointInfo>);
	}
} ScriptStruct_DigitArch_StaticRegisterNativesFPointInfo;
	struct Z_Construct_UScriptStruct_FPointInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DigitArchType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "PointInfo" },
		{ "ModuleRelativePath", "Public/DigitArchType.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FPointInfo, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_Frame_MetaData[] = {
		{ "Category", "PointInfo" },
		{ "ModuleRelativePath", "Public/DigitArchType.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_Frame = { UE4CodeGen_Private::EPropertyClass::Int, "Frame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FPointInfo, Frame), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_Frame_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_Frame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_Frame,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DigitArch,
		nullptr,
		&NewStructOps,
		"PointInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FPointInfo),
		alignof(FPointInfo),
		Z_Construct_UScriptStruct_FPointInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_DigitArch();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointInfo"), sizeof(FPointInfo), Get_Z_Construct_UScriptStruct_FPointInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPointInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointInfo_CRC() { return 2951636467U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
