// Fill out your copyright notice in the Description page of Project Settings.


#include "PWPlayerState.h"
#include "PW_PlayerAttributeSet.h"
#include "PWAbilitySystemComponent.h"

APWPlayerState::APWPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UPWAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UPW_PlayerAttributeSet>(TEXT("AttributeSet"));
}

UAbilitySystemComponent* APWPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

class UPW_PlayerAttributeSet* APWPlayerState::GetAttributeSet() const
{
	return AttributeSet;
}

bool APWPlayerState::IsAlive() const
{
	return GetHealth() > 0.0f;
}

float APWPlayerState::GetHealth() const
{
	return AttributeSet->Health();
}

float APWPlayerState::GetBaseHeath() const
{
	return AttributeSet->BaseHealth();
}

float APWPlayerState::GetMaxHealth() const
{
	return AttributeSet->MaxHealth();
}

float APWPlayerState::GetCurrHealth() const
{
	return AttributeSet->CurrHealth();
}

float APWPlayerState::GetMana() const
{
	return AttributeSet->Mana();
}

float APWPlayerState::GetMaxMana() const
{
	return AttributeSet->MaxMana();
}

float APWPlayerState::GetBaseMana() const
{
	return AttributeSet->BaseMana();
}

float APWPlayerState::GetCurrMana() const
{
	return AttributeSet->CurrMana();
}

float APWPlayerState::GetBaseArmor() const
{
	return AttributeSet->BaseArmor();
}

float APWPlayerState::GetArmorMod() const
{
	return AttributeSet->ArmorMod();
}

float APWPlayerState::GetCurrArmor() const
{
	return AttributeSet->CurrArmor();
}

float APWPlayerState::GetIntellect() const
{
	return AttributeSet->Intellect();
}

float APWPlayerState::GetBaseIntellect() const
{
	return AttributeSet->BaseIntellect();
}

float APWPlayerState::GetCurrIntellect() const
{
	return AttributeSet->CurrIntellect();
}

float APWPlayerState::GetAgility() const
{
	return AttributeSet->Agility();
}

float APWPlayerState::GetBaseAgility() const
{
	return AttributeSet->BaseAgility();
}

float APWPlayerState::GetCurrAgility() const
{
	return AttributeSet->CurrAgility();
}

float APWPlayerState::GetVitality() const
{
	return AttributeSet->Vitality();
}

float APWPlayerState::GetBaseVitality() const
{
	return AttributeSet->BaseVitality();
}

float APWPlayerState::GetCurrVitality() const
{
	return AttributeSet->CurrVitality();
}

float APWPlayerState::GetHealthPer5() const
{
	return AttributeSet->HealthPer5();
}

float APWPlayerState::GetManaPer5() const
{
	return AttributeSet->ManaPer5();
}

float APWPlayerState::GetBaseBasicDamage() const
{
	return AttributeSet->BaseBasicDamage();
}

float APWPlayerState::GetBasicDamageMod() const
{
	return AttributeSet->BasicDamageMod();
}

float APWPlayerState::GetCurrBasicDamage() const
{
	return AttributeSet->CurrBasicDamage();
}

float APWPlayerState::GetBaseAbilityDamage() const
{
	return AttributeSet->BaseAbilityDamage();
}

float APWPlayerState::GetAbilityDamageMod() const
{
	return AttributeSet->AbilityDamageMod();
}

float APWPlayerState::GetCurrAbilityDamage() const
{
	return AttributeSet->CurrAbilityDamage();
}

float APWPlayerState::GetBaseCriticalStrikeChance() const
{
	return AttributeSet->BaseCriticalStrikeChance();
}

float APWPlayerState::GetCriticalStrikeChanceMod() const
{
	return AttributeSet->CriticalStrikeChanceMod();
}

float APWPlayerState::GetCurrCriticalStrikeChance() const
{
	return AttributeSet->CurrCriticalStrikeChance();
}

float APWPlayerState::GetMovementSpeedMod() const
{
	return AttributeSet->MovementSpeedMod();
}

float APWPlayerState::GetCooldownMod() const
{
	return AttributeSet->CooldownMod();
}

float APWPlayerState::GetBaseAttackSpeed() const
{
	return AttributeSet->BaseAttackSpeed();
}

float APWPlayerState::GetAttackSpeedMod() const
{
	return AttributeSet->AttackSpeedMod();
}

float APWPlayerState::GetCurrAttackSpeed() const
{
	return AttributeSet->CurrAttackSpeed();
}

float APWPlayerState::GetCharacterLevel() const
{
	return AttributeSet->CharacterLevel();
}

float APWPlayerState::GetCurrXP() const
{
	return AttributeSet->CurrXP();
}

float APWPlayerState::GetGold() const
{
	return AttributeSet->Gold();
}

float APWPlayerState::GetAbilityPoints() const
{
	return AttributeSet->AbilityPoints();
}

float APWPlayerState::GetMaxAbilityPoints() const
{
	return AttributeSet->MaxAbilityPoints();
}

float APWPlayerState::GetCharacterPoints() const
{
	return AttributeSet->CharacterPoints();
}

float APWPlayerState::GetCurrCharacterPoints() const
{
	return AttributeSet->CurrCharacterPoints();
}

float APWPlayerState::GetMaxCharacterPoints() const
{
	return AttributeSet->MaxCharacterPoints();
}

float APWPlayerState::GetDamage() const
{
	return AttributeSet->Damage();
}
