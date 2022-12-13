// Fill out your copyright notice in the Description page of Project Settings.


#include "componentes.h"

// Sets default values
Acomponentes::Acomponentes()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Acomponentes::BeginPlay()
{
	Super::BeginPlay();
	
}

void Acomponentes::Desplazarse()
{
	//imprimir desplazamiento 
	GEngine -> AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
	FString::Printf(TEXT("%s se empiezan a desplazar."), *CrewTitle()));

}


// Called every frame
void Acomponentes::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Acomponentes::Task(const TArray<Fstring>& Tareas) {

	//Haga un bucle en la matriz de Tareas y llame a la función Task() para cada una 
	//de ellas
	for (const FString& my Task : task) {
		Task(myTask);

}}

void Acomponentes::Task(const FString& Tarea) {
	//comprueba que tarea debe ejecutarse
	if (Task.Equals("Desplazarse")) 
	{
		Desplazarse();
	}
	else if(Task.Equals())
}

