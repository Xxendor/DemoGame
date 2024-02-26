// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralLevelUtilityMaker/Public/PLUMBuildingBlocksData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePLUMBuildingBlocksData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	PROCEDURALLEVELUTILITYMAKER_API UClass* Z_Construct_UClass_UPLUMBuildingBlocksData();
	PROCEDURALLEVELUTILITYMAKER_API UClass* Z_Construct_UClass_UPLUMBuildingBlocksData_NoRegister();
	PROCEDURALLEVELUTILITYMAKER_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingBlockData();
	UPackage* Z_Construct_UPackage__Script_ProceduralLevelUtilityMaker();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildingBlockData;
class UScriptStruct* FBuildingBlockData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildingBlockData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildingBlockData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildingBlockData, Z_Construct_UPackage__Script_ProceduralLevelUtilityMaker(), TEXT("BuildingBlockData"));
	}
	return Z_Registration_Info_UScriptStruct_BuildingBlockData.OuterSingleton;
}
template<> PROCEDURALLEVELUTILITYMAKER_API UScriptStruct* StaticStruct<FBuildingBlockData>()
{
	return FBuildingBlockData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBuildingBlockData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingBlockData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PLUMBuildingBlocksData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildingBlockData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildingBlockData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingBlockData_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/PLUMBuildingBlocksData.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FBuildingBlockData_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildingBlockData, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingBlockData_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingBlockData_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingBlockData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Name" },
		{ "ModuleRelativePath", "Public/PLUMBuildingBlocksData.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FBuildingBlockData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildingBlockData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingBlockData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingBlockData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingBlockData_Statics::NewProp_MeshSize_MetaData[] = {
		{ "Category", "Name" },
		{ "ModuleRelativePath", "Public/PLUMBuildingBlocksData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildingBlockData_Statics::NewProp_MeshSize = { "MeshSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildingBlockData, MeshSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingBlockData_Statics::NewProp_MeshSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingBlockData_Statics::NewProp_MeshSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildingBlockData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingBlockData_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingBlockData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingBlockData_Statics::NewProp_MeshSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildingBlockData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralLevelUtilityMaker,
		nullptr,
		&NewStructOps,
		"BuildingBlockData",
		sizeof(FBuildingBlockData),
		alignof(FBuildingBlockData),
		Z_Construct_UScriptStruct_FBuildingBlockData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingBlockData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildingBlockData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingBlockData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuildingBlockData()
	{
		if (!Z_Registration_Info_UScriptStruct_BuildingBlockData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildingBlockData.InnerSingleton, Z_Construct_UScriptStruct_FBuildingBlockData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BuildingBlockData.InnerSingleton;
	}
	void UPLUMBuildingBlocksData::StaticRegisterNativesUPLUMBuildingBlocksData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPLUMBuildingBlocksData);
	UClass* Z_Construct_UClass_UPLUMBuildingBlocksData_NoRegister()
	{
		return UPLUMBuildingBlocksData::StaticClass();
	}
	struct Z_Construct_UClass_UPLUMBuildingBlocksData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloorMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WallMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CeilingMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CeilingMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoorMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralLevelUtilityMaker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PLUMBuildingBlocksData.h" },
		{ "ModuleRelativePath", "Public/PLUMBuildingBlocksData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_FloorMesh_MetaData[] = {
		{ "Category", "Building Blocks" },
		{ "ModuleRelativePath", "Public/PLUMBuildingBlocksData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_FloorMesh = { "FloorMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPLUMBuildingBlocksData, FloorMesh), Z_Construct_UScriptStruct_FBuildingBlockData, METADATA_PARAMS(Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_FloorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_FloorMesh_MetaData)) }; // 1713120431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_WallMesh_MetaData[] = {
		{ "Category", "Building Blocks" },
		{ "ModuleRelativePath", "Public/PLUMBuildingBlocksData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_WallMesh = { "WallMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPLUMBuildingBlocksData, WallMesh), Z_Construct_UScriptStruct_FBuildingBlockData, METADATA_PARAMS(Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_WallMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_WallMesh_MetaData)) }; // 1713120431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_CeilingMesh_MetaData[] = {
		{ "Category", "Building Blocks" },
		{ "ModuleRelativePath", "Public/PLUMBuildingBlocksData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_CeilingMesh = { "CeilingMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPLUMBuildingBlocksData, CeilingMesh), Z_Construct_UScriptStruct_FBuildingBlockData, METADATA_PARAMS(Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_CeilingMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_CeilingMesh_MetaData)) }; // 1713120431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_DoorMesh_MetaData[] = {
		{ "Category", "Building Blocks" },
		{ "ModuleRelativePath", "Public/PLUMBuildingBlocksData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPLUMBuildingBlocksData, DoorMesh), Z_Construct_UScriptStruct_FBuildingBlockData, METADATA_PARAMS(Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_DoorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_DoorMesh_MetaData)) }; // 1713120431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_FloorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_WallMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_CeilingMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::NewProp_DoorMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPLUMBuildingBlocksData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::ClassParams = {
		&UPLUMBuildingBlocksData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPLUMBuildingBlocksData()
	{
		if (!Z_Registration_Info_UClass_UPLUMBuildingBlocksData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPLUMBuildingBlocksData.OuterSingleton, Z_Construct_UClass_UPLUMBuildingBlocksData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPLUMBuildingBlocksData.OuterSingleton;
	}
	template<> PROCEDURALLEVELUTILITYMAKER_API UClass* StaticClass<UPLUMBuildingBlocksData>()
	{
		return UPLUMBuildingBlocksData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPLUMBuildingBlocksData);
	UPLUMBuildingBlocksData::~UPLUMBuildingBlocksData() {}
	struct Z_CompiledInDeferFile_FID_ADBLinkGameStudios_DemoGame_Demomakers_demoexe_Plugins_ProceduralLevelUtilityMaker_Source_ProceduralLevelUtilityMaker_Public_PLUMBuildingBlocksData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ADBLinkGameStudios_DemoGame_Demomakers_demoexe_Plugins_ProceduralLevelUtilityMaker_Source_ProceduralLevelUtilityMaker_Public_PLUMBuildingBlocksData_h_Statics::ScriptStructInfo[] = {
		{ FBuildingBlockData::StaticStruct, Z_Construct_UScriptStruct_FBuildingBlockData_Statics::NewStructOps, TEXT("BuildingBlockData"), &Z_Registration_Info_UScriptStruct_BuildingBlockData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildingBlockData), 1713120431U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ADBLinkGameStudios_DemoGame_Demomakers_demoexe_Plugins_ProceduralLevelUtilityMaker_Source_ProceduralLevelUtilityMaker_Public_PLUMBuildingBlocksData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPLUMBuildingBlocksData, UPLUMBuildingBlocksData::StaticClass, TEXT("UPLUMBuildingBlocksData"), &Z_Registration_Info_UClass_UPLUMBuildingBlocksData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPLUMBuildingBlocksData), 1920717949U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ADBLinkGameStudios_DemoGame_Demomakers_demoexe_Plugins_ProceduralLevelUtilityMaker_Source_ProceduralLevelUtilityMaker_Public_PLUMBuildingBlocksData_h_79603815(TEXT("/Script/ProceduralLevelUtilityMaker"),
		Z_CompiledInDeferFile_FID_ADBLinkGameStudios_DemoGame_Demomakers_demoexe_Plugins_ProceduralLevelUtilityMaker_Source_ProceduralLevelUtilityMaker_Public_PLUMBuildingBlocksData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ADBLinkGameStudios_DemoGame_Demomakers_demoexe_Plugins_ProceduralLevelUtilityMaker_Source_ProceduralLevelUtilityMaker_Public_PLUMBuildingBlocksData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ADBLinkGameStudios_DemoGame_Demomakers_demoexe_Plugins_ProceduralLevelUtilityMaker_Source_ProceduralLevelUtilityMaker_Public_PLUMBuildingBlocksData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ADBLinkGameStudios_DemoGame_Demomakers_demoexe_Plugins_ProceduralLevelUtilityMaker_Source_ProceduralLevelUtilityMaker_Public_PLUMBuildingBlocksData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
