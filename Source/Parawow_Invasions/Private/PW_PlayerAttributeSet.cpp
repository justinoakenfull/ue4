// Fill out your copyright notice in the Description page of Project Settings.


#include "PW_PlayerAttributeSet.h"
#include "Net/UnrealNetwork.h"

UPW_PlayerAttributeSet::UPW_PlayerAttributeSet()
{

}

void UPW_PlayerAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, BaseHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, CurrHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, BaseMana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, CurrMana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, BaseArmor, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, ArmorMod, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, CurrArmor, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, Intellect, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, BaseIntellect, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, CurrIntellect, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, Agility, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, BaseAgility, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, CurrAgility, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, Vitality, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, BaseVitality, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, CurrVitality, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, HealthPer5, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, ManaPer5, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, BaseBasicDamage, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, BasicDamageMod, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, CurrBasicDamage, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, BaseAbilityDamage, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, AbilityDamageMod, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, CurrAbilityDamage, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, BaseCriticalStrikeChance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, CriticalStrikeChanceMod, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, CurrCriticalStrikeChance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, MovementSpeedMod, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, CooldownMod, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, BaseAttackSpeed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, AttackSpeedMod, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, CurrAttackSpeed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, CharacterLevel, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, CurrXP, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, Gold, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, AbilityPoints, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, CurrAbilityPoints, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, MaxAbilityPoints, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, CharacterPoints, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, CurrCharacterPoints, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, MaxCharacterPoints, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPW_PlayerAttributeSet, Damage, COND_None, REPNOTIFY_Always);
}

void UPW_PlayerAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, Health, OldHealth);
}

void UPW_PlayerAttributeSet::OnRep_BaseHealth(const FGameplayAttributeData& OldBaseHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, BaseHealth, OldBaseHealth);
}

void UPW_PlayerAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, MaxHealth, OldMaxHealth);
}

void UPW_PlayerAttributeSet::OnRep_CurrHealth(const FGameplayAttributeData& OldCurrHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, CurrHealth, OldCurrHealth);
}

void UPW_PlayerAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, Mana, OldMana);
}

void UPW_PlayerAttributeSet::OnRep_BaseMana(const FGameplayAttributeData& OldBaseMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, BaseMana, OldBaseMana);
}

void UPW_PlayerAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, MaxMana, OldMaxMana);
}

void UPW_PlayerAttributeSet::OnRep_CurrMana(const FGameplayAttributeData& OldCurrMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, CurrMana, OldCurrMana);
}

void UPW_PlayerAttributeSet::OnRep_BaseArmor(const FGameplayAttributeData& OldBaseArmor)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, BaseArmor, OldBaseArmor);
}

void UPW_PlayerAttributeSet::OnRep_ArmorMod(const FGameplayAttributeData& OldArmorMod)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, ArmorMod, OldArmorMod);
}

void UPW_PlayerAttributeSet::OnRep_CurrArmor(const FGameplayAttributeData& OldCurrArmor)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, CurrArmor, OldCurrArmor);
}

void UPW_PlayerAttributeSet::OnRep_Intellect(const FGameplayAttributeData& OldIntellect)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, Intellect, OldIntellect);
}

void UPW_PlayerAttributeSet::OnRep_BaseIntellect(const FGameplayAttributeData& OldBaseIntellect)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, BaseIntellect, OldBaseIntellect);
}

void UPW_PlayerAttributeSet::OnRep_CurrIntellect(const FGameplayAttributeData& OldCurrIntellect)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, CurrIntellect, OldCurrIntellect);
}

void UPW_PlayerAttributeSet::OnRep_Agility(const FGameplayAttributeData& OldAgility)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, Agility, OldAgility);
}

void UPW_PlayerAttributeSet::OnRep_BaseAgility(const FGameplayAttributeData& OldBaseAgility)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, BaseAgility, OldBaseAgility);
}

void UPW_PlayerAttributeSet::OnRep_CurrAgility(const FGameplayAttributeData& OldCurrAgility)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, CurrAgility, OldCurrAgility);
}

void UPW_PlayerAttributeSet::OnRep_Vitality(const FGameplayAttributeData& OldVitality)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, Vitality, OldVitality);
}

void UPW_PlayerAttributeSet::OnRep_BaseVitality(const FGameplayAttributeData& OldBaseVitality)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, BaseVitality, OldBaseVitality);
}

void UPW_PlayerAttributeSet::OnRep_CurrVitality(const FGameplayAttributeData& OldCurrVitality)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, CurrVitality, OldCurrVitality);
}

void UPW_PlayerAttributeSet::OnRep_HealthPer5(const FGameplayAttributeData& OldHealthPer5)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, HealthPer5, OldHealthPer5);
}

void UPW_PlayerAttributeSet::OnRep_ManaPer5(const FGameplayAttributeData& OldManaPer5)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, ManaPer5, OldManaPer5);
}

void UPW_PlayerAttributeSet::OnRep_BaseBasicDamage(const FGameplayAttributeData& OldBaseBasicDamage)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, BaseBasicDamage, OldBaseBasicDamage);
}

