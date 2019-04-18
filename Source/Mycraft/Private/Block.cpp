// Fill out your copyright notice in the Description page of Project Settings.


#include "Block.h"
#include "ConstructorHelpers.h"


// Sets default values
ABlock::ABlock()
{

	SM_Block = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshRef(TEXT("/Game/Geometry/Meshes/SM_BlockGrass.SM_BlockGrass"));
	SM_Block->SetStaticMesh(MeshRef.Object);


}

// Called when the game starts or when spawned
void ABlock::BeginPlay()
{
	Super::BeginPlay();
	
}
