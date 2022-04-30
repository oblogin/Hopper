// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Attributes/HopperAttributeSet.h"

#include "Net/UnrealNetwork.h"

/**
 * Конструктор
 */
UHopperAttributeSet::UHopperAttributeSet()
{
}

/**
* Реплиципрование Health
*/

void UHopperAttributeSet::OnRep_Health(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHopperAttributeSet, Health, OldValue);
}

/**
* Позволяет настроить реплиципрование Аттрибутов в GAS
*/
void UHopperAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Health
	DOREPLIFETIME(UHopperAttributeSet, Health);
}




