// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BadBaseItem.h"

#include "BadCoinItem.generated.h"

/**
 * 
 */
UCLASS()
class SPARTAMYPROJECT_API ABadCoinItem : public ABadBaseItem
{
	GENERATED_BODY()

public:

	ABadCoinItem();
	
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 PointValue;

	virtual void ActivateItem(AActor* Activator) override;
};
