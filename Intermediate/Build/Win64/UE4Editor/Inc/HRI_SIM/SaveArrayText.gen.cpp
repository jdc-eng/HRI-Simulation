// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HRI_SIM/SaveArrayText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveArrayText() {}
// Cross Module References
	HRI_SIM_API UClass* Z_Construct_UClass_USaveArrayText_NoRegister();
	HRI_SIM_API UClass* Z_Construct_UClass_USaveArrayText();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HRI_SIM();
// End Cross Module References
	DEFINE_FUNCTION(USaveArrayText::execSaveArrayData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_TARRAY(FString,Z_Param_SaveText);
		P_GET_UBOOL(Z_Param_AllowOverWriting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USaveArrayText::SaveArrayData(Z_Param_SaveDirectory,Z_Param_FileName,Z_Param_SaveText,Z_Param_AllowOverWriting);
		P_NATIVE_END;
	}
	void USaveArrayText::StaticRegisterNativesUSaveArrayText()
	{
		UClass* Class = USaveArrayText::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveArrayData", &USaveArrayText::execSaveArrayData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics
	{
		struct SaveArrayText_eventSaveArrayData_Parms
		{
			FString SaveDirectory;
			FString FileName;
			TArray<FString> SaveText;
			bool AllowOverWriting;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveDirectory;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveText_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SaveText;
		static void NewProp_AllowOverWriting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowOverWriting;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::NewProp_SaveDirectory = { "SaveDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveArrayText_eventSaveArrayData_Parms, SaveDirectory), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveArrayText_eventSaveArrayData_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::NewProp_SaveText_Inner = { "SaveText", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::NewProp_SaveText = { "SaveText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveArrayText_eventSaveArrayData_Parms, SaveText), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::NewProp_AllowOverWriting_SetBit(void* Obj)
	{
		((SaveArrayText_eventSaveArrayData_Parms*)Obj)->AllowOverWriting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::NewProp_AllowOverWriting = { "AllowOverWriting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveArrayText_eventSaveArrayData_Parms), &Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::NewProp_AllowOverWriting_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveArrayText_eventSaveArrayData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveArrayText_eventSaveArrayData_Parms), &Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::NewProp_SaveDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::NewProp_SaveText_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::NewProp_SaveText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::NewProp_AllowOverWriting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "keywords", "Save" },
		{ "ModuleRelativePath", "SaveArrayText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveArrayText, nullptr, "SaveArrayData", nullptr, nullptr, sizeof(SaveArrayText_eventSaveArrayData_Parms), Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveArrayText_SaveArrayData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveArrayText_SaveArrayData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveArrayText_NoRegister()
	{
		return USaveArrayText::StaticClass();
	}
	struct Z_Construct_UClass_USaveArrayText_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveArrayText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HRI_SIM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveArrayText_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveArrayText_SaveArrayData, "SaveArrayData" }, // 684591637
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveArrayText_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveArrayText.h" },
		{ "ModuleRelativePath", "SaveArrayText.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveArrayText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveArrayText>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveArrayText_Statics::ClassParams = {
		&USaveArrayText::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveArrayText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveArrayText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveArrayText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveArrayText_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveArrayText, 324522851);
	template<> HRI_SIM_API UClass* StaticClass<USaveArrayText>()
	{
		return USaveArrayText::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveArrayText(Z_Construct_UClass_USaveArrayText, &USaveArrayText::StaticClass, TEXT("/Script/HRI_SIM"), TEXT("USaveArrayText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveArrayText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
