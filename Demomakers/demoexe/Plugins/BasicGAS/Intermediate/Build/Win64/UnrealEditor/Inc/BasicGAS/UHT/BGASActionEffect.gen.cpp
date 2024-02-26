// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicGAS/Public/BGASActionEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBGASActionEffect() {}
// Cross Module References
	BASICGAS_API UClass* Z_Construct_UClass_UBGASAction();
	BASICGAS_API UClass* Z_Construct_UClass_UBGASActionEffect();
	BASICGAS_API UClass* Z_Construct_UClass_UBGASActionEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BasicGAS();
// End Cross Module References
	DEFINE_FUNCTION(UBGASActionEffect::execExecutePeriodEffect)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecutePeriodEffect_Implementation(Z_Param_Instigator);
		P_NATIVE_END;
	}
	struct BGASActionEffect_eventExecutePeriodEffect_Parms
	{
		AActor* Instigator;
	};
	static FName NAME_UBGASActionEffect_ExecutePeriodEffect = FName(TEXT("ExecutePeriodEffect"));
	void UBGASActionEffect::ExecutePeriodEffect(AActor* Instigator)
	{
		BGASActionEffect_eventExecutePeriodEffect_Parms Parms;
		Parms.Instigator=Instigator;
		ProcessEvent(FindFunctionChecked(NAME_UBGASActionEffect_ExecutePeriodEffect),&Parms);
	}
	void UBGASActionEffect::StaticRegisterNativesUBGASActionEffect()
	{
		UClass* Class = UBGASActionEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecutePeriodEffect", &UBGASActionEffect::execExecutePeriodEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBGASActionEffect_ExecutePeriodEffect_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBGASActionEffect_ExecutePeriodEffect_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BGASActionEffect_eventExecutePeriodEffect_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBGASActionEffect_ExecutePeriodEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGASActionEffect_ExecutePeriodEffect_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBGASActionEffect_ExecutePeriodEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/BGASActionEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBGASActionEffect_ExecutePeriodEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBGASActionEffect, nullptr, "ExecutePeriodEffect", nullptr, nullptr, sizeof(BGASActionEffect_eventExecutePeriodEffect_Parms), Z_Construct_UFunction_UBGASActionEffect_ExecutePeriodEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASActionEffect_ExecutePeriodEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBGASActionEffect_ExecutePeriodEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASActionEffect_ExecutePeriodEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBGASActionEffect_ExecutePeriodEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBGASActionEffect_ExecutePeriodEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBGASActionEffect);
	UClass* Z_Construct_UClass_UBGASActionEffect_NoRegister()
	{
		return UBGASActionEffect::StaticClass();
	}
	struct Z_Construct_UClass_UBGASActionEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBGASActionEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBGASAction,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicGAS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBGASActionEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBGASActionEffect_ExecutePeriodEffect, "ExecutePeriodEffect" }, // 2860418202
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGASActionEffect_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BGASActionEffect.h" },
		{ "ModuleRelativePath", "Public/BGASActionEffect.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGASActionEffect_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/BGASActionEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBGASActionEffect_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBGASActionEffect, Duration), METADATA_PARAMS(Z_Construct_UClass_UBGASActionEffect_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGASActionEffect_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGASActionEffect_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/BGASActionEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBGASActionEffect_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBGASActionEffect, Period), METADATA_PARAMS(Z_Construct_UClass_UBGASActionEffect_Statics::NewProp_Period_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGASActionEffect_Statics::NewProp_Period_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBGASActionEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGASActionEffect_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGASActionEffect_Statics::NewProp_Period,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBGASActionEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBGASActionEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBGASActionEffect_Statics::ClassParams = {
		&UBGASActionEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBGASActionEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBGASActionEffect_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBGASActionEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBGASActionEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBGASActionEffect()
	{
		if (!Z_Registration_Info_UClass_UBGASActionEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBGASActionEffect.OuterSingleton, Z_Construct_UClass_UBGASActionEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBGASActionEffect.OuterSingleton;
	}
	template<> BASICGAS_API UClass* StaticClass<UBGASActionEffect>()
	{
		return UBGASActionEffect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBGASActionEffect);
	UBGASActionEffect::~UBGASActionEffect() {}
	struct Z_CompiledInDeferFile_FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBGASActionEffect, UBGASActionEffect::StaticClass, TEXT("UBGASActionEffect"), &Z_Registration_Info_UClass_UBGASActionEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBGASActionEffect), 1094764122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_2313330478(TEXT("/Script/BasicGAS"),
		Z_CompiledInDeferFile_FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionEffect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
