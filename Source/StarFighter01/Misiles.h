// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Misiles.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STARFIGHTER01_API UMisiles : public UActorComponent
{
	GENERATED_BODY()
private:
	float TamanoExplosion;
	float Dano;
	float Recargable;
	
public:	
	// Sets default values for this component's properties
	UMisiles();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getTamanoExplosion() { return TamanoExplosion; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setTamanoExplosion(float _TamanoExplosion) { TamanoExplosion = _TamanoExplosion; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getDano() { return Dano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setDano(float _Dano) { Dano = _Dano; }


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getRecargable() { return Recargable; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setRecargable(float _Recargable) { Recargable = _Recargable; }


	UFUNCTION(BlueprintCallable)
		void setLanzarExplosivos(float _LanzarExplosivos) { LanzarExplosivos = _LanzarExplosivos; }
	UFUNCTION(BlueprintCallable)
		float getLanzarExplosivos() { return LanzarExplosivos; }


	UFUNCTION(BlueprintCallable)
		void setDestruirZona(float _DestruirZona) { DestruirZona = _DestruirZona; }
	UFUNCTION(BlueprintCallable)
		float getDestruirZona() { return DestruirZona; }

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	float DestruirZona;
	float LanzarExplosivos;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
