// Fill out your copyright notice in the Description page of Project Settings.


#include "PMrRectangle.h"

// Sets default values
APMrRectangle::APMrRectangle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APMrRectangle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APMrRectangle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorLocalOffset(*direction * moveSpeed * DeltaTime);
}

// Called to bind functionality to input
void APMrRectangle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Horizontal", this, &APMrRectangle::HorizontalAxis);
	PlayerInputComponent->BindAxis("Vertical", this, &APMrRectangle::VerticalAxis);
}

void APMrRectangle::HorizontalAxis(float value)
{
	direction->Y = value;
}

void APMrRectangle::VerticalAxis(float value)
{
	direction->X = value;
}