// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Asteroides.generated.h"

UCLASS()
class STARFIGHTER01_API AAsteroides : public ACharacter
{
	GENERATED_BODY()
private:
	float Tamano;
	float Velocidad;
	float UbicacionX;
	float UbicacionY;

public:
	// Sets default values for this character's properties
	AAsteroides();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getTamano() { return Tamano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setTamano(float _Tamano) { Tamano = _Tamano; }


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getVelocidad() { return Velocidad; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setVelocidad(float _Velocidad) { Velocidad = _Velocidad; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getUbicacionX() { return UbicacionX; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setUbicacionX(float _UbicacionX) { UbicacionX = _UbicacionX; }


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getUbicacionY() { return UbicacionY; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setUbicacionY(float _UbicacionY) { UbicacionY = _UbicacionY; }



	UFUNCTION(BlueprintCallable)
		void setDestruirse(float _Destruirse) { Destruirse = _Destruirse; }
	UFUNCTION(BlueprintCallable)
		float getDestruirse() { return Destruirse; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float Destruirse;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
