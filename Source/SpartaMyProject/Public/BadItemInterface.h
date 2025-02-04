#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "BadItemInterface.generated.h"

UINTERFACE(MinimalAPI)
class UBadItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SPARTAMYPROJECT_API IBadItemInterface
{
	GENERATED_BODY()


public:

	UFUNCTION()
	virtual void OnItemOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult) = 0;

	UFUNCTION()
	virtual void OnItemEndOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex) = 0;

	virtual void ActivateItem(AActor* Activator) = 0;
	virtual FName GetItemType() const = 0;
};
