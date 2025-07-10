// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerComponents/TargetLockComponent.h"
#include "Characters/PlayerCharacter.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"


UTargetLockComponent::UTargetLockComponent():
	DistanceForTargetLock(1000.f),
	bIsLockedOn(false),
	TargetingHeightOffset(20.f),
	LockedOnActor(nullptr)
{
	
	PrimaryComponentTick.bCanEverTick = true;

	
}

void UTargetLockComponent::BeginPlay()
{
	Super::BeginPlay();

	if (PLChar == nullptr) 
	{
		PLChar = Cast<APlayerCharacter>(GetOwner());

	}

	if (PLChar) 
	{
		PLChar->GetTargetLockBox()->OnComponentBeginOverlap.AddDynamic(this, &UTargetLockComponent::OnTargetLockBoxOverlap);
		PLChar->GetTargetLockBox()->OnComponentEndOverlap.AddDynamic(this, &UTargetLockComponent::OnTargetLockBoxOverlapEnd);

	}

	
}

void UTargetLockComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (PLChar == nullptr)
	{
		PLChar = Cast<APlayerCharacter>(GetOwner());
	}

	if (PLChar && bIsLockedOn)
	{
		FRotator LookAtRot = UKismetMathLibrary::FindLookAtRotation(PLChar->GetActorLocation(), LockedOnActor->GetActorLocation());
		LookAtRot.Pitch -= TargetingHeightOffset;
		PLChar->GetController()->SetControlRotation(LookAtRot);
	}

	
}

void UTargetLockComponent::ToggleLockOn()
{
	if (GEngine) 
	{
		GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Blue, TEXT("Target Lock"));
	}

	if (bIsLockedOn) 
	{
		bIsLockedOn = false;
		LockedOnActor = nullptr;
		//ToggleLockOnEffect();
	}
	else 
	{
		if (LockOnCandidates.Num() > 0) 
		{
			LockedOnActor = LockOnCandidates[0];
			//ToggleLockOnEffect();
			if (LockedOnActor) 
			{
				bIsLockedOn = true;
			}
		}
	}
}

void UTargetLockComponent::ChangeTarget()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Blue, TEXT("Changing Target Lock"));
	}
}

void UTargetLockComponent::ToggleLockOnEffect()
{
}

void UTargetLockComponent::OnTargetLockBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor) 
	{
		if (OtherActor->ActorHasTag(FName("Enemy"))) 
		{
			LockOnCandidates.AddUnique(OtherActor);
		}
	}
}

void UTargetLockComponent::OnTargetLockBoxOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor)
	{
		if (OtherActor->ActorHasTag(FName("Enemy")))
		{
			LockOnCandidates.Remove(OtherActor);
		}
	}
}

