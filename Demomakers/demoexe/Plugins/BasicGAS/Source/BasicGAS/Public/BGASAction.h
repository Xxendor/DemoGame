// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "BGASAction.generated.h"

class UBGASActionComponent;
/**
 * 
 */
UCLASS(Blueprintable, Abstract)
class BASICGAS_API UBGASAction : public UObject
{
	GENERATED_BODY()

protected:

	/* Tags added to owning actor when activated, remove when actions stops */
	UPROPERTY(EditDefaultsOnly, Category = "Tags")
	FGameplayTagContainer GrantedTags;

	/* Action can only starts if OwningActor has none of these Tags applied */
	UPROPERTY(EditDefaultsOnly, Category = "Tags")
	FGameplayTagContainer BlockedTags;

	bool bIsRunning;

public:

	/* Start immediately when added to action component */
	UPROPERTY(EditDefaultsOnly, Category = "Action")
	bool bAutoStart;

	UFUNCTION(BlueprintCallable, Category = "Action")
	bool GetIsRunning() const { return bIsRunning; }

	UFUNCTION(BlueprintNativeEvent, Category = "Action")
	bool CanStart(AActor* Instigator);

	virtual void StartAction(AActor* Instigator);

	UFUNCTION(BlueprintCallable, Category = "Action")
	virtual void StopAction(AActor* Instigator);

	UFUNCTION(BlueprintNativeEvent, Category = "Action")
	void OnStartAction(AActor* Instigator);

	UFUNCTION(BlueprintNativeEvent, Category = "Action")
	void OnStopAction(AActor* Instigator);

	UPROPERTY(EditDefaultsOnly, Category = "Action")
	FName ActionName;

	UFUNCTION(BlueprintPure, Category = "Action")
	UWorld* GetWorld() const override;

	UFUNCTION(BlueprintPure, Category = "Action")
	UBGASActionComponent* GetActionComponent() const;
};
