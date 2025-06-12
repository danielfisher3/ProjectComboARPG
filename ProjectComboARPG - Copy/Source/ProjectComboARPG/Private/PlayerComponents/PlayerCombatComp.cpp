// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerComponents/PlayerCombatComp.h"
#include "Characters/PlayerCharacter.h"


UPlayerCombatComp::UPlayerCombatComp():
	/*Variable Initialization*/
	WeaponStatus(EPlayerWeaponStatus::EPWS_Unarmed)
{
	
	PrimaryComponentTick.bCanEverTick = true;

	
}



void UPlayerCombatComp::BeginPlay()
{
	Super::BeginPlay();
	
	
}


void UPlayerCombatComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (PLChar == nullptr)
	{
		PLChar = Cast<APlayerCharacter>(GetOwner());
	}

	
}

void UPlayerCombatComp::LightAttack()
{
	switch (WeaponStatus)
	{
	case EPlayerWeaponStatus::EPWS_Unarmed:
		if (PLChar->GetPlayerStatus() == EPlayerStatus::EPS_Unoccupied) 
		{
			UAnimInstance* AnimInstance = PLChar->GetMesh()->GetAnimInstance();
			if (AnimInstance && LightAttackMontageUnarmed1) 
			{
				AnimInstance->Montage_Play(LightAttackMontageUnarmed1);
			}
		}
		break;
	case EPlayerWeaponStatus::EPWS_ArmedMelee:
		break;
	case EPlayerWeaponStatus::EPWS_ArmedRanged:
		break;
	case EPlayerWeaponStatus::EPWS_MAX:
		break;
	default:
		break;
	}
}

void UPlayerCombatComp::HeavyAttack()
{
	switch (WeaponStatus)
	{
	case EPlayerWeaponStatus::EPWS_Unarmed:
		if (PLChar->GetPlayerStatus() == EPlayerStatus::EPS_Unoccupied)
		{
			UAnimInstance* AnimInstance = PLChar->GetMesh()->GetAnimInstance();
			if (AnimInstance && HeavyAttackMontageUnarmed1)
			{
				AnimInstance->Montage_Play(HeavyAttackMontageUnarmed1);
			}
		}
		break;
	case EPlayerWeaponStatus::EPWS_ArmedMelee:
		break;
	case EPlayerWeaponStatus::EPWS_ArmedRanged:
		break;
	case EPlayerWeaponStatus::EPWS_MAX:
		break;
	default:
		break;
	}
}

void UPlayerCombatComp::HeavySkillAttack()
{
	switch (WeaponStatus)
	{
	case EPlayerWeaponStatus::EPWS_Unarmed:
		if (PLChar->GetPlayerStatus() == EPlayerStatus::EPS_Unoccupied)
		{
			UAnimInstance* AnimInstance = PLChar->GetMesh()->GetAnimInstance();
			if (AnimInstance && HeavySkillAttackMontageUnarmed1)
			{
				AnimInstance->Montage_Play(HeavySkillAttackMontageUnarmed1);
			}
		}
		break;
	case EPlayerWeaponStatus::EPWS_ArmedMelee:
		break;
	case EPlayerWeaponStatus::EPWS_ArmedRanged:
		break;
	case EPlayerWeaponStatus::EPWS_MAX:
		break;
	default:
		break;
	}
}

void UPlayerCombatComp::LightSkillAttack()
{
	switch (WeaponStatus)
	{
	case EPlayerWeaponStatus::EPWS_Unarmed:
		if (PLChar->GetPlayerStatus() == EPlayerStatus::EPS_Unoccupied)
		{
			UAnimInstance* AnimInstance = PLChar->GetMesh()->GetAnimInstance();
			if (AnimInstance && LightSkillAttackMontageUnarmed1)
			{
				AnimInstance->Montage_Play(LightSkillAttackMontageUnarmed1);
			}
		}
		break;
	case EPlayerWeaponStatus::EPWS_ArmedMelee:
		break;
	case EPlayerWeaponStatus::EPWS_ArmedRanged:
		break;
	case EPlayerWeaponStatus::EPWS_MAX:
		break;
	default:
		break;
	}
}



