// Fill out your copyright notice in the Description page of Project Settings.


#include "BGASActionComponent.h"

#include "BGASAction.h"


// Sets default values for this component's properties
UBGASActionComponent::UBGASActionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UBGASActionComponent::AddAction(AActor* Instigator, TSubclassOf<UBGASAction> ActionClass)
{
	if(!ensure (ActionClass))
	{
		return;	
	}

	UBGASAction* NewAction = NewObject<UBGASAction>(this, ActionClass);
	if(ensure (NewAction))
	{
		Actions.Add(NewAction);

		if ( NewAction->bAutoStart && ensure( NewAction->CanStart(Instigator) ) )
		{
			NewAction->StartAction(Instigator);
		}
	}
}

void UBGASActionComponent::RemoveAction(UBGASAction* Action)
{
	if(!ensure (Action && !Action->GetIsRunning()) )
	{
		return;
	}
	
	Actions.Remove(Action);
}

bool UBGASActionComponent::StartActionByName(AActor* Instigator, FName ActionName)
{
	for (UBGASAction* Action : Actions)
	{
		if(Action->ActionName == ActionName)
		{
			if(!Action->CanStart(Instigator))
			{
				if (GEngine)
				{
					FString FailedMsg = "Failed to start: " + ActionName.ToString();
					GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, FailedMsg);
				}
				continue;
			}
			Action->StartAction(Instigator);
			return true;
		}
	}
	
	return false;
}

bool UBGASActionComponent::StopActionByName(AActor* Instigator, FName ActionName)
{
	for (UBGASAction* Action : Actions)
	{
		if(Action->ActionName == ActionName)
		{
			if(Action->GetIsRunning())
			{
				Action->StopAction(Instigator);
				return true;
			}
		}
	}

	return false;
}


// Called when the game starts
void UBGASActionComponent::BeginPlay()
{
	Super::BeginPlay();

	for (TSubclassOf<UBGASAction> ActionClass : DefaultActions)
	{
		AddAction(GetOwner(), ActionClass);
	}
}


// Called every frame
void UBGASActionComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                         FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(GEngine)
	{
		FString DebugMsg = GetNameSafe(GetOwner()) + " : " + ActiveGameplayTags.ToStringSimple();
		GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::White, DebugMsg);
	}
	// ...
}

