// Fill out your copyright notice in the Description page of Project Settings.


#include "BGASActionEffect.h"

#include "BGASActionComponent.h"

UBGASActionEffect::UBGASActionEffect()
{
	bAutoStart = true;
}

void UBGASActionEffect::StartAction(AActor* Instigator)
{
	Super::StartAction(Instigator);

	if (Duration > 0)
	{
		FTimerDelegate Delegate;
		Delegate.BindUFunction(this, "StopAction");
		GetWorld()->GetTimerManager().SetTimer(DurationHandle, Delegate, Duration, false);
	}
	if (Period > 0)
	{
		FTimerDelegate Delegate;
		Delegate.BindUFunction(this, "ExecutePeriodEffect");
		GetWorld()->GetTimerManager().SetTimer(PeriodHandle, Delegate, Period, true);
	}
}

void UBGASActionEffect::StopAction(AActor* Instigator)
{
	if(GetWorld()->GetTimerManager().GetTimerRemaining(PeriodHandle) < KINDA_SMALL_NUMBER)
	{
		ExecutePeriodEffect(Instigator);
	}
	
	Super::StopAction(Instigator);
	
	GetWorld()->GetTimerManager().ClearTimer(DurationHandle);
	GetWorld()->GetTimerManager().ClearTimer(PeriodHandle);

	UBGASActionComponent* Comp = GetActionComponent();
	if (Comp)
	{
		Comp->RemoveAction(this);
	}
}

void UBGASActionEffect::ExecutePeriodEffect_Implementation(AActor* Instigator)
{

}
