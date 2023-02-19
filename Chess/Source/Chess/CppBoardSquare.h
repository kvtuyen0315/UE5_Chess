// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BillboardComponent.h"
#include "CppPlayerController.h"
#include "ChessGameModeBase.h"
#include "CppChessPiece.h"
#include "Materials/MaterialInstanceBasePropertyOverrides.h"
#include "CppBoardSquare.generated.h"

UCLASS()
class CHESS_API ACppBoardSquare : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACppBoardSquare();

	UPROPERTY(EditAnywhere) UBillboardComponent* billboard;
	UPROPERTY(EditAnywhere) UStaticMeshComponent* marker;
	UPROPERTY(EditAnywhere) UStaticMeshComponent* square;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup") int32 x;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup") int32 y;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Play") bool isSlected;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Play") bool isHightlighted;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Play") bool isAttackable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Play") bool isVisible;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "References") ACppPlayerController* playerControllerRef;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "References") AChessGameModeBase* gameModeRef;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "References") ACppChessPiece* occupantRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials") UMaterialInstance* mlHightLight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials") UMaterialInstance* mlAttack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials") UMaterialInstance* mlSelect;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials") UMaterialInstance* mlActive;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials") UMaterialInstance* mlLight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials") UMaterialInstance* mlDark;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
