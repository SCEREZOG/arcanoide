// Fill out your copyright notice in the Description page of Project Settings.


#include "fachadaObstaculo.h"

// Sets default values
AfachadaObstaculo::AfachadaObstaculo()
{
	// Configure este actor para que llame a Tick() en cada cuadro.Puede desactivarlo para
	//	mejorar el rendimiento si no lo necesita.

	PrimaryActorTick.bCanEverTick = true;

}

// Llamado cuando comienza el juego o cuando se genera 

void AfachadaObstaculo::BeginPlay()
{
	Super::BeginPlay();
	//Create the Ship Facade Actor
	AfachadaObstaculo* fachadaObstaculo = GetWorld()
		-> SpawnActor<AfachadaObstaculo>(AfachadaObstaculo::StaticClass());
	//ejecutar las tareas necesarias 
	fachadaObstaculo->Reveille();
	fachadaObstaculo->PlanOfTheDay();
	fachadaObstaculo->Taps();

	
}

// llamada a cada cuadro
void AfachadaObstaculo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

