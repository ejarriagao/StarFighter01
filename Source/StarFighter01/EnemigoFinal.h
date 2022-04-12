// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Controller.h"
#include "EnemigoFinal.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER01_API AEnemigoFinal : public AController
{
	GENERATED_BODY()
private:
	float Tamano;
	float CantidadVida;
	float Dano;
	float UbicacionX;
	float UblicacionY;

	
};
