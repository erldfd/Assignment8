#pragma once

#include "CoreMinimal.h"
#include "BadBaseItem.h"

#include "ControlReversalDebuffItem.generated.h"

/**
 * 
 */
UCLASS()
class SPARTAMYPROJECT_API AControlReversalDebuffItem : public ABadBaseItem
{
	GENERATED_BODY()
	
public:

	AControlReversalDebuffItem();

	virtual void ActivateItem(AActor* Activator) override;
};
