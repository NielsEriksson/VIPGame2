// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

UCLASS()
class VIPGAME2_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemySpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	//round
	int currentRound;
	int firstRoundEnemyAmount; 
	int enemyIncreasePerRound;
	float spawnDeleday;
	//enemy management during round
	int enemiesAlive;
	int enemiesSpawned;

	//enemy management between rounds - dont change during a round
	int enemiesThisRound;

	//enemy type
	UPROPERTY(EditAnywhere, Category="Enemy")
	UClass* enemyType;
	//TSubclassOf<BP_Enemy> enemy;

	void CalculateAmountThisRound();
	void StartRound();
	void SpawnEnemy();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
