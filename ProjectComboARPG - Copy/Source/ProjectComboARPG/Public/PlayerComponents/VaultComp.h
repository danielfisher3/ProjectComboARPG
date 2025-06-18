// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VaultComp.generated.h"

class APlayerCharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCOMBOARPG_API UVaultComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UVaultComp();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, Category = "Vaulting")
	float MinHeight;

	UPROPERTY(EditAnywhere, Category = "Vaulting")
	float MaxHeight;

	UPROPERTY(EditAnywhere, Category = "Vaulting")
	float DistanceForLanding;

	
	void Vault();

	UFUNCTION(BlueprintCallable)
	void ResetForRegMovement();


protected:
	
	virtual void BeginPlay() override;

private:	
	
	void VaultMotionWarp();

	APlayerCharacter* PLChar;

	UPROPERTY(VisibleAnywhere, Category = "Vaulting")
	bool bCanWarp;

	UPROPERTY(VisibleAnywhere, Category = "Vaulting")
	FVector VaultStartPos;

	UPROPERTY(VisibleAnywhere, Category = "Vaulting")
	FVector VaultMiddlePos;

	UPROPERTY(VisibleAnywhere, Category = "Vaulting")
	FVector VaultEndPos;

	UPROPERTY(EditAnywhere, Category = "Vaulting", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* VaultMontage;
		
};
