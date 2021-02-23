// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PMrRectangle.generated.h"

UCLASS()
class STARTERPROJECT_API APMrRectangle : public APawn
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	float moveSpeed{ 100.f };
	FVector* direction{ new FVector() };

	void HorizontalAxis(float value);
	void VerticalAxis(float value);

public:
	// Sets default values for this pawn's properties
	APMrRectangle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
