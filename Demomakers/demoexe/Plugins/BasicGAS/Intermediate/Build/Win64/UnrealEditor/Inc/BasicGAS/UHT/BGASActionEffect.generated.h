// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BGASActionEffect.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BASICGAS_BGASActionEffect_generated_h
#error "BGASActionEffect.generated.h already included, missing '#pragma once' in BGASActionEffect.h"
#endif
#define BASICGAS_BGASActionEffect_generated_h

#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_SPARSE_DATA
#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_RPC_WRAPPERS \
	virtual void ExecutePeriodEffect_Implementation(AActor* Instigator); \
 \
	DECLARE_FUNCTION(execExecutePeriodEffect);


#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ExecutePeriodEffect_Implementation(AActor* Instigator); \
 \
	DECLARE_FUNCTION(execExecutePeriodEffect);


#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_ACCESSORS
#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_CALLBACK_WRAPPERS
#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBGASActionEffect(); \
	friend struct Z_Construct_UClass_UBGASActionEffect_Statics; \
public: \
	DECLARE_CLASS(UBGASActionEffect, UBGASAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicGAS"), NO_API) \
	DECLARE_SERIALIZER(UBGASActionEffect)


#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBGASActionEffect(); \
	friend struct Z_Construct_UClass_UBGASActionEffect_Statics; \
public: \
	DECLARE_CLASS(UBGASActionEffect, UBGASAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicGAS"), NO_API) \
	DECLARE_SERIALIZER(UBGASActionEffect)


#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBGASActionEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBGASActionEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBGASActionEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBGASActionEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBGASActionEffect(UBGASActionEffect&&); \
	NO_API UBGASActionEffect(const UBGASActionEffect&); \
public: \
	NO_API virtual ~UBGASActionEffect();


#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBGASActionEffect(UBGASActionEffect&&); \
	NO_API UBGASActionEffect(const UBGASActionEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBGASActionEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBGASActionEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBGASActionEffect) \
	NO_API virtual ~UBGASActionEffect();


#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_12_PROLOG
#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_SPARSE_DATA \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_RPC_WRAPPERS \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_ACCESSORS \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_CALLBACK_WRAPPERS \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_INCLASS \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_SPARSE_DATA \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_ACCESSORS \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_CALLBACK_WRAPPERS \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_INCLASS_NO_PURE_DECLS \
	FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICGAS_API UClass* StaticClass<class UBGASActionEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
