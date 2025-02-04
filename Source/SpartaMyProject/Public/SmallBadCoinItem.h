#pragma once

#include "CoreMinimal.h"
#include "BadCoinItem.h"

#include "SmallBadCoinItem.generated.h"

/**
 * 
 */
UCLASS()
class SPARTAMYPROJECT_API ASmallBadCoinItem : public ABadCoinItem
{
	GENERATED_BODY()

public:

	ASmallBadCoinItem();
	virtual void ActivateItem(AActor* Activator) override;
};
