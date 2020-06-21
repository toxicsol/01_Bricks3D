// Fill out your copyright notice in the Description page of Project Settings.

#include "BrickPawn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Actor.h"

// Sets default values
ABrickPawn::ABrickPawn()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called every frame
void ABrickPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);	
}	


// Called to bind functionality to input
void ABrickPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

PlayerInputComponent->BindAction("RotateX", IE_Pressed, this, &ABrickPawn::RotateX);
PlayerInputComponent->BindAction("RotateY", IE_Pressed, this, &ABrickPawn::RotateY);
PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &ABrickPawn::MoveLeft);
PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &ABrickPawn::MoveRight);
PlayerInputComponent->BindAction("MoveUp", IE_Pressed, this, &ABrickPawn::MoveUp);
PlayerInputComponent->BindAction("MoveDown", IE_Pressed, this, &ABrickPawn::MoveDown);
}

void ABrickPawn::RotateX()
{
	BrickRotation.Roll += 90.f;
	SetActorRotation(BrickRotation);
}

void ABrickPawn::RotateY()
{
	BrickRotation.Pitch += 90.f;
	SetActorRotation(BrickRotation);
}

void ABrickPawn::MoveLeft()
{
	BrickLocation.Y -= 100.f;
	SetActorLocation(BrickLocation);
}

void ABrickPawn::MoveRight()
{
	BrickLocation.Y += 100.f;
	SetActorLocation(BrickLocation);
}

void ABrickPawn::MoveUp()
{
	BrickLocation.X += 100.f;
	SetActorLocation(BrickLocation);
}

void ABrickPawn::MoveDown()
{
	BrickLocation.X -= 100.f;
	SetActorLocation(BrickLocation);
}