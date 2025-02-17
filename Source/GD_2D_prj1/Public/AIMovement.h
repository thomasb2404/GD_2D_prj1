// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PatrolNode.h"
#include "Enemy.h"
#include "AIMovement.generated.h"

UCLASS()
class GD_2D_PRJ1_API AAIMovement : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAIMovement();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Array of patrol nodes for the AI to follow 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Pathfinding")
	TArray<AActor*> PatrolNodes;
private:
	int CurrentPatrolNodeIndex = 0; //track our current node
	AEnemy* OwnerPawn; //store our owner
	void MoveToNextPatrol(); //Calculate Movement
};
