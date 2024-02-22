// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PLUMBuildingBlocksData.generated.h"

USTRUCT(BlueprintType)
struct FBuildingBlockData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Mesh")
	TSoftObjectPtr<UStaticMesh> Mesh;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Name")
	FText Name;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Name")
	FVector MeshSize;
};

/**
 * 
 */
UCLASS(BlueprintType)
class PROCEDURALLEVELUTILITYMAKER_API UPLUMBuildingBlocksData : public UDataAsset
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Building Blocks")
	FBuildingBlockData FloorMesh;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Building Blocks")
	FBuildingBlockData WallMesh;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Building Blocks")
	FBuildingBlockData CeilingMesh;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Building Blocks")
	FBuildingBlockData DoorMesh;

};
