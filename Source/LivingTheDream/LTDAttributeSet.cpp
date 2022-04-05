// Fill out your copyright notice in the Description page of Project Settings.


#include "LTDAttributeSet.h"
#include "Net/UnrealNetwork.h"

ULTDAttributeSet::ULTDAttributeSet()
{
}

void ULTDAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(ULTDAttributeSet, Energy, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ULTDAttributeSet, Rest, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ULTDAttributeSet, Stress, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ULTDAttributeSet, Money, COND_None, REPNOTIFY_Always);
}

void ULTDAttributeSet::OnRep_Energy(const FGameplayAttributeData & OldEnergy)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ULTDAttributeSet, Energy, OldEnergy);
}

void ULTDAttributeSet::OnRep_Rest(const FGameplayAttributeData & OldRest)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ULTDAttributeSet, Rest, OldRest);
}

void ULTDAttributeSet::OnRep_Stress(const FGameplayAttributeData & OldStress)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ULTDAttributeSet, Stress, OldStress);
}

void ULTDAttributeSet::OnRep_Money(const FGameplayAttributeData & OldMoney)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ULTDAttributeSet, Money, OldMoney);
}
