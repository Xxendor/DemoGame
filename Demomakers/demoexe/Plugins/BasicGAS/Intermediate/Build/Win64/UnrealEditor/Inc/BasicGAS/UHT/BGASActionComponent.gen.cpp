// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicGAS/Public/BGASActionComponent.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBGASActionComponent() {}
// Cross Module References
	BASICGAS_API UClass* Z_Construct_UClass_UBGASAction_NoRegister();
	BASICGAS_API UClass* Z_Construct_UClass_UBGASActionComponent();
	BASICGAS_API UClass* Z_Construct_UClass_UBGASActionComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_BasicGAS();
// End Cross Module References
	DEFINE_FUNCTION(UBGASActionComponent::execStopActionByName)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopActionByName(Z_Param_Instigator,Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBGASActionComponent::execStartActionByName)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartActionByName(Z_Param_Instigator,Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBGASActionComponent::execRemoveAction)
	{
		P_GET_OBJECT(UBGASAction,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAction(Z_Param_Action);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBGASActionComponent::execAddAction)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_OBJECT(UClass,Z_Param_ActionClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAction(Z_Param_Instigator,Z_Param_ActionClass);
		P_NATIVE_END;
	}
	void UBGASActionComponent::StaticRegisterNativesUBGASActionComponent()
	{
		UClass* Class = UBGASActionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAction", &UBGASActionComponent::execAddAction },
			{ "RemoveAction", &UBGASActionComponent::execRemoveAction },
			{ "StartActionByName", &UBGASActionComponent::execStartActionByName },
			{ "StopActionByName", &UBGASActionComponent::execStopActionByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBGASActionComponent_AddAction_Statics
	{
		struct BGASActionComponent_eventAddAction_Parms
		{
			AActor* Instigator;
			TSubclassOf<UBGASAction>  ActionClass;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActionClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBGASActionComponent_AddAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BGASActionComponent_eventAddAction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBGASActionComponent_AddAction_Statics::NewProp_ActionClass = { "ActionClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BGASActionComponent_eventAddAction_Parms, ActionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBGASAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBGASActionComponent_AddAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGASActionComponent_AddAction_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGASActionComponent_AddAction_Statics::NewProp_ActionClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBGASActionComponent_AddAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/BGASActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBGASActionComponent_AddAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBGASActionComponent, nullptr, "AddAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBGASActionComponent_AddAction_Statics::BGASActionComponent_eventAddAction_Parms), Z_Construct_UFunction_UBGASActionComponent_AddAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASActionComponent_AddAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBGASActionComponent_AddAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASActionComponent_AddAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBGASActionComponent_AddAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBGASActionComponent_AddAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBGASActionComponent_RemoveAction_Statics
	{
		struct BGASActionComponent_eventRemoveAction_Parms
		{
			UBGASAction* Action;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBGASActionComponent_RemoveAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BGASActionComponent_eventRemoveAction_Parms, Action), Z_Construct_UClass_UBGASAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBGASActionComponent_RemoveAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGASActionComponent_RemoveAction_Statics::NewProp_Action,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBGASActionComponent_RemoveAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/BGASActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBGASActionComponent_RemoveAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBGASActionComponent, nullptr, "RemoveAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBGASActionComponent_RemoveAction_Statics::BGASActionComponent_eventRemoveAction_Parms), Z_Construct_UFunction_UBGASActionComponent_RemoveAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASActionComponent_RemoveAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBGASActionComponent_RemoveAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASActionComponent_RemoveAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBGASActionComponent_RemoveAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBGASActionComponent_RemoveAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBGASActionComponent_StartActionByName_Statics
	{
		struct BGASActionComponent_eventStartActionByName_Parms
		{
			AActor* Instigator;
			FName ActionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBGASActionComponent_StartActionByName_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BGASActionComponent_eventStartActionByName_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBGASActionComponent_StartActionByName_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BGASActionComponent_eventStartActionByName_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBGASActionComponent_StartActionByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BGASActionComponent_eventStartActionByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBGASActionComponent_StartActionByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BGASActionComponent_eventStartActionByName_Parms), &Z_Construct_UFunction_UBGASActionComponent_StartActionByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBGASActionComponent_StartActionByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGASActionComponent_StartActionByName_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGASActionComponent_StartActionByName_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGASActionComponent_StartActionByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBGASActionComponent_StartActionByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/BGASActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBGASActionComponent_StartActionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBGASActionComponent, nullptr, "StartActionByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBGASActionComponent_StartActionByName_Statics::BGASActionComponent_eventStartActionByName_Parms), Z_Construct_UFunction_UBGASActionComponent_StartActionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASActionComponent_StartActionByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBGASActionComponent_StartActionByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASActionComponent_StartActionByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBGASActionComponent_StartActionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBGASActionComponent_StartActionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBGASActionComponent_StopActionByName_Statics
	{
		struct BGASActionComponent_eventStopActionByName_Parms
		{
			AActor* Instigator;
			FName ActionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBGASActionComponent_StopActionByName_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BGASActionComponent_eventStopActionByName_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBGASActionComponent_StopActionByName_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BGASActionComponent_eventStopActionByName_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBGASActionComponent_StopActionByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BGASActionComponent_eventStopActionByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBGASActionComponent_StopActionByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BGASActionComponent_eventStopActionByName_Parms), &Z_Construct_UFunction_UBGASActionComponent_StopActionByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBGASActionComponent_StopActionByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGASActionComponent_StopActionByName_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGASActionComponent_StopActionByName_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBGASActionComponent_StopActionByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBGASActionComponent_StopActionByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/BGASActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBGASActionComponent_StopActionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBGASActionComponent, nullptr, "StopActionByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBGASActionComponent_StopActionByName_Statics::BGASActionComponent_eventStopActionByName_Parms), Z_Construct_UFunction_UBGASActionComponent_StopActionByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASActionComponent_StopActionByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBGASActionComponent_StopActionByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBGASActionComponent_StopActionByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBGASActionComponent_StopActionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBGASActionComponent_StopActionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBGASActionComponent);
	UClass* Z_Construct_UClass_UBGASActionComponent_NoRegister()
	{
		return UBGASActionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBGASActionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveGameplayTags;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultActions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBGASActionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicGAS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBGASActionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBGASActionComponent_AddAction, "AddAction" }, // 1332618153
		{ &Z_Construct_UFunction_UBGASActionComponent_RemoveAction, "RemoveAction" }, // 4116063319
		{ &Z_Construct_UFunction_UBGASActionComponent_StartActionByName, "StartActionByName" }, // 1542452574
		{ &Z_Construct_UFunction_UBGASActionComponent_StopActionByName, "StopActionByName" }, // 2952018372
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGASActionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "DisplayName", "Action Component" },
		{ "IncludePath", "BGASActionComponent.h" },
		{ "ModuleRelativePath", "Public/BGASActionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_ActiveGameplayTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "ModuleRelativePath", "Public/BGASActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_ActiveGameplayTags = { "ActiveGameplayTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBGASActionComponent, ActiveGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_ActiveGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_ActiveGameplayTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_DefaultActions_Inner = { "DefaultActions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UBGASAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_DefaultActions_MetaData[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "Public/BGASActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_DefaultActions = { "DefaultActions", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBGASActionComponent, DefaultActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_DefaultActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_DefaultActions_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBGASAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_Actions_MetaData[] = {
		{ "ModuleRelativePath", "Public/BGASActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBGASActionComponent, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_Actions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBGASActionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_ActiveGameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_DefaultActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_DefaultActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_Actions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBGASActionComponent_Statics::NewProp_Actions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBGASActionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBGASActionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBGASActionComponent_Statics::ClassParams = {
		&UBGASActionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBGASActionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBGASActionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBGASActionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBGASActionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBGASActionComponent()
	{
		if (!Z_Registration_Info_UClass_UBGASActionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBGASActionComponent.OuterSingleton, Z_Construct_UClass_UBGASActionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBGASActionComponent.OuterSingleton;
	}
	template<> BASICGAS_API UClass* StaticClass<UBGASActionComponent>()
	{
		return UBGASActionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBGASActionComponent);
	UBGASActionComponent::~UBGASActionComponent() {}
	struct Z_CompiledInDeferFile_FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBGASActionComponent, UBGASActionComponent::StaticClass, TEXT("UBGASActionComponent"), &Z_Registration_Info_UClass_UBGASActionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBGASActionComponent), 3212566616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionComponent_h_2966180068(TEXT("/Script/BasicGAS"),
		Z_CompiledInDeferFile_FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginsMaker_Plugins_BasicGAS_Source_BasicGAS_Public_BGASActionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
