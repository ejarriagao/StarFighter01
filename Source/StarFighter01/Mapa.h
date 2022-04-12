// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "Mapa.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER01_API AMapa : public AWorldSettings
{
	GENERATED_BODY()

public:
	float TipoEscenario;
	float GradoDificultad;


private:
	float Tamano;

	
};
