// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANKS_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
private:
	ATank* GetControlledTank() const;
	void AimTowardsCrosshair();
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;
	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
	UPROPERTY(EditAnywhere)
		float CrossHairXLocation = .05;
	UPROPERTY(EditAnywhere)
		float CrossHairYLocation = .3333;
	bool GetLookVectorHitLocation(FVector LookDirection,FVector& HitLocation)const;
	UPROPERTY(EditAnywhere)
		float LineTraceRange= 1000000;
public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
};
