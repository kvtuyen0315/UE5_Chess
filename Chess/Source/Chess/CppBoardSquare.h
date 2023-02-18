// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/StaticMesh.h"
#include "CppBoardSquare.generated.h"

UCLASS()
class CHESS_API ACppBoardSquare : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACppBoardSquare();

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* marker;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* square;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
