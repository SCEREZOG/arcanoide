// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "componentes.generated.h"

UCLASS()
class ARCANOID_API Acomponentes : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Acomponentes();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	Task(const FString& Task);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:
	void Desplazarse();

	//ejecutar las tareas pasadas
	void Task(const TArray<FString>& Tasks);

	// Ejecutar el deber del miembro.Es puramente virtual, por lo que no necesita una
		//implementación en esta clase
	virtual void Duty() PURE_VIRTUAL(Acomponentes::Duty, ;);
	//Devuelve el Título del miembro. Es puramente virtual, por lo que no necesita una 
	//implementación en esta clase.

	virtual FString CrewTitle()
		PURE_VIRTUAL(Acomponentes::CrewTitle, return "";);

};



