#pragma once

#include "CoreMinimal.h"
#include "BadCoinItem.h"

#include "BigBadCoinItem.generated.h"

/**
 * 
 */
UCLASS()
class SPARTAMYPROJECT_API ABigBadCoinItem : public ABadCoinItem
{
	GENERATED_BODY()
	
public:

	ABigBadCoinItem();

	virtual void ActivateItem(AActor* Activator) override;
};
