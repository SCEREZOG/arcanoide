// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "fachadaObstaculo.generated.h"


UCLASS()
class ARCANOID_API AfachadaObstaculo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AfachadaObstaculo();

private:
	//The Crew list
	TArray<Acomponentes*> componentes;
	//The Tasks to execute
	UPROPERTY()
		TArray<FString> Tasks;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
