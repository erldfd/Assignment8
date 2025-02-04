#include "ControlReversalDebuffItem.h"

#include "SpartaCharacter.h"

AControlReversalDebuffItem::AControlReversalDebuffItem()
{
}

void AControlReversalDebuffItem::ActivateItem(AActor* Activator)
{
	if (Activator && Activator->ActorHasTag("Player"))
	{
		if (ASpartaCharacter* PlayerCharacter = Cast<ASpartaCharacter>(Activator))
		{
			PlayerCharacter->ActivateControlReversalDebuff();
		}

		DestroyItem();
	}
}
