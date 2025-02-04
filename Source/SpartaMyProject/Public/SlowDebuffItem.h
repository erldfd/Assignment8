#pragma once

#include "CoreMinimal.h"
#include "BadBaseItem.h"

#include "SlowDebuffItem.generated.h"

/**
 * 
 */
UCLASS()
class SPARTAMYPROJECT_API ASlowDebuffItem : public ABadBaseItem
{
	GENERATED_BODY()


public:

	ASlowDebuffItem();

	virtual void ActivateItem(AActor* Activator) override;
};