void UPW_PlayerAttributeSet::OnRep_BasicDamageMod(const FGameplayAttributeData& OldBasicDamageMod)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, BasicDamageMod, OldBasicDamageMod);
}

void UPW_PlayerAttributeSet::OnRep_CurrBasicDamage(const FGameplayAttributeData& OldCurrBasicDamage)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, CurrBasicDamage, OldCurrBasicDamage);
}

void UPW_PlayerAttributeSet::OnRep_BaseAbilityDamage(const FGameplayAttributeData& OldBaseAbilityDamage)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, BaseAbilityDamage, OldBaseAbilityDamage);
}

void UPW_PlayerAttributeSet::OnRep_AbilityDamageMod(const FGameplayAttributeData& OldAbilityDamageMod)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, AbilityDamageMod, OldAbilityDamageMod);
}

void UPW_PlayerAttributeSet::OnRep_CurrAbilityDamage(const FGameplayAttributeData& OldCurrAbilityDamage)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, CurrAbilityDamage, OldCurrAbilityDamage);
}

void UPW_PlayerAttributeSet::OnRep_BaseCriticalStrikeChance(const FGameplayAttributeData& OldBaseCriticalStrikeChance)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, BaseCriticalStrikeChance, OldBaseCriticalStrikeChance);
}

void UPW_PlayerAttributeSet::OnRep_CriticalStrikeChanceMod(const FGameplayAttributeData& OldCriticalStrikeChanceMod)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, CriticalStrikeChanceMod, OldCriticalStrikeChanceMod);
}

void UPW_PlayerAttributeSet::OnRep_CurrCriticalStrikeChance(const FGameplayAttributeData& OldCurrCriticalStrikeChance)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, CurrCriticalStrikeChance, OldCurrCriticalStrikeChance);
}

void UPW_PlayerAttributeSet::OnRep_MovementSpeedMod(const FGameplayAttributeData& OldMovementSpeedMod)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, MovementSpeedMod, OldMovementSpeedMod);
}

void UPW_PlayerAttributeSet::OnRep_CooldownMod(const FGameplayAttributeData& OldCooldownMod)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, CooldownMod, OldCooldownMod);
}

void UPW_PlayerAttributeSet::OnRep_BaseAttackSpeed(const FGameplayAttributeData& OldBaseAttackSpeed)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, BaseAttackSpeed, OldBaseAttackSpeed);
}

void UPW_PlayerAttributeSet::OnRep_AttackSpeedMod(const FGameplayAttributeData& OldAttackSpeedMod)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, AttackSpeedMod, OldAttackSpeedMod);
}

void UPW_PlayerAttributeSet::OnRep_CurrAttackSpeed(const FGameplayAttributeData& OldCurrAttackSpeed)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, CurrAttackSpeed, OldCurrAttackSpeed);
}

void UPW_PlayerAttributeSet::OnRep_CharacterLevel(const FGameplayAttributeData& OldCharacterLevel)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, CharacterLevel, OldCharacterLevel);
}

void UPW_PlayerAttributeSet::OnRep_CurrXP(const FGameplayAttributeData& OldCurrXP)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, CurrXP, OldCurrXP);
}

void UPW_PlayerAttributeSet::OnRep_MaxXPtoLevelUp(const FGameplayAttributeData& OldMaxXPtoLevelUp)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, MaxXPtoLevelUp, OldMaxXPtoLevelUp);
}

void UPW_PlayerAttributeSet::OnRep_Gold(const FGameplayAttributeData& OldGold)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, Gold, OldGold);
}

void UPW_PlayerAttributeSet::OnRep_AbilityPoints(const FGameplayAttributeData& OldAbilityPoints)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, AbilityPoints, OldAbilityPoints);
}

void UPW_PlayerAttributeSet::OnRep_CurrAbilityPoints(const FGameplayAttributeData& OldCurrAbilityPoints)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, CurrAbilityPoints, OldCurrAbilityPoints);
}

void UPW_PlayerAttributeSet::OnRep_MaxAbilityPoints(const FGameplayAttributeData& OldMaxAbilityPoints)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, MaxAbilityPoints, OldMaxAbilityPoints);
}

void UPW_PlayerAttributeSet::OnRep_CharacterPoints(const FGameplayAttributeData& OldCharacterPoints)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, CharacterPoints, OldCharacterPoints);
}

void UPW_PlayerAttributeSet::OnRep_CurrCharacterPoints(const FGameplayAttributeData& OldCurrCharacterPoints)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, CurrCharacterPoints, OldCurrCharacterPoints);
}

void UPW_PlayerAttributeSet::OnRep_MaxCharacterPoints(const FGameplayAttributeData& OldMaxCharacterPoints)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, MaxCharacterPoints, OldMaxCharacterPoints);
}

void UPW_PlayerAttributeSet::OnRep_Damage(const FGameplayAttributeData& OldDamage)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPW_PlayerAttributeSet, Damage, OldDamage);
}
