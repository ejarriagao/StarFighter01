// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Enemigo.generated.h"

UCLASS()
class STARFIGHTER01_API AEnemigo : public APawn
{
	GENERATED_BODY()
private:
	float CantidadVida;
	float TipoEnemigo;
	float Dano;
	float UbicacionX;
	float UbicacionY;

public:
	// Sets default values for this pawn's properties
	AEnemigo();


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getCantidadVida() { return CantidadVida; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setCantidadVida(float _CantidadVida) { CantidadVida = _CantidadVida; }


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float TipoEnemigo() { return TipoEnemigo; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setTipoEnemigo(float _TipoEnemigo) { TipoEnemigo = _TipoEnemigo; }


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getDano() { return Dano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setDano(float _Dano) { Dano = _Dano; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getUbicacionX() { return UbicacionX; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setUbicacionX(float _UbicacionX) { UbicacionX = _UbicacionX; }


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getUbicacionY() { return UbicacionY; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setUbicacionY(float _UbicacionY) { UbicacionY = _UbicacionY; }

	UFUNCTION(BlueprintCallable)
		void setExplotar(float _Explotar) { Explotar = _Explotar; }
	UFUNCTION(BlueprintCallable)
		float getExplotar() { return Explotar; }

	UFUNCTION(BlueprintCallable)
		void setDestruirse(float _Destruirse) { Destruirse = _Destruirse; }
	UFUNCTION(BlueprintCallable)
		float getDestruirse() { return Destruirse; }




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float Destruirse;
	float Explotar;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
