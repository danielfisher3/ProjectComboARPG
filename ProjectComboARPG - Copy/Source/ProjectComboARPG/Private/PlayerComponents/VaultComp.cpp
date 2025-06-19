// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerComponents/VaultComp.h"
#include "Characters/PlayerCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MotionWarpingComponent.h"




UVaultComp::UVaultComp() :
	MinHeight(100.f),
	MaxHeight(100.f),
	DistanceForLanding(80.f),
	bCanVault(false),
	bCanWarp(false)
{
	
	PrimaryComponentTick.bCanEverTick = true;

	
}




void UVaultComp::BeginPlay()
{
	Super::BeginPlay();

}



void UVaultComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (PLChar == nullptr) 
	{
		PLChar = Cast<APlayerCharacter>(GetOwner());
	}
	
	bCanVault = PLChar->GetPlayerStatus() == EPlayerStatus::EPS_Unoccupied;
}

void UVaultComp::Vault()
{
	if (GEngine) 
	{
		GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Orange, TEXT("Vaulting"));
	}

	FVector PLFWD = UKismetMathLibrary::GetForwardVector(PLChar->GetActorRotation());
	FHitResult HitResult;
	FHitResult FinalHit;

	for (int i = 0; i < 2; i++) 
	{
		FVector Offset = FVector(0.f, 0.f, i * 30);
		FVector Start = UKismetMathLibrary::Add_VectorVector(PLChar->GetActorLocation(), Offset);
		FVector EndDelta = UKismetMathLibrary::Multiply_VectorFloat(PLFWD, 180.f);
		FVector End = UKismetMathLibrary::Add_VectorVector(Start, EndDelta);

		TArray<TEnumAsByte<EObjectTypeQuery>>ObjectTypesArray;
		TArray<AActor*>IgnoredActors;

		IgnoredActors.Add(PLChar);

		ObjectTypesArray.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Visibility));

		UKismetSystemLibrary::SphereTraceSingleForObjects(this, Start, End, 5.f, ObjectTypesArray,
			false, IgnoredActors, EDrawDebugTrace::ForDuration, HitResult, true);

		if (HitResult.bBlockingHit) 
		{
			for (int j = 0; j < 5; j++) 
			{
				FVector OffsetTwo = UKismetMathLibrary::Add_VectorVector(HitResult.Location, FVector(0.f, 0.f, 100.f));

				FVector ForwardVectorOffset = UKismetMathLibrary::Multiply_VectorInt(PLFWD, (j * 50));

				FVector StartTwo = UKismetMathLibrary::Add_VectorVector(ForwardVectorOffset, OffsetTwo);

				FVector EndTwo = UKismetMathLibrary::Subtract_VectorVector(StartTwo, FVector(0.f, 0.f, 100.f));

				FHitResult HitResultTwo;

				UKismetSystemLibrary::SphereTraceSingleForObjects(GetWorld(), StartTwo, EndTwo, 10.f, ObjectTypesArray,
					false, IgnoredActors, EDrawDebugTrace::ForDuration, HitResultTwo, true);

				if (HitResultTwo.bBlockingHit) 
				{
					if (HitResultTwo.bStartPenetrating) 
					{
						bCanWarp = false;
						VaultEndPos = FVector(0.f, 0.f, 20000.f);
					}
					else 
					{
						if (j == 0) 
						{
							VaultStartPos = HitResultTwo.Location;
							VaultMiddlePos = HitResultTwo.Location;
							bCanWarp = true;
						}
					}
				}
				else 
				{
					FVector OffsetLand = UKismetMathLibrary::Multiply_VectorFloat(PLFWD, DistanceForLanding);
					FVector StartLand = UKismetMathLibrary::Add_VectorVector(HitResultTwo.TraceStart, OffsetLand);
					FVector EndLand = UKismetMathLibrary::Subtract_VectorVector(StartLand, FVector(0.f, 0.f, 1000.f));

					GetWorld()->LineTraceSingleByChannel(FinalHit, StartLand, EndLand, ECC_Visibility);
					if (FinalHit.bBlockingHit) 
					{
						VaultEndPos = FinalHit.Location;
						DrawDebugSphere(GetWorld(), FinalHit.Location, 10.f, 12, FColor::Black, false, 10.f);
						VaultMotionWarp();
					}
					break;
				}
			}
		}
	}
}



void UVaultComp::VaultMotionWarp()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Orange, TEXT("Vault Motion Warping"));
	}

	USkeletalMeshComponent* CharMesh = PLChar->GetMesh();
	FVector MeshLocation = CharMesh->GetComponentLocation();

	bool bInRange = UKismetMathLibrary::InRange_FloatFloat(VaultEndPos.Z, (MeshLocation.Z - MinHeight), (MeshLocation.Z + MaxHeight));

	if (bInRange && bCanWarp) 
	{
		PLChar->SetPlayerStatus(EPlayerStatus::EPS_Vaulting);
		PLChar->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
		PLChar->SetActorEnableCollision(false);

		PLChar->GetMotionWarpingComp()->AddOrUpdateWarpTargetFromLocationAndRotation(FName("VaultStart"), VaultStartPos, PLChar->GetActorRotation());
		PLChar->GetMotionWarpingComp()->AddOrUpdateWarpTargetFromLocationAndRotation(FName("VaultMiddle"), VaultMiddlePos, PLChar->GetActorRotation());
		PLChar->GetMotionWarpingComp()->AddOrUpdateWarpTargetFromLocationAndRotation(FName("VaultLand"), VaultEndPos, PLChar->GetActorRotation());

		UAnimInstance* AnimInstance = PLChar->GetMesh()->GetAnimInstance();

		if (AnimInstance && VaultMontage) 
		{
			AnimInstance->Montage_Play(VaultMontage);
		}
		
	}
}


void UVaultComp::ResetForRegMovement()
{
	if (PLChar) 
	{
		PLChar->SetPlayerStatus(EPlayerStatus::EPS_Unoccupied);
		PLChar->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
		PLChar->SetActorEnableCollision(true);
	}
}
