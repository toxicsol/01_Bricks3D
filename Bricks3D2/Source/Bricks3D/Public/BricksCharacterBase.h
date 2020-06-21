// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BricksCharacterBase.generated.h"

class UCameraComponent;
class UStaticMeshComponent;

UCLASS()
class BRICKS3D_API ABricksCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABricksCharacterBase();

protected:

	void RotateX();
	void RotateY();
	void MoveLeft(float Value);
	void MoveRight(float Value);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	float RotateRate;

public:	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
