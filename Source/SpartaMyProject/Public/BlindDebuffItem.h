#pragma once

#include "CoreMinimal.h"
#include "BadBaseItem.h"

#include "BlindDebuffItem.generated.h"

/**
 * 
 */
UCLASS()
class SPARTAMYPROJECT_API ABlindDebuffItem : public ABadBaseItem
{
	GENERATED_BODY()
	
public:

	ABlindDebuffItem();

	virtual void ActivateItem(AActor* Activator) override;
};
