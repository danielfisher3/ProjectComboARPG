// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerComponents/TargetLockComponent.h"
#include "Characters/PlayerCharacter.h"


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

	

	
}

void UTargetLockComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}

void UTargetLockComponent::ToggleLockOn()
{
	if (GEngine) 
	{
		GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Blue, TEXT("Target Lock"));
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
}

void UTargetLockComponent::OnTargetLockBoxOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

