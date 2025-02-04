#pragma once

#include "CoreMinimal.h"
#include "BadCoinItem.h"

#include "StarBadCoinItem.generated.h"

/**
 * 
 */
UCLASS()
class SPARTAMYPROJECT_API AStarBadCoinItem : public ABadCoinItem
{
	GENERATED_BODY()

public:

	AStarBadCoinItem();

	virtual void ActivateItem(AActor* Activator) override;
	
};
