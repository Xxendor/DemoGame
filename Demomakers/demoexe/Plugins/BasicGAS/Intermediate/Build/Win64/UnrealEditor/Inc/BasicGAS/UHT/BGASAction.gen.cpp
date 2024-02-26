// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicGAS/Public/BGASAction.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBGASAction() {}
// Cross Module References
	BASICGAS_API UClass* Z_Construct_UClass_UBGASAction();
	BASICGAS_API UClass* Z_Construct_UClass_UBGASAction_NoRegister();
	BASICGAS_API UClass* Z_Construct_UClass_UBGASActionComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_BasicGAS();
// End Cross Module References
	DEFINE_FUNCTION(UBGASAction::execGetActionComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBGASActionComponent**)Z_Param__Result=P_THIS->GetActionComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBGASAction::execGetWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBGASAction::execOnStopAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopAction_Implementation(Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBGASAction::execOnStartAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartAction_Implementation(Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBGASAction::execStopAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAction(Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBGASAction::execCanStart)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStart_Implementation(Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBGASAction::execGetIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsRunning();
		P_NATIVE_END;
	}
	struct BGASAction_eventCanStart_Parms
	{
		AActor* Instigator;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		BGASAction_eventCanStart_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct BGASAction_eventOnStartAction_Parms
	{
		AActor* Instigator;
	};
	struct BGASAction_eventOnStopAction_Parms
	{
		AActor* Instigator;
	};
	static FName NAME_UBGASAction_CanStart = FName(TEXT("CanStart"));
	bool UBGASAction::CanStart(AActor* Instigator)
	{
		BGASAction_eventCanStart_Parms Parms;
		Parms.Instigator=Instigator;
		ProcessEvent(FindFunctionChecked(NAME_UBGASAction_CanStart),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UBGASAction_OnStartAction = FName(TEXT("OnStartAction"));
	void UBGASAction::OnStartAction(AActor* Instigator)
	{
		BGASAction_eventOnStartAction_Parms Parms;
		Parms.Instigator=Instigator;
		ProcessEvent(FindFunctionChecked(NAME_UBGASAction_OnStartAction),&Parms);
	}
	static FName NAME_UBGASAction_OnStopAction = FName(TEXT("OnStopAction"));
	void UBGASAction::OnStopAction(AActor* Instigator)
	{
		BGASAction_eventOnStopAction_Parms Parms;
		Parms.Instigator=Instigator;
		ProcessEvent(FindFunctionChecked(NAME_UBGASAction_OnStopAction),&Parms);
	}
	void UBGASAction::StaticRegisterNativesUBGASAction()
	{
		UClass* Class = UBGASAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanStart", &UBGASAction::execCanStart },
			{ "GetActionComponent", &UBGASAction::execGetActionComponent },
			{ "GetIsRunning", &UBGASAction::execGetIsRunning },
			{ "GetWorld", &UBGASAction::execGetWorld },
			{ "OnStartAction", &UBGASAction::execOnStartAction },
			{ "OnStopAction", &UBGASAction::execOnStopAction },
			{ "StopAction", &UBGASAction::execStopAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBGASAction_CanStart_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBGASAction_CanStart_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BGASAction_eventCanStart_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBGASAction_CanStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BGASAction_eventCanStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBGASAction_CanStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BGASAction_eventCanStart_Parms), &Z_Construct_UFunction_UBGASAction_CanStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBGASAction_CanStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGASAction_CanStart_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGASAction_CanStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBGASAction_CanStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/BGASAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBGASAction_CanStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBGASAction, nullptr, "CanStart", nullptr, nullptr, sizeof(BGASAction_eventCanStart_Parms), Z_Construct_UFunction_UBGASAction_CanStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASAction_CanStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBGASAction_CanStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASAction_CanStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBGASAction_CanStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBGASAction_CanStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBGASAction_GetActionComponent_Statics
	{
		struct BGASAction_eventGetActionComponent_Parms
		{
			UBGASActionComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBGASAction_GetActionComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBGASAction_GetActionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BGASAction_eventGetActionComponent_Parms, ReturnValue), Z_Construct_UClass_UBGASActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBGASAction_GetActionComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASAction_GetActionComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBGASAction_GetActionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGASAction_GetActionComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBGASAction_GetActionComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/BGASAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBGASAction_GetActionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBGASAction, nullptr, "GetActionComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBGASAction_GetActionComponent_Statics::BGASAction_eventGetActionComponent_Parms), Z_Construct_UFunction_UBGASAction_GetActionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASAction_GetActionComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBGASAction_GetActionComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASAction_GetActionComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBGASAction_GetActionComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBGASAction_GetActionComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBGASAction_GetIsRunning_Statics
	{
		struct BGASAction_eventGetIsRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBGASAction_GetIsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BGASAction_eventGetIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBGASAction_GetIsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BGASAction_eventGetIsRunning_Parms), &Z_Construct_UFunction_UBGASAction_GetIsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBGASAction_GetIsRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGASAction_GetIsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBGASAction_GetIsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/BGASAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBGASAction_GetIsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBGASAction, nullptr, "GetIsRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBGASAction_GetIsRunning_Statics::BGASAction_eventGetIsRunning_Parms), Z_Construct_UFunction_UBGASAction_GetIsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASAction_GetIsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBGASAction_GetIsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASAction_GetIsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBGASAction_GetIsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBGASAction_GetIsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBGASAction_GetWorld_Statics
	{
		struct BGASAction_eventGetWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBGASAction_GetWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BGASAction_eventGetWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBGASAction_GetWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGASAction_GetWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBGASAction_GetWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/BGASAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBGASAction_GetWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBGASAction, nullptr, "GetWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBGASAction_GetWorld_Statics::BGASAction_eventGetWorld_Parms), Z_Construct_UFunction_UBGASAction_GetWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASAction_GetWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBGASAction_GetWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASAction_GetWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBGASAction_GetWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBGASAction_GetWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBGASAction_OnStartAction_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBGASAction_OnStartAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BGASAction_eventOnStartAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBGASAction_OnStartAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGASAction_OnStartAction_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBGASAction_OnStartAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/BGASAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBGASAction_OnStartAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBGASAction, nullptr, "OnStartAction", nullptr, nullptr, sizeof(BGASAction_eventOnStartAction_Parms), Z_Construct_UFunction_UBGASAction_OnStartAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASAction_OnStartAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBGASAction_OnStartAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASAction_OnStartAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBGASAction_OnStartAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBGASAction_OnStartAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBGASAction_OnStopAction_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBGASAction_OnStopAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BGASAction_eventOnStopAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBGASAction_OnStopAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGASAction_OnStopAction_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBGASAction_OnStopAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/BGASAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBGASAction_OnStopAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBGASAction, nullptr, "OnStopAction", nullptr, nullptr, sizeof(BGASAction_eventOnStopAction_Parms), Z_Construct_UFunction_UBGASAction_OnStopAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASAction_OnStopAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBGASAction_OnStopAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASAction_OnStopAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBGASAction_OnStopAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBGASAction_OnStopAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBGASAction_StopAction_Statics
	{
		struct BGASAction_eventStopAction_Parms
		{
			AActor* Instigator;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBGASAction_StopAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BGASAction_eventStopAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBGASAction_StopAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGASAction_StopAction_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBGASAction_StopAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/BGASAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBGASAction_StopAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBGASAction, nullptr, "StopAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBGASAction_StopAction_Statics::BGASAction_eventStopAction_Parms), Z_Construct_UFunction_UBGASAction_StopAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASAction_StopAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBGASAction_StopAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASAction_StopAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBGASAction_StopAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBGASAction_StopAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBGASAction);
	UClass* Z_Construct_UClass_UBGASAction_NoRegister()
	{
		return UBGASAction::StaticClass();
	}
	struct Z_Construct_UClass_UBGASAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStart_MetaData[];
#endif
		static void NewProp_bAutoStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBGASAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicGAS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBGASAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBGASAction_CanStart, "CanStart" }, // 721438218
		{ &Z_Construct_UFunction_UBGASAction_GetActionComponent, "GetActionComponent" }, // 3864320282
		{ &Z_Construct_UFunction_UBGASAction_GetIsRunning, "GetIsRunning" }, // 3911294541
		{ &Z_Construct_UFunction_UBGASAction_GetWorld, "GetWorld" }, // 2785267912
		{ &Z_Construct_UFunction_UBGASAction_OnStartAction, "OnStartAction" }, // 2852936430
		{ &Z_Construct_UFunction_UBGASAction_OnStopAction, "OnStopAction" }, // 2311219771
		{ &Z_Construct_UFunction_UBGASAction_StopAction, "StopAction" }, // 3328561976
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGASAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BGASAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BGASAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGASAction_Statics::NewProp_GrantedTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/* Tags added to owning actor when activated, remove when actions stops */" },
		{ "ModuleRelativePath", "Public/BGASAction.h" },
		{ "ToolTip", "Tags added to owning actor when activated, remove when actions stops" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBGASAction_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBGASAction, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UBGASAction_Statics::NewProp_GrantedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGASAction_Statics::NewProp_GrantedTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGASAction_Statics::NewProp_BlockedTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/* Action can only starts if OwningActor has none of these Tags applied */" },
		{ "ModuleRelativePath", "Public/BGASAction.h" },
		{ "ToolTip", "Action can only starts if OwningActor has none of these Tags applied" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBGASAction_Statics::NewProp_BlockedTags = { "BlockedTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBGASAction, BlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UBGASAction_Statics::NewProp_BlockedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGASAction_Statics::NewProp_BlockedTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGASAction_Statics::NewProp_bAutoStart_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "/* Start immediately when added to action component */" },
		{ "ModuleRelativePath", "Public/BGASAction.h" },
		{ "ToolTip", "Start immediately when added to action component" },
	};
#endif
	void Z_Construct_UClass_UBGASAction_Statics::NewProp_bAutoStart_SetBit(void* Obj)
	{
		((UBGASAction*)Obj)->bAutoStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBGASAction_Statics::NewProp_bAutoStart = { "bAutoStart", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBGASAction), &Z_Construct_UClass_UBGASAction_Statics::NewProp_bAutoStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBGASAction_Statics::NewProp_bAutoStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGASAction_Statics::NewProp_bAutoStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGASAction_Statics::NewProp_ActionName_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/BGASAction.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBGASAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBGASAction, ActionName), METADATA_PARAMS(Z_Construct_UClass_UBGASAction_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGASAction_Statics::NewProp_ActionName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBGASAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGASAction_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGASAction_Statics::NewProp_BlockedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGASAction_Statics::NewProp_bAutoStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGASAction_Statics::NewProp_ActionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBGASAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBGASAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBGASAction_Statics::ClassParams = {
		&UBGASAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBGASAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBGASAction_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBGASAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBGASAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBGASAction()
	{
		if (!Z_Registration_Info_UClass_UBGASAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBGASAction.OuterSingleton, Z_Construct_UClass_UBGASAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBGASAction.OuterSingleton;
	}
	template<> BASICGAS_API UClass* StaticClass<UBGASAction>()
	{
		return UBGASAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBGASAction);
	UBGASAction::~UBGASAction() {}
	struct Z_CompiledInDeferFile_FID_ADBLinkGameStudios_DemoGame_Demomakers_demoexe_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ADBLinkGameStudios_DemoGame_Demomakers_demoexe_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBGASAction, UBGASAction::StaticClass, TEXT("UBGASAction"), &Z_Registration_Info_UClass_UBGASAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBGASAction), 3902922504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ADBLinkGameStudios_DemoGame_Demomakers_demoexe_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_982665773(TEXT("/Script/BasicGAS"),
		Z_CompiledInDeferFile_FID_ADBLinkGameStudios_DemoGame_Demomakers_demoexe_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ADBLinkGameStudios_DemoGame_Demomakers_demoexe_Plugins_BasicGAS_Source_BasicGAS_Public_BGASAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
