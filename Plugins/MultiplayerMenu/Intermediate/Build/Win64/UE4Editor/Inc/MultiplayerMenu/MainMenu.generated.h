// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERMENU_MainMenu_generated_h
#error "MainMenu.generated.h already included, missing '#pragma once' in MainMenu.h"
#endif
#define MULTIPLAYERMENU_MainMenu_generated_h

#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_12_GENERATED_BODY \
	friend MULTIPLAYERMENU_API class UScriptStruct* Z_Construct_UScriptStruct_FServerData(); \
	MULTIPLAYERMENU_API static class UScriptStruct* StaticStruct();


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuitPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->QuitPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenMainMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OpenMainMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenJoinMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OpenJoinMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenHostMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OpenHostMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->JoinServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHostServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->HostServer(); \
		P_NATIVE_END; \
	}


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuitPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->QuitPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenMainMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OpenMainMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenJoinMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OpenJoinMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenHostMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OpenHostMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->JoinServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHostServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->HostServer(); \
		P_NATIVE_END; \
	}


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend MULTIPLAYERMENU_API class UClass* Z_Construct_UClass_UMainMenu(); \
public: \
	DECLARE_CLASS(UMainMenu, UMenuWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MultiplayerMenu"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend MULTIPLAYERMENU_API class UClass* Z_Construct_UClass_UMainMenu(); \
public: \
	DECLARE_CLASS(UMainMenu, UMenuWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MultiplayerMenu"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public:


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu)


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HostButton() { return STRUCT_OFFSET(UMainMenu, HostButton); } \
	FORCEINLINE static uint32 __PPO__JoinButton() { return STRUCT_OFFSET(UMainMenu, JoinButton); } \
	FORCEINLINE static uint32 __PPO__QuitButton() { return STRUCT_OFFSET(UMainMenu, QuitButton); } \
	FORCEINLINE static uint32 __PPO__CancelJoinMenuButton() { return STRUCT_OFFSET(UMainMenu, CancelJoinMenuButton); } \
	FORCEINLINE static uint32 __PPO__ConfirmJoinMenuButton() { return STRUCT_OFFSET(UMainMenu, ConfirmJoinMenuButton); } \
	FORCEINLINE static uint32 __PPO__MenuSwitcher() { return STRUCT_OFFSET(UMainMenu, MenuSwitcher); } \
	FORCEINLINE static uint32 __PPO__MainMenu() { return STRUCT_OFFSET(UMainMenu, MainMenu); } \
	FORCEINLINE static uint32 __PPO__JoinMenu() { return STRUCT_OFFSET(UMainMenu, JoinMenu); } \
	FORCEINLINE static uint32 __PPO__HostMenu() { return STRUCT_OFFSET(UMainMenu, HostMenu); } \
	FORCEINLINE static uint32 __PPO__ServerHostName() { return STRUCT_OFFSET(UMainMenu, ServerHostName); } \
	FORCEINLINE static uint32 __PPO__CancelHostMenuButton() { return STRUCT_OFFSET(UMainMenu, CancelHostMenuButton); } \
	FORCEINLINE static uint32 __PPO__ConfirmHostMenuButton() { return STRUCT_OFFSET(UMainMenu, ConfirmHostMenuButton); } \
	FORCEINLINE static uint32 __PPO__ServerList() { return STRUCT_OFFSET(UMainMenu, ServerList); }


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_23_PROLOG
#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_26_PRIVATE_PROPERTY_OFFSET \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_26_RPC_WRAPPERS \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_26_INCLASS \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_26_PRIVATE_PROPERTY_OFFSET \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_26_INCLASS_NO_PURE_DECLS \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
