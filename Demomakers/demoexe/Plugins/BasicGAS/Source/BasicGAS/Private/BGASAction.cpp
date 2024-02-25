// Fill out your copyright notice in the Description page of Project Settings.


#include "BGASAction.h"

#include "BGASActionComponent.h"

void UBGASAction::StopAction(AActor* Instigator)
{
	UE_LOG(LogTemp, Log, TEXT("Stopped: %s"), *GetNameSafe(this));

	ensureAlways(bIsRunning);
	
	GetActionComponent()->ActiveGameplayTags.RemoveTags(GrantedTags);
	bIsRunning = false;
	OnStopAction(Instigator);
}

bool UBGASAction::CanStart_Implementation(AActor* Instigator)
{
	if(GetIsRunning())
	{
		return false;
	}
	
	UBGASActionComponent* Comp = GetActionComponent();
	if(Comp)
	{
		if(Comp->ActiveGameplayTags.HasAny(BlockedTags))
		{
			return false;
		}
	}

	return true;
}

void UBGASAction::StartAction(AActor* Instigator)
{
	UE_LOG(LogTemp, Log, TEXT("Running: %s"), *GetNameSafe(this));

	// Add granted tags to owning actor component
	GetActionComponent()->ActiveGameplayTags.AppendTags(GrantedTags);
	bIsRunning = true;
	OnStartAction(Instigator);
}

void UBGASAction::OnStartAction_Implementation(AActor* Instigator)
{
}

void UBGASAction::OnStopAction_Implementation(AActor* Instigator)
{
}

UWorld* UBGASAction::GetWorld() const
{
	UActorComponent* Comp = Cast<UActorComponent>(GetOuter());
	if(Comp)
	{
		return Comp->GetWorld();
	}
	
	return nullptr;
}

UBGASActionComponent* UBGASAction::GetActionComponent() const
{
	return Cast<UBGASActionComponent>(GetOuter());
}
