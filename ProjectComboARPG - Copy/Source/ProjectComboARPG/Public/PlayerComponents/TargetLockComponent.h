// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TargetLockComponent.generated.h"

/*FWD Declaration*/
class APlayerCharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCOMBOARPG_API UTargetLockComponent : public UActorComponent
{
	GENERATED_BODY()

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:	
	
	UTargetLockComponent();
	
	void ToggleLockOn();

	void ChangeTarget();

	void ToggleLockOnEffect();

	UPROPERTY(VisibleAnywhere, Category = TargetLock)
	AActor* LockedOnActor;

	UPROPERTY(VisibleAnywhere, Category = TargetLock)
	TArray<AActor*>LockOnCandidates;

	UPROPERTY(VisibleAnywhere, Category = TargetLock)
	bool bIsLockedOn;

	UFUNCTION()
	void OnTargetLockBoxOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	void OnTargetLockBoxOverlapEnd(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex);



protected:
	
	virtual void BeginPlay() override;

private:	
	
	APlayerCharacter* PLChar;

	UPROPERTY(EditAnywhere,Category = TargetLock, meta = (AllowPrivateAccess = "true"))
	float TargetingHeightOffset;

	UPROPERTY(EditAnywhere, Category = TargetLock, meta = (AllowPrivateAccess = "true"))
	float DistanceForTargetLock;
		
};
