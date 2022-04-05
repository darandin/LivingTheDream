// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "LTDAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class LIVINGTHEDREAM_API ULTDAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:

	ULTDAttributeSet();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Energy Attribute
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Energy)
	FGameplayAttributeData Energy;
	ATTRIBUTE_ACCESSORS(ULTDAttributeSet, Energy);

	UFUNCTION()
	virtual void OnRep_Energy(const FGameplayAttributeData& OldEnergy);

	// Rest Attribute
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Rest)
		FGameplayAttributeData Rest;
	ATTRIBUTE_ACCESSORS(ULTDAttributeSet, Rest);

	UFUNCTION()
		virtual void OnRep_Rest(const FGameplayAttributeData& OldRest);

	// Stress Attribute
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Stress)
		FGameplayAttributeData Stress;
	ATTRIBUTE_ACCESSORS(ULTDAttributeSet, Stress);

	UFUNCTION()
		virtual void OnRep_Stress(const FGameplayAttributeData& OldStress);

	// Money Attribute
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Money)
		FGameplayAttributeData Money;
	ATTRIBUTE_ACCESSORS(ULTDAttributeSet, Money);

	UFUNCTION()
		virtual void OnRep_Money(const FGameplayAttributeData& OldMoney);
};
