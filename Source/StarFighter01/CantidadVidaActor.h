// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CantidadVidaActor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STARFIGHTER01_API UCantidadVidaActor : public UActorComponent
{
	GENERATED_BODY()
private:
	float Color;
	float NumeroVida;


public:	
	// Sets default values for this component's properties
	UCantidadVidaActor();
	UPROPERTY(EditAnywhere, blueprintReadWrite)
		float getColor() { return Color; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setColor(float _Color) { Color= _Color; }


	UPROPERTY(EditAnywhere, blueprintReadWrite)
		float getNumeroVida() { return NumeroVida; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setNumeroVida(float _NumeroVida) { NumeroVida = _NumeroVida; }


	UFUNCTION(BlueprintCallable)
		void setSalirJuego(float _SalirJuego) { SalirJuego = _SalirJuego; }
	UFUNCTION(BlueprintCallable)
		float getSalirJuego() { return SalirJuego; }

	UFUNCTION(BlueprintCallable)
		void setContinuarJuego(float _ContinuarJuego) { ContinuarJuego = _ContinuarJuego; }
	UFUNCTION(BlueprintCallable)
		float getContinuarJuego() { return ContinuarJuego; }

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	float SalirJuego;
	float ContinuarJuego;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
