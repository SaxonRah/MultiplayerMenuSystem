// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameBase/MMGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMGameInstance() {}
// Cross Module References
	MULTIPLAYERMENU_API UClass* Z_Construct_UClass_UMMGameInstance_NoRegister();
	MULTIPLAYERMENU_API UClass* Z_Construct_UClass_UMMGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_MultiplayerMenu();
	MULTIPLAYERMENU_API UFunction* Z_Construct_UFunction_UMMGameInstance_Host();
	MULTIPLAYERMENU_API UFunction* Z_Construct_UFunction_UMMGameInstance_InGameLoadMenu();
	MULTIPLAYERMENU_API UFunction* Z_Construct_UFunction_UMMGameInstance_Join();
	MULTIPLAYERMENU_API UFunction* Z_Construct_UFunction_UMMGameInstance_LoadMenuWidget();
	MULTIPLAYERMENU_API UClass* Z_Construct_UClass_UMenuInterface_NoRegister();
// End Cross Module References
	void UMMGameInstance::StaticRegisterNativesUMMGameInstance()
	{
		UClass* Class = UMMGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Host", (Native)&UMMGameInstance::execHost },
			{ "InGameLoadMenu", (Native)&UMMGameInstance::execInGameLoadMenu },
			{ "Join", (Native)&UMMGameInstance::execJoin },
			{ "LoadMenuWidget", (Native)&UMMGameInstance::execLoadMenuWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMMGameInstance_Host()
	{
		struct MMGameInstance_eventHost_Parms
		{
			FString ServerName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerName = { UE4CodeGen_Private::EPropertyClass::Str, "ServerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMGameInstance_eventHost_Parms, ServerName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameBase/MMGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMGameInstance, "Host", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, sizeof(MMGameInstance_eventHost_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMGameInstance_InGameLoadMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameBase/MMGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMGameInstance, "InGameLoadMenu", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMGameInstance_Join()
	{
		struct MMGameInstance_eventJoin_Parms
		{
			uint32 Index;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::UInt32, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MMGameInstance_eventJoin_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameBase/MMGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMGameInstance, "Join", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, sizeof(MMGameInstance_eventJoin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMMGameInstance_LoadMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GameBase/MMGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMGameInstance, "LoadMenuWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMMGameInstance_NoRegister()
	{
		return UMMGameInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UMMGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerMenu,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMMGameInstance_Host, "Host" }, // 3871517322
				{ &Z_Construct_UFunction_UMMGameInstance_InGameLoadMenu, "InGameLoadMenu" }, // 410300573
				{ &Z_Construct_UFunction_UMMGameInstance_Join, "Join" }, // 3814382845
				{ &Z_Construct_UFunction_UMMGameInstance_LoadMenuWidget, "LoadMenuWidget" }, // 4113190427
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameBase/MMGameInstance.h" },
				{ "ModuleRelativePath", "GameBase/MMGameInstance.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UMenuInterface_NoRegister, (int32)VTABLE_OFFSET(UMMGameInstance, IMenuInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMMGameInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMMGameInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMMGameInstance, 1661195236);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMGameInstance(Z_Construct_UClass_UMMGameInstance, &UMMGameInstance::StaticClass, TEXT("/Script/MultiplayerMenu"), TEXT("UMMGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
