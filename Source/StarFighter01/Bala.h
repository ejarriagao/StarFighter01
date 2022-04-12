// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Bala.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STARFIGHTER01_API UBala : public UActorComponent
{
	GENERATED_BODY()
private:
	float Tamano;
	float Dano;
	float Velocidad;



public:	
	// Sets default values for this component's properties
	UBala();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getTamano() { return Tamano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setTamano(float _Tamano) { Tamano = _Tamano; }


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getVelocidad() { return Velocidad; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setVelocidad(float _Velocidad) { Velocidad = _Velocidad; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getTamano() { return Tamano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setTamano(float _Tamano) { Tamano = _Tamano; }


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getDano() { return Dano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setDano(float _Dano) { Dano = _Dano; }


	UFUNCTION(BlueprintCallable)
		void setDispararse(float _Dispararse) { Dispararse = _Dispararse; }
	UFUNCTION(BlueprintCallable)
		float getDispararse() { return Dispararse; }


	UFUNCTION(BlueprintCallable)
		void setRebajarVida(float _RebajarVida) { RebajarVida = _RebajarVida; }
	UFUNCTION(BlueprintCallable)
		float getRebajarVida() { return RebajarVida; }

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	float Dispararse;
	float RebajarVida;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
