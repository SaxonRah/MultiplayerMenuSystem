// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERMENU_MenuInterface_generated_h
#error "MenuInterface.generated.h already included, missing '#pragma once' in MenuInterface.h"
#endif
#define MULTIPLAYERMENU_MenuInterface_generated_h

#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_14_RPC_WRAPPERS
#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MULTIPLAYERMENU_API UMenuInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MULTIPLAYERMENU_API, UMenuInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MULTIPLAYERMENU_API UMenuInterface(UMenuInterface&&); \
	MULTIPLAYERMENU_API UMenuInterface(const UMenuInterface&); \
public:


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MULTIPLAYERMENU_API UMenuInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MULTIPLAYERMENU_API UMenuInterface(UMenuInterface&&); \
	MULTIPLAYERMENU_API UMenuInterface(const UMenuInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MULTIPLAYERMENU_API, UMenuInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuInterface)


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMenuInterface(); \
	friend MULTIPLAYERMENU_API class UClass* Z_Construct_UClass_UMenuInterface(); \
public: \
	DECLARE_CLASS(UMenuInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/MultiplayerMenu"), MULTIPLAYERMENU_API) \
	DECLARE_SERIALIZER(UMenuInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_14_GENERATED_UINTERFACE_BODY() \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_14_GENERATED_UINTERFACE_BODY() \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMenuInterface() {} \
public: \
	typedef UMenuInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IMenuInterface() {} \
public: \
	typedef UMenuInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_11_PROLOG
#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_14_RPC_WRAPPERS \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MultiMenu_Plugins_MultiplayerMenu_Source_MultiplayerMenu_MenuSystem_MenuInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
