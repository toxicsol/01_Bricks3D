// Fill out your copyright notice in the Description page of Project Settings.


#include "BricksCharacterBase.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Actor.h"
#include "Math/Rotator.h"

// Sets default values
ABricksCharacterBase::ABricksCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called to bind functionality to input
void ABricksCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

PlayerInputComponent->BindAction("RotateX", IE_Pressed, this, &ABricksCharacterBase::RotateX);
PlayerInputComponent->BindAction("RotateY", IE_Pressed, this, &ABricksCharacterBase::RotateY);
// PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &ABricksCharacterBase::MoveLeft);
// PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &ABricksCharacterBase::MoveRight);
}

void ABricksCharacterBase::RotateX()
{
	if ((Controller))
	{
		FRotator BrickRoll = GetOwner()->GetActorRotation();
		BrickRoll.Roll += 90.f;
		GetOwner()->SetActorRotation(BrickRoll);
		UE_LOG(LogTemp, Warning, TEXT("Actor Rotated 90 degrees!"));
	}
	
}

void ABricksCharacterBase::RotateY()
{

}

void ABricksCharacterBase::MoveLeft(float Value)
{

}

void ABricksCharacterBase::MoveRight(float Value)
{

}