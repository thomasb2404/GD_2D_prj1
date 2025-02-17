// Fill out your copyright notice in the Description page of Project Settings.


#include "AIMovement.h"

// Sets default values
AAIMovement::AAIMovement()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CurrentPatrolNodeIndex = 0;

}

// Called when the game starts or when spawned
void AAIMovement::BeginPlay()
{
	Super::BeginPlay();
	
	OwnerPawn = Cast<AEnemy>(GetOwner());
	if (!OwnerPawn) //if the owner of this component is null
	{
		UE_LOG(LogTemp, Error, TEXT("AIMovementComponent can only be attached to a Pawn."));
		this->Destroy();
	}
}

// Called every frame
void AAIMovement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoveToNextPatrol();
}

void AAIMovement::MoveToNextPatrol()
{
	//If we have no patrol nodes, return
	if (PatrolNodes.Num() == 0)
	{
		return;
	}
	else if (PatrolNodes.Num() == 1) //If we only have one node, set owners location to that node
	{
		Owner->SetActorLocation(PatrolNodes[0]->GetActorLocation());
		return;
	}
	if (OwnerPawn->GetActorLocation().X > PatrolNodes[CurrentPatrolNodeIndex]->GetActorLocation().X) //Are we moving left or right?
	{
		//Move Left
	}
	else
	{
		//Move Right
	}
	//Check if we have reached the patrol node
}

