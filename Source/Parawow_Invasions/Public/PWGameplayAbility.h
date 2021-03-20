// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "../Parawow_Invasions.h"
#include "PWGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class PARAWOW_INVASIONS_API UPWGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:

	UPWGameplayAbility();

	// Abilities with this set will automatically activate when the input is pressed
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	EPWAbilityInputID AbilityInputID = EPWAbilityInputID::None;
};
