// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerComponents/PlayerCombatComp.h"
#include "Characters/PlayerCharacter.h"
#include "TimerManager.h"
#include "MotionWarpingComponent.h"
#include "Kismet/KismetSystemLibrary.h"


UPlayerCombatComp::UPlayerCombatComp():
	/*Variable Initialization*/
	WeaponStatus(EPlayerWeaponStatus::EPWS_Unarmed),
	bIsAttacking(false),
	bSaveAttack(false),
	LightAttackIndex(0),
	HeavyAttackIndex(0),
	bHasAttacked(false),
	LightAttackDamage(0.f),
	HeavyAttackDamage(0.f),
	NonTargetLockMWDistance(200.f),
	TargetLockMWDistance(200.f),
	bBlocking(false)
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
	
	if (PLChar && PLAnimInstance == nullptr) 
	{
		PLAnimInstance = PLChar->GetMesh()->GetAnimInstance();
		if (PLAnimInstance) 
		{
			PLAnimInstance->OnPlayMontageNotifyBegin.AddDynamic(this, &UPlayerCombatComp::HandleOnMontageNotifyBegin);
		}
	}

	if (PLChar) 
	{
		bCanAttack = PLChar->GetPlayerStatus() == EPlayerStatus::EPS_Unoccupied || PLChar->GetPlayerStatus() == EPlayerStatus::EPS_Attacking && !PLChar->bIsCrouched ? true : false;
	}
}

void UPlayerCombatComp::LightAttack()
{
	if (PLChar->GetSkillInput() == false)
	{
		if (bIsAttacking)
		{
			bSaveAttack = true;
		}
		else
		{
			bIsAttacking = true;

			switch (LightAttackIndex)
			{
			case 0:
				LightAttackOne();
				break;

			case 1:
				LightAttackTwo();
				break;

			case 2:
				LightAttackThree();
				break;

			case 3:
				LightAttackFour();
				break;

			}
		}
	}
}

void UPlayerCombatComp::StrongAttack()
{
	if (PLChar->GetSkillInput() == false) 
	{
		if (bIsAttacking)
		{
			bSaveAttack = true;
		}
		else
		{
			bIsAttacking = true;

			switch (HeavyAttackIndex)
			{
			case 0:
				StrongAttackOne();
				break;

			case 1:
				StrongAttackTwo();
				break;

			case 2:
				StrongAttackThree();
				break;

			case 3:
				StrongAttackFour();
				break;

			}
		}
	}
}

void UPlayerCombatComp::LightAttackOne()
{
	if (!bHasAttacked) 
	{
		bHasAttacked = true;
		if (PLAnimInstance && LightAttackMontageUnarmed1) 
		{
			PLAnimInstance->Montage_Play(LightAttackMontageUnarmed1);
			PLChar->SetPlayerStatus(EPlayerStatus::EPS_Attacking);
			LightAttackIndex = 1;
			bHasAttacked = false;
		}
	}
}

void UPlayerCombatComp::LightAttackTwo()
{
	if (!bHasAttacked)
	{
		bHasAttacked = true;
		if (PLAnimInstance && LightAttackMontageUnarmed2)
		{
			PLAnimInstance->Montage_Play(LightAttackMontageUnarmed2);
			PLChar->SetPlayerStatus(EPlayerStatus::EPS_Attacking);
			LightAttackIndex = 2;
			bHasAttacked = false;
		}
	}
}

void UPlayerCombatComp::LightAttackThree()
{
	if (!bHasAttacked)
	{
		bHasAttacked = true;
		if (PLAnimInstance && LightAttackMontageUnarmed3)
		{
			PLAnimInstance->Montage_Play(LightAttackMontageUnarmed3);
			PLChar->SetPlayerStatus(EPlayerStatus::EPS_Attacking);
			LightAttackIndex = 3;
			bHasAttacked = false;
		}
	}
}

void UPlayerCombatComp::LightAttackFour()
{
	if (!bHasAttacked)
	{
		bHasAttacked = true;
		if (PLAnimInstance && LightAttackMontageUnarmed4)
		{
			PLAnimInstance->Montage_Play(LightAttackMontageUnarmed4);
			PLChar->SetPlayerStatus(EPlayerStatus::EPS_Attacking);
			LightAttackIndex = 0;
			bHasAttacked = false;
		}
	}
}

void UPlayerCombatComp::StrongAttackOne()
{
	if (!bHasAttacked)
	{
		bHasAttacked = true;
		if (PLAnimInstance && HeavyAttackMontageUnarmed1)
		{
			PLAnimInstance->Montage_Play(HeavyAttackMontageUnarmed1);
			PLChar->SetPlayerStatus(EPlayerStatus::EPS_Attacking);
			HeavyAttackIndex = 1;
			bHasAttacked = false;
		}
	}
}

void UPlayerCombatComp::StrongAttackTwo()
{
	if (!bHasAttacked)
	{
		bHasAttacked = true;
		if (PLAnimInstance && HeavyAttackMontageUnarmed2)
		{
			PLAnimInstance->Montage_Play(HeavyAttackMontageUnarmed2);
			PLChar->SetPlayerStatus(EPlayerStatus::EPS_Attacking);
			HeavyAttackIndex = 2;
			bHasAttacked = false;
		}
	}
}

