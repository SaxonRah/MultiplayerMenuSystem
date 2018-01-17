// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERMENU_MMBaseCharacter_generated_h
#error "MMBaseCharacter.generated.h already included, missing '#pragma once' in MMBaseCharacter.h"
#endif
#define MULTIPLAYERMENU_MMBaseCharacter_generated_h

#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h_12_RPC_WRAPPERS
#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMMBaseCharacter(); \
	friend MULTIPLAYERMENU_API class UClass* Z_Construct_UClass_AMMBaseCharacter(); \
public: \
	DECLARE_CLASS(AMMBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MultiplayerMenu"), NO_API) \
	DECLARE_SERIALIZER(AMMBaseCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMMBaseCharacter(); \
	friend MULTIPLAYERMENU_API class UClass* Z_Construct_UClass_AMMBaseCharacter(); \
public: \
	DECLARE_CLASS(AMMBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MultiplayerMenu"), NO_API) \
	DECLARE_SERIALIZER(AMMBaseCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMMBaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMMBaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMMBaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMMBaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMMBaseCharacter(AMMBaseCharacter&&); \
	NO_API AMMBaseCharacter(const AMMBaseCharacter&); \
public:


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMMBaseCharacter(AMMBaseCharacter&&); \
	NO_API AMMBaseCharacter(const AMMBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMMBaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMMBaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMMBaseCharacter)


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMMBaseCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMMBaseCharacter, FollowCamera); }


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h_9_PROLOG
#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h_12_RPC_WRAPPERS \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h_12_INCLASS \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
