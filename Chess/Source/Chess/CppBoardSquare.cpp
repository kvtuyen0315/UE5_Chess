// Fill out your copyright notice in the Description page of Project Settings.


#include "CppBoardSquare.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACppBoardSquare::ACppBoardSquare()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("billboard"));

	marker = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("marker"));
	marker->K2_AttachTo(billboard);

	square = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("square"));
	square->K2_AttachTo(billboard);

	SetSquareColor();
}

// Called when the game starts or when spawned
void ACppBoardSquare::BeginPlay()
{
	Super::BeginPlay();

	playerControllerRef = Cast<ACppPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	gameModeRef = Cast<AChessGameModeBase>(GetWorld()->GetAuthGameMode());
	SetNotation();
	SetSquareColor();
}

void ACppBoardSquare::SetNotation()
{
	eNotationX = (EnumNotationType)x;
	eNotationY = (EnumNotationType)y;
}

FVector ACppBoardSquare::GetLocation()
{
	return billboard->GetComponentLocation();
}

void ACppBoardSquare::SetSquareColor()
{
	if (colorType == EnumColor::White)
	{
		square->SetMaterial(0, mlLight);
	}
	else
	{
		square->SetMaterial(0, mlDark);
	}
}