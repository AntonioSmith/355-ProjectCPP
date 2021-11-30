// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door.generated.h"

class UScneComponent;

UCLASS()
class FUNPROJECT_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();

	// scene component for root
	UPROPERTY(VisibleAnywhere, BlueprintReadOnl, Category="Components")
	class USceneComponent* TheRoot;

	// scene component for hinge
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USceneCompnent* TheHinge;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
