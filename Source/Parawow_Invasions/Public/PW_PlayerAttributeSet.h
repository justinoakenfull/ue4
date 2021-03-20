// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "PW_PlayerAttributeSet.generated.h"

// Uses macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class PARAWOW_INVASIONS_API UPW_PlayerAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UPW_PlayerAttributeSet();
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Health from items, gems, character points, buffs/debuffs + BaseHealth (Current Health)
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Health", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, Health);

	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);

	// Sets a minimum health increasing with each level
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Health", ReplicatedUsing = OnRep_BaseHealth)
	FGameplayAttributeData BaseHealth;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, BaseHealth);

	UFUNCTION()
	virtual void OnRep_BaseHealth(const FGameplayAttributeData& OldBaseHealth);

	// Max health = BaseHealth + Health - For UI
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Health", ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, MaxHealth);

	UFUNCTION()
	virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);

	// Current Health
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Health", ReplicatedUsing = OnRep_CurrHealth)
	FGameplayAttributeData CurrHealth;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, CurrHealth);

	UFUNCTION()
	virtual void OnRep_CurrHealth(const FGameplayAttributeData& OldCurrHealth);

	// Extra Mana from items, gems, character points and buffs/debuffs
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Mana", ReplicatedUsing = OnRep_Mana)
	FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, Mana);

	UFUNCTION()
	virtual void OnRep_Mana(const FGameplayAttributeData& OldMana);

	// BaseMana - Minimum mana set by character level
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Mana", ReplicatedUsing = OnRep_BaseMana)
	FGameplayAttributeData BaseMana;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, BaseMana);

	UFUNCTION()
	virtual void OnRep_BaseMana(const FGameplayAttributeData& OldBaseMana);

	// MaxMana = BaseMana + Mana - For UI
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Mana", ReplicatedUsing = OnRep_MaxMana)
	FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, MaxMana);

	UFUNCTION()
	virtual void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana);

	// Current Mana
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Mana", ReplicatedUsing = OnRep_CurrMana)
	FGameplayAttributeData CurrMana;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, CurrMana);

	UFUNCTION()
	virtual void OnRep_CurrMana(const FGameplayAttributeData& OldCurrMana);

	// BaseArmor - Minimum armor set by class and level - reduces incoming damage (ability and basic)
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Armor", ReplicatedUsing = OnRep_BaseArmor)
	FGameplayAttributeData BaseArmor;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, BaseArmor);

	UFUNCTION()
	virtual void OnRep_BaseArmor(const FGameplayAttributeData& OldBaseArmor);

	// ArmorMod - Armor gained from items, gems, buffs/debuffs and Vitality
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Armor", ReplicatedUsing = OnRep_ArmorMod)
	FGameplayAttributeData ArmorMod;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, ArmorMod);

	UFUNCTION()
	virtual void OnRep_ArmorMod(const FGameplayAttributeData& OldArmorMod);

	// CurrArmor - Base + Mod
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Armor", ReplicatedUsing = OnRep_CurrArmor)
	FGameplayAttributeData CurrArmor;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, CurrArmor);

	UFUNCTION()
	virtual void OnRep_CurrArmor(const FGameplayAttributeData& OldCurrArmor);

	// Intellect - Increases mana pool, mana per 5, ability and physical damage, Intellect gained from items, gems, buffs/debuffs and character points
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Intellect", ReplicatedUsing = OnRep_Intellect)
	FGameplayAttributeData Intellect;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, Intellect);

	UFUNCTION()
	virtual void OnRep_Intellect(const FGameplayAttributeData& OldIntellect);

	// BaseIntellect - Intellect set by class and level
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Intellect", ReplicatedUsing = OnRep_BaseIntellect)
	FGameplayAttributeData BaseIntellect;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, BaseIntellect);

	UFUNCTION()
	virtual void OnRep_BaseIntellect(const FGameplayAttributeData& OldBaseIntellect);

	// CurrIntellect - base + int
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Intellect", ReplicatedUsing = OnRep_CurrIntellect)
	FGameplayAttributeData CurrIntellect;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, CurrIntellect);

	UFUNCTION()
	virtual void OnRep_CurrIntellect(const FGameplayAttributeData& OldCurrIntellect);

	// Agility - Increases movement speed, attack speed, and critical strike chance. Agility gained from items, gems, buffs/debuffs and character points
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Agility", ReplicatedUsing = OnRep_Agility)
	FGameplayAttributeData Agility;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, Agility);

	UFUNCTION()
	virtual void OnRep_Agility(const FGameplayAttributeData& OldAgility);

	// BaseAgility - Set by class and character level
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Agility", ReplicatedUsing = OnRep_BaseAgility)
	FGameplayAttributeData BaseAgility;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, BaseAgility);

	UFUNCTION()
	virtual void OnRep_BaseAgility(const FGameplayAttributeData& OldBaseAgility);

	// CurrAgility - Agility + base
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Agility", ReplicatedUsing = OnRep_CurrAgility)
	FGameplayAttributeData CurrAgility;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, CurrAgility);

	UFUNCTION()
	virtual void OnRep_CurrAgility(const FGameplayAttributeData& OldCurrAgility);

	// Vitality - Increases Health, Health per 5, Armor. Vitality gained from items, gems, buffs/debuffs and character points
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Vitality", ReplicatedUsing = OnRep_Vitality)
	FGameplayAttributeData Vitality;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, Vitality);

	UFUNCTION()
	virtual void OnRep_Vitality(const FGameplayAttributeData& OldVitality);

	// BaseVitality - Set by class and character level
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Vitality", ReplicatedUsing = OnRep_BaseVitality)
	FGameplayAttributeData BaseVitality;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, BaseVitality);

	UFUNCTION()
	virtual void OnRep_BaseVitality(const FGameplayAttributeData& OldBaseVitality);

	// CurrVitality - Vitality + base
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Vitality", ReplicatedUsing = OnRep_CurrVitality)
	FGameplayAttributeData CurrVitality;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, CurrVitality);

	UFUNCTION()
	virtual void OnRep_CurrVitality(const FGameplayAttributeData& OldCurrVitality);

	// Health Per 5 seconds - "Regen" Adds health every 5 seconds HealthPer5
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Health", ReplicatedUsing = OnRep_HealthPer5)
	FGameplayAttributeData HealthPer5;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, HealthPer5);

	UFUNCTION()
	virtual void OnRep_HealthPer5(const FGameplayAttributeData& OldHealthPer5);

	// Mana Per 5 seconds - "Regen" Adds health every 5 seconds ManaPer5
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Health", ReplicatedUsing = OnRep_ManaPer5)
	FGameplayAttributeData ManaPer5;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, ManaPer5);

	UFUNCTION()
	virtual void OnRep_ManaPer5(const FGameplayAttributeData& OldManaPer5);

	// BaseBasicDamage (Physical)
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Damage", ReplicatedUsing = OnRep_BaseBasicDamage)
	FGameplayAttributeData BaseBasicDamage;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, BaseBasicDamage);

	UFUNCTION()
	virtual void OnRep_BaseBasicDamage(const FGameplayAttributeData& OldBaseBasicDamage);

	// BasicDamageMod - Damage modifier from buffs,debuffs,items,gems and intellect (Physical)
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Damage", ReplicatedUsing = OnRep_BasicDamageMod)
	FGameplayAttributeData BasicDamageMod;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, BasicDamageMod);

	UFUNCTION()
	virtual void OnRep_BasicDamageMod(const FGameplayAttributeData& OldBasicDamageMod);

	// CurrBasicDamage = Mod + Base (Physical)
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Damage", ReplicatedUsing = OnRep_CurrBasicDamage)
	FGameplayAttributeData CurrBasicDamage;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, CurrBasicDamage);

	UFUNCTION()
	virtual void OnRep_CurrBasicDamage(const FGameplayAttributeData& OldCurrBasicDamage);

	// BaseAbilityDamage (Ability)
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Damage", ReplicatedUsing = OnRep_BaseAbilityDamage)
	FGameplayAttributeData BaseAbilityDamage;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, BaseAbilityDamage);

	UFUNCTION()
	virtual void OnRep_BaseAbilityDamage(const FGameplayAttributeData& OldBaseAbilityDamage);

	// AbilityDamageMod - Damage modifier from buffs,debuffs,items,gems and intellect (Ability)
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Damage", ReplicatedUsing = OnRep_AbilityDamageMod)
	FGameplayAttributeData AbilityDamageMod;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, AbilityDamageMod);

	UFUNCTION()
	virtual void OnRep_AbilityDamageMod(const FGameplayAttributeData& OldAbilityDamageMod);

	// CurrAbilityDamage = Mod + Base (Ability)
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Damage", ReplicatedUsing = OnRep_CurrAbilityDamage)
	FGameplayAttributeData CurrAbilityDamage;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, CurrAbilityDamage);

	UFUNCTION()
	virtual void OnRep_CurrAbilityDamage(const FGameplayAttributeData& OldCurrAbilityDamage);

	// BaseCriticalStrikeChance - given by character class and level
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Critical Strike", ReplicatedUsing = OnRep_BaseCriticalStrikeChance)
	FGameplayAttributeData BaseCriticalStrikeChance;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, BaseCriticalStrikeChance);

	UFUNCTION()
	virtual void OnRep_BaseCriticalStrikeChance(const FGameplayAttributeData& OldBaseCriticalStrikeChance);

	// CriticalStrikeChanceMod - Critical strike chance modifier from items,abilities,gems,buffs/debuffs, and Agility 
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Critical Strike", ReplicatedUsing = OnRep_CriticalStrikeChanceMod)
	FGameplayAttributeData CriticalStrikeChanceMod;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, CriticalStrikeChanceMod);

	UFUNCTION()
	virtual void OnRep_CriticalStrikeChanceMod(const FGameplayAttributeData& OldCriticalStrikeChanceMod);

	// CurrCriticalStrikeChance = Base + (CriticalStrikeChanceMod/5) (5 crit for every 1%)
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Critical Strike", ReplicatedUsing = OnRep_CurrCriticalStrikeChance)
	FGameplayAttributeData CurrCriticalStrikeChance;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, CurrCriticalStrikeChance);

	UFUNCTION()
	virtual void OnRep_CurrCriticalStrikeChance(const FGameplayAttributeData& OldCurrCriticalStrikeChance);

	// MovementSpeedMod - Increases or decreases speed by mod% - Speed = (Mod%/100) * DefaultMovementSpeed
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Movement", ReplicatedUsing = OnRep_MovementSpeedMod)
	FGameplayAttributeData MovementSpeedMod;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, MovementSpeedMod);

	UFUNCTION()
	virtual void OnRep_MovementSpeedMod(const FGameplayAttributeData& OldMovementSpeedMod);

	// CooldownMod - Cooldown modifier - Cooldown = (Cooldown/100) * AbilityCooldown
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Cooldown", ReplicatedUsing = OnRep_CooldownMod)
	FGameplayAttributeData CooldownMod;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, CooldownMod);

	UFUNCTION()
	virtual void OnRep_CooldownMod(const FGameplayAttributeData& OldCooldownMod);

	// BaseAttackSpeed - given by character class and level
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Attack Speed", ReplicatedUsing = OnRep_BaseAttackSpeed)
	FGameplayAttributeData BaseAttackSpeed;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, BaseAttackSpeed);

	UFUNCTION()
	virtual void OnRep_BaseAttackSpeed(const FGameplayAttributeData& OldBaseAttackSpeed);

	// AttackSpeedMod - Critical strike chance modifier from items,abilities,gems,buffs/debuffs. 
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Attack Speed", ReplicatedUsing = OnRep_AttackSpeedMod)
	FGameplayAttributeData AttackSpeedMod;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, AttackSpeedMod);

	UFUNCTION()
	virtual void OnRep_AttackSpeedMod(const FGameplayAttributeData& OldAttackSpeedMod);

	// CurrAttackSpeed = Base * (CriticalStrikeChanceMod/100) (5 crit for every 1%)
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Attack Speed", ReplicatedUsing = OnRep_CurrAttackSpeed)
	FGameplayAttributeData CurrAttackSpeed;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, CurrAttackSpeed);

	UFUNCTION()
	virtual void OnRep_CurrAttackSpeed(const FGameplayAttributeData& OldCurrAttackSpeed);

	// Characters Current Level
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - XP/Level", ReplicatedUsing = OnRep_CharacterLevel)
	FGameplayAttributeData CharacterLevel;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, CharacterLevel);

	UFUNCTION()
	virtual void OnRep_CharacterLevel(const FGameplayAttributeData& OldCharacterLevel);

	// Characters Current XP
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - XP/Level", ReplicatedUsing = OnRep_CurrXP)
	FGameplayAttributeData CurrXP;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, CurrXP);

	UFUNCTION()
	virtual void OnRep_CurrXP(const FGameplayAttributeData& OldCurrXP);

	/* MaxXPtoLevelUp = ((8 * CharacterLevel) + Difficulty(CharacterLevel)) * MobXP(CharacterLevel)
	 Difficulty is an extra difficulty factor that starts around level 30 and increases by level.
	 Diff(CharacterLevel) = 0 when CharacterLevel <= 28
	 Diff(CharacterLevel) = 1 when CharacterLevel <= 29
	 Diff(CharacterLevel) = 3 when CharacterLevel <= 30
	 Diff(CharacterLevel) = 6 when CharacterLevel <= 31
	 Diff(CharacterLevel) = 5 * (CharacterLevel - 30) when CharacterLevel >= 32, <= 59

	 MobXP function is the minimum amount of XP a mob will give when killed (assuming mob level == character level)
	 MobXP(CharacterLevel) = 19 + (5 * CharacterLevel)
	 Change "19" to increase or lower XP given on mob kills.
	 */

	UPROPERTY(BlueprintReadOnly, Category = "Attributes - XP/Level", ReplicatedUsing = OnRep_MaxXPtoLevelUp)
	FGameplayAttributeData MaxXPtoLevelUp;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, MaxXPtoLevelUp);

	UFUNCTION()
	virtual void OnRep_MaxXPtoLevelUp(const FGameplayAttributeData& OldMaxXPtoLevelUp);

	// Gold - Current gold, held by the player that isnt in a bank
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Currencies", ReplicatedUsing = OnRep_Gold)
	FGameplayAttributeData Gold;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, Gold);

	UFUNCTION()
	virtual void OnRep_Gold(const FGameplayAttributeData& OldGold);

	// AbilityPoints - Ability points that the player has available to spend on upgrading and ranking up abilities
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Ability Points", ReplicatedUsing = OnRep_AbilityPoints)
	FGameplayAttributeData AbilityPoints;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, AbilityPoints);

	UFUNCTION()
	virtual void OnRep_AbilityPoints(const FGameplayAttributeData& OldAbilityPoints);

	// CurrAbilityPoints - Ability points that the player has already spent on upgrades. If CurrAbilityPoints is < MaxAbilityPoints then player can earn more from level ups
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Ability Points", ReplicatedUsing = OnRep_CurrAbilityPoints)
	FGameplayAttributeData CurrAbilityPoints;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, CurrAbilityPoints);

	UFUNCTION()
	virtual void OnRep_CurrAbilityPoints(const FGameplayAttributeData& OldCurrAbilityPoints);

	// MaxAbilityPoints - Total Number of Ability points the player is able to earn
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Ability Points", ReplicatedUsing = OnRep_MaxAbilityPoints)
	FGameplayAttributeData MaxAbilityPoints;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, MaxAbilityPoints);

	UFUNCTION()
	virtual void OnRep_MaxAbilityPoints(const FGameplayAttributeData& OldMaxAbilityPoints);

	// CharacterPoints - Character points that the player has available to spend on upgrading and ranking up the character
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Character Points", ReplicatedUsing = OnRep_CharacterPoints)
	FGameplayAttributeData CharacterPoints;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, CharacterPoints);

	UFUNCTION()
	virtual void OnRep_CharacterPoints(const FGameplayAttributeData& OldCharacterPoints);

	// CurrCharacterPoints - Character points that the player has already spent on upgrades. If CurrCharacterPoints is < MaxCharacterPoints then player can earn more from level ups
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Character Points", ReplicatedUsing = OnRep_CurrCharacterPoints)
	FGameplayAttributeData CurrCharacterPoints;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, CurrCharacterPoints);

	UFUNCTION()
	virtual void OnRep_CurrCharacterPoints(const FGameplayAttributeData& OldCurrCharacterPoints);

	// MaxCharacterPoints - Total Number of Character points the player is able to earn
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Character Points", ReplicatedUsing = OnRep_MaxCharacterPoints)
	FGameplayAttributeData MaxCharacterPoints;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, MaxCharacterPoints);

	UFUNCTION()
	virtual void OnRep_MaxCharacterPoints(const FGameplayAttributeData& OldMaxCharacterPoints);

	// Damage ??
	UPROPERTY(BlueprintReadOnly, Category = "Attributes - Damage", ReplicatedUsing = OnRep_Damage)
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UPW_PlayerAttributeSet, Damage);

	UFUNCTION()
	virtual void OnRep_Damage(const FGameplayAttributeData& OldDamage);



};
