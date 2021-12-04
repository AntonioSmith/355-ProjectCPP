// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/ConstructorHelpers.h"

#include "Door.generated.h" // Must always be last

class UScneComponent;

UCLASS()
class FUNPROJECT_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();

	// scene component for root
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	class USceneComponent* TheRoot;

	// scene component for hinge
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USceneComponent* TheHinge;

	// mesh for door
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UStaticMeshComponent* TheMeshDoor;

	// mesh for door frame
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UInstancedStaticMeshComponent* TheMeshFrame;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Door Stuff")
	float WidthofDoor = 200;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Door Stuff")
	float HeightofDoor = 300;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Door Stuff")
	float DepthofDoor = 200;




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
