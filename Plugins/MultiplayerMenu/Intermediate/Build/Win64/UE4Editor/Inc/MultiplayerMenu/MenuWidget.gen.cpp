// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MenuSystem/MenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuWidget() {}
// Cross Module References
	MULTIPLAYERMENU_API UClass* Z_Construct_UClass_UMenuWidget_NoRegister();
	MULTIPLAYERMENU_API UClass* Z_Construct_UClass_UMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MultiplayerMenu();
// End Cross Module References
	void UMenuWidget::StaticRegisterNativesUMenuWidget()
	{
	}
	UClass* Z_Construct_UClass_UMenuWidget_NoRegister()
	{
		return UMenuWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerMenu,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MenuSystem/MenuWidget.h" },
				{ "ModuleRelativePath", "MenuSystem/MenuWidget.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMenuWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMenuWidget::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMenuWidget, 3456905949);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMenuWidget(Z_Construct_UClass_UMenuWidget, &UMenuWidget::StaticClass, TEXT("/Script/MultiplayerMenu"), TEXT("UMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
