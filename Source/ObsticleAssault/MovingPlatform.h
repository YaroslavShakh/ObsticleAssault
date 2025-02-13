// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTICLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

  UPROPERTY(EditAnywhere, Category = "Moving")
  FVector PlatformVelocity = FVector(100,0,0);

  FVector StartLocation;

  UPROPERTY(EditAnywhere, Category = "Moving")
  float RangeOfMoving = 200.0;

UPROPERTY(EditAnywhere, Category = "Rotating")
FRotator RotationVelocity;


  void MovePlatform(float DeltaTime);
   void RotatePlatform(float DeltaTime);

   bool ShouldPlatformReturn() const;
   float MovedDistance() const;
};
