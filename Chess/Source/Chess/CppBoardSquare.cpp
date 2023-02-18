// Fill out your copyright notice in the Description page of Project Settings.


#include "CppBoardSquare.h"

// Sets default values
ACppBoardSquare::ACppBoardSquare()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	marker = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("marker"));
	square = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("square"));

}

// Called when the game starts or when spawned
void ACppBoardSquare::BeginPlay()
{
	Super::BeginPlay();
	
}