void UPlayerCombatComp::StrongAttackThree()
{
	if (!bHasAttacked)
	{
		bHasAttacked = true;
		if (PLAnimInstance && HeavyAttackMontageUnarmed3)
		{
			PLAnimInstance->Montage_Play(HeavyAttackMontageUnarmed3);
			PLChar->SetPlayerStatus(EPlayerStatus::EPS_Attacking);
			HeavyAttackIndex = 3;
			bHasAttacked = false;
		}
	}
}

void UPlayerCombatComp::StrongAttackFour()
{
	if (!bHasAttacked)
	{
		bHasAttacked = true;
		if (PLAnimInstance && HeavyAttackMontageUnarmed4)
		{
			PLAnimInstance->Montage_Play(HeavyAttackMontageUnarmed4);
			PLChar->SetPlayerStatus(EPlayerStatus::EPS_Attacking);
			HeavyAttackIndex = 0;
			bHasAttacked = false;
		}
	}
}


void UPlayerCombatComp::LightAttackCombo()
{
	if (PLChar->GetSkillInput() == false)
	{
		if (bSaveAttack)
		{
			bSaveAttack = false;

			switch (LightAttackIndex)
			{
			case 0:
				LightAttackOne();
				break;

			case 1:
				LightAttackTwo();
				break;

			case 2:
				LightAttackThree();
				break;

			case 3:
				LightAttackFour();
				break;

			}

		}
		else
		{
			StopCombo();
		}
	}
}

void UPlayerCombatComp::StrongAttackCombo()
{
	if (PLChar->GetSkillInput() == false)
	{
		if (bSaveAttack)
		{
			bSaveAttack = false;

			switch (HeavyAttackIndex)
			{
			case 0:
				StrongAttackOne();
				break;

			case 1:
				StrongAttackTwo();
				break;

			case 2:
				StrongAttackThree();
				break;

			case 3:
				StrongAttackFour();
				break;

			}

		}
		else
		{
			StopCombo();
		}
	}

}

void UPlayerCombatComp::StopCombo()
{
	bIsAttacking = false;
	LightAttackIndex = 0;
	HeavyAttackIndex = 0;
	PLChar->SetPlayerStatus(EPlayerStatus::EPS_Unoccupied);
	
}

void UPlayerCombatComp::HandleOnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPayload)
{
	//Fill in
}

void UPlayerCombatComp::UnarmedAttackTrace(FHitResult& HitResult, FName SocketStartName, FName SocketEndName, float SphereRadius)
{
	FVector SocketLocationStart = PLChar->GetMesh()->GetSocketLocation(SocketStartName);
	FVector SocketLocationEnd = PLChar->GetMesh()->GetSocketLocation(SocketEndName);

	TArray<TEnumAsByte<EObjectTypeQuery>>OverlapObjectTypes;
	OverlapObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Visibility));

	//Add Enemy Class

	TArray<AActor*>ActorsToIgnore;
	ActorsToIgnore.Add(GetOwner());

	TArray<AActor*>OuActors;
	UKismetSystemLibrary::SphereTraceSingleForObjects(GetWorld(), SocketLocationStart, SocketLocationEnd, SphereRadius, OverlapObjectTypes, false, ActorsToIgnore, EDrawDebugTrace::None, HitResult, true);
}

void UPlayerCombatComp::SphereTraceForMotionWarp(FHitResult& HitResult)
{
	//Fill in
}

void UPlayerCombatComp::AttackMotionWarp()
{
	//Fill in
}


void UPlayerCombatComp::HeavySkillAttack()
{
	switch (WeaponStatus)
	{
	case EPlayerWeaponStatus::EPWS_Unarmed:
		if (PLChar->GetPlayerStatus() == EPlayerStatus::EPS_Unoccupied && PLChar->GetPlayerStatus() != EPlayerStatus::EPS_Crouching &&
			PLChar->GetSkillInput() == true)
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Black, TEXT("Heavy Skill Attack"));

			}
			UAnimInstance* AnimInstance = PLChar->GetMesh()->GetAnimInstance();
			if (AnimInstance && HeavySkillAttackMontageUnarmed1)
			{
				AnimInstance->Montage_Play(HeavySkillAttackMontageUnarmed1);
				PLChar->SetPlayerStatus(EPlayerStatus::EPS_Attacking);
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
		if (PLChar->GetPlayerStatus() == EPlayerStatus::EPS_Unoccupied && PLChar->GetPlayerStatus() != EPlayerStatus::EPS_Crouching &&
			PLChar->GetSkillInput() == true)
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Black, TEXT("Light Skill Attack"));

			}
			UAnimInstance* AnimInstance = PLChar->GetMesh()->GetAnimInstance();
			if (AnimInstance && LightSkillAttackMontageUnarmed1)
			{
				AnimInstance->Montage_Play(LightSkillAttackMontageUnarmed1);
				PLChar->SetPlayerStatus(EPlayerStatus::EPS_Attacking);
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

void UPlayerCombatComp::Block()
{
	bBlocking = true;
	if (PLChar) 
	{
		PLChar->SetPlayerStatus(EPlayerStatus::EPS_BlockParry);
	}
}



