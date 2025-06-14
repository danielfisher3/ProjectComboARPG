// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerComponents/PlayerCombatComp.h"
#include "Characters/PlayerCharacter.h"
#include "TimerManager.h"


UPlayerCombatComp::UPlayerCombatComp():
	/*Variable Initialization*/
	WeaponStatus(EPlayerWeaponStatus::EPWS_Unarmed),
	ComboCount(0)
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


			ComboCount++;

			switch (ComboCount)
			{
			case 1:
				if (GEngine)
				{
					GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Black, TEXT("Light Attack 1"));

				}
				if (PLChar->GetMesh()->GetAnimInstance() && LightAttackMontageUnarmed1) 
				{
					PLChar->GetMesh()->GetAnimInstance()->Montage_Play(LightAttackMontageUnarmed1);
				}
				break;

			case 2:
				if (GEngine)
				{
					GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Black, TEXT("Light Attack 2"));

				}
				if (PLChar->GetMesh()->GetAnimInstance() && LightAttackMontageUnarmed2)
				{
					
					PLChar->GetMesh()->GetAnimInstance()->Montage_Play(LightAttackMontageUnarmed2);
				}
				break;

			case 3:
				if (GEngine)
				{
					GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Black, TEXT("Light Attack 3"));

				}
				if (PLChar->GetMesh()->GetAnimInstance() && LightAttackMontageUnarmed3)
				{
					PLChar->GetMesh()->GetAnimInstance()->Montage_Play(LightAttackMontageUnarmed3);
				}
				break;

			case 4:
				if (GEngine)
				{
					GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Black, TEXT("Light Attack 3"));

				}
				if (PLChar->GetMesh()->GetAnimInstance() && LightAttackMontageUnarmed4)
				{
					PLChar->GetMesh()->GetAnimInstance()->Montage_Play(LightAttackMontageUnarmed4);
				}
				break;

			default:
				ResetCombo();
				return;
			}
			PLChar->GetWorldTimerManager().SetTimer(ComboTimerHandle, this, &UPlayerCombatComp::ResetCombo, ComboWindow, false);
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


			ComboCount++;

			switch (ComboCount)
			{
			case 1:
				if (GEngine)
				{
					GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Black, TEXT("Heavy Attack 1"));

				}
				if (PLChar->GetMesh()->GetAnimInstance() && HeavyAttackMontageUnarmed1)
				{
					PLChar->GetMesh()->GetAnimInstance()->Montage_Play(HeavyAttackMontageUnarmed1);
				}

				break;

			case 2:
				if (GEngine)
				{
					GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Black, TEXT("Heavy Attack 2"));

				}
				if (PLChar->GetMesh()->GetAnimInstance() && HeavyAttackMontageUnarmed2)
				{
					PLChar->GetMesh()->GetAnimInstance()->Montage_Play(HeavyAttackMontageUnarmed2);
				}
				break;

			case 3:
				if (GEngine)
				{
					GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Black, TEXT("Heavy Attack 3"));

				}
				if (PLChar->GetMesh()->GetAnimInstance() && HeavyAttackMontageUnarmed3)
				{
					PLChar->GetMesh()->GetAnimInstance()->Montage_Play(HeavyAttackMontageUnarmed3);
				}
				break;

			case 4:
				if (GEngine)
				{
					GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Black, TEXT("Heavy Attack 4"));

				}
				if (PLChar->GetMesh()->GetAnimInstance() && HeavyAttackMontageUnarmed4)
				{
					PLChar->GetMesh()->GetAnimInstance()->Montage_Play(HeavyAttackMontageUnarmed4);
				}
				break;

			default:
				ResetCombo();
				return;
			}
			PLChar->GetWorldTimerManager().SetTimer(ComboTimerHandle, this, &UPlayerCombatComp::ResetCombo, ComboWindow, false);
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

void UPlayerCombatComp::ResetCombo()
{
	ComboCount = 0;
	bCanAttack = true;
	PLChar->GetWorldTimerManager().ClearTimer(ComboTimerHandle);
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Black, TEXT("Reset Combo"));

	}


}




