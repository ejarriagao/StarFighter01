// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nave.generated.h"

UCLASS()
class STARFIGHTER01_API ANave : public AActor
{
	GENERATED_BODY()
public:
	float Color;
	float TipoNave;
	float Mapa;
	float Disparar;

private:
	float Tamano;
	float UbicacionX;
	float UbicacionY;
	float Dano;
	float Energia;
	
public:	
	// Sets default values for this actor's properties
	ANave();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getTamano() { return Tamano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setTamano(float _Tamano) { Tamano= _Tamano; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getUbicacionX() { return UbicacionX; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setUbicacionX(float _UbicacionX) { UbicacionX = _UbicacionX; }


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getUbicacionY() { return UbicacionY; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setUbicacionY(float _UbicacionY) { UbicacionY = _UbicacionY; }


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getDano() { return Dano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setDano(float _Dano) { Dano = _Dano; }


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getEnergia() { return Energia; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setEnergia(float _Energia) { Energia = _Energia; }
	

	UFUNCTION(BlueprintCallable)
		void setVelocidadInicial(float _VelocidadInicial) { VelocidadInicial = _VelocidadInicial; }
	UFUNCTION(BlueprintCallable)
		float getVelocidadInicial(){ return VelocidadInicial; }


	UFUNCTION(BlueprintCallable)
		void setVelocidadFinal(float _VelocidadFinal) { VelocidadFinal = _VelocidadFinal; }
	UFUNCTION(BlueprintCallable)
		float getVelocidadFinal() { return VelocidadFinal; }

	UFUNCTION(BlueprintCallable)
		void setVelocidadFinal(float _VelocidadFinal) { VelocidadFinal = _VelocidadFinal; }
	UFUNCTION(BlueprintCallable)
		float getVelocidadFinal() { return VelocidadFinal; }

	UFUNCTION(BlueprintCallable)
		void setMorir(float _Morir) { Morir = _Morir; }
	UFUNCTION(BlueprintCallable)
		float getMorir() { return Morir; }


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float VelocidadInicial;
	float VelocidadFinal;
	float Morir;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
