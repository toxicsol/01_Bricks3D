// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BrickPawn.generated.h"

UCLASS()
class BRICKS3D_API ABrickPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABrickPawn();

protected:

	void RotateX();
	void RotateY();
	void MoveLeft();
	void MoveRight();
	void MoveUp();
	void MoveDown();


public:	
	//Called every frame
	virtual void Tick(float DeltaSeconds) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

FVector BrickLocation = GetActorLocation();
FRotator BrickRotation = GetActorRotation();
};
