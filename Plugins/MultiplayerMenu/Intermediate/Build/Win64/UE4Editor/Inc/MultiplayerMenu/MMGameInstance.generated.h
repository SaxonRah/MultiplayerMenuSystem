// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERMENU_MMGameInstance_generated_h
#error "MMGameInstance.generated.h already included, missing '#pragma once' in MMGameInstance.h"
#endif
#define MULTIPLAYERMENU_MMGameInstance_generated_h

#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJoin) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Join(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHost) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ServerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Host(Z_Param_ServerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInGameLoadMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InGameLoadMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMenuWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LoadMenuWidget(); \
		P_NATIVE_END; \
	}


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoin) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Join(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHost) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ServerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Host(Z_Param_ServerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInGameLoadMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InGameLoadMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMenuWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LoadMenuWidget(); \
		P_NATIVE_END; \
	}


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMMGameInstance(); \
	friend MULTIPLAYERMENU_API class UClass* Z_Construct_UClass_UMMGameInstance(); \
public: \
	DECLARE_CLASS(UMMGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/MultiplayerMenu"), NO_API) \
	DECLARE_SERIALIZER(UMMGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMMGameInstance*>(this); }


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMMGameInstance(); \
	friend MULTIPLAYERMENU_API class UClass* Z_Construct_UClass_UMMGameInstance(); \
public: \
	DECLARE_CLASS(UMMGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/MultiplayerMenu"), NO_API) \
	DECLARE_SERIALIZER(UMMGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMMGameInstance*>(this); }


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMGameInstance(UMMGameInstance&&); \
	NO_API UMMGameInstance(const UMMGameInstance&); \
public:


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMGameInstance(UMMGameInstance&&); \
	NO_API UMMGameInstance(const UMMGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMGameInstance)


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h_19_PRIVATE_PROPERTY_OFFSET
#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h_16_PROLOG
#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h_19_RPC_WRAPPERS \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h_19_INCLASS \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h_19_INCLASS_NO_PURE_DECLS \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_GameBase_MMGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
