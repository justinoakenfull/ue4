// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "PWPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class PARAWOW_INVASIONS_API APWPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	

public:

	APWPlayerState();

	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	class UPW_PlayerAttributeSet* GetAttributeSet() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | PWPlayerState")
	bool IsAlive() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetBaseHeath() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetCurrHealth() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetMana() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetMaxMana() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetBaseMana() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetCurrMana() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetBaseArmor() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetArmorMod() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetCurrArmor() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetIntellect() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetBaseIntellect() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetCurrIntellect() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetAgility() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetBaseAgility() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetCurrAgility() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetVitality() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetBaseVitality() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetCurrVitality() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetHealthPer5() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetManaPer5() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetBaseBasicDamage() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetBasicDamageMod() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetCurrBasicDamage() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetBaseAbilityDamage() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetAbilityDamageMod() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetCurrAbilityDamage() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetBaseCriticalStrikeChance() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetCriticalStrikeChanceMod() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetCurrCriticalStrikeChance() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetMovementSpeedMod() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetCooldownMod() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetBaseAttackSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetAttackSpeedMod() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetCurrAttackSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetCharacterLevel() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetCurrXP() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetGold() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetAbilityPoints() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetMaxAbilityPoints() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetCharacterPoints() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetCurrCharacterPoints() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetMaxCharacterPoints() const;

	UFUNCTION(BlueprintCallable, Category = "ParaWow | GSPlayerState | Attributes")
	float GetDamage() const;


protected:

	UPROPERTY()
	class UPWAbilitySystemComponent* AbilitySystemComponent;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	class UPW_PlayerAttributeSet* AttributeSet;
};
