// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/BaseEnemy.h"

ABaseEnemy::ABaseEnemy()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	Tags.Add(FName("Enemy"));
}


void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}


void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



