// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Block.generated.h"

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EBlockType : uint8
{
	BT_GRASS 	UMETA(DisplayName = "Grass"),
	BT_ROCK 	UMETA(DisplayName = "Rock"),
	BT_SAND	    UMETA(DisplayName = "Sand")
};

UCLASS()
class MYCRAFT_API ABlock : public AActor
{
	GENERATED_BODY()

		/** Sphere collision component */
	UPROPERTY(EditAnywhere, Category = Mesh)
	class UStaticMeshComponent* SM_Block;


public:
	// Sets default values for this pawn's properties
	ABlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
