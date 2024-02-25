// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BGASAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BASICGAS_BGASAction_generated_h
#error "BGASAction.generated.h already included, missing '#pragma once' in BGASAction.h"
#endif
#define BASICGAS_BGASAction_generated_h

#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_SPARSE_DATA
#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_RPC_WRAPPERS \
	virtual void OnStopAction_Implementation(AActor* Instigator); \
	virtual void OnStartAction_Implementation(AActor* Instigator); \
	virtual bool CanStart_Implementation(AActor* Instigator); \
 \
	DECLARE_FUNCTION(execOnStopAction); \
	DECLARE_FUNCTION(execOnStartAction); \
	DECLARE_FUNCTION(execStopAction); \
	DECLARE_FUNCTION(execCanStart); \
	DECLARE_FUNCTION(execGetIsRunning);


#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnStopAction_Implementation(AActor* Instigator); \
	virtual void OnStartAction_Implementation(AActor* Instigator); \
	virtual bool CanStart_Implementation(AActor* Instigator); \
 \
	DECLARE_FUNCTION(execOnStopAction); \
	DECLARE_FUNCTION(execOnStartAction); \
	DECLARE_FUNCTION(execStopAction); \
	DECLARE_FUNCTION(execCanStart); \
	DECLARE_FUNCTION(execGetIsRunning);


#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_ACCESSORS
#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_CALLBACK_WRAPPERS
#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBGASAction(); \
	friend struct Z_Construct_UClass_UBGASAction_Statics; \
public: \
	DECLARE_CLASS(UBGASAction, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BasicGAS"), NO_API) \
	DECLARE_SERIALIZER(UBGASAction)


#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBGASAction(); \
	friend struct Z_Construct_UClass_UBGASAction_Statics; \
public: \
	DECLARE_CLASS(UBGASAction, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BasicGAS"), NO_API) \
	DECLARE_SERIALIZER(UBGASAction)


#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBGASAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBGASAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBGASAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBGASAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBGASAction(UBGASAction&&); \
	NO_API UBGASAction(const UBGASAction&); \
public: \
	NO_API virtual ~UBGASAction();


#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBGASAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBGASAction(UBGASAction&&); \
	NO_API UBGASAction(const UBGASAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBGASAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBGASAction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBGASAction) \
	NO_API virtual ~UBGASAction();


#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_14_PROLOG
#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_SPARSE_DATA \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_RPC_WRAPPERS \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_ACCESSORS \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_CALLBACK_WRAPPERS \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_INCLASS \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_SPARSE_DATA \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_ACCESSORS \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_CALLBACK_WRAPPERS \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_INCLASS_NO_PURE_DECLS \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICGAS_API UClass* StaticClass<class UBGASAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
