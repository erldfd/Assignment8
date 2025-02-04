#include "SlowDebuffItem.h"

#include "SpartaCharacter.h"

ASlowDebuffItem::ASlowDebuffItem()
{
}

void ASlowDebuffItem::ActivateItem(AActor* Activator)
{
	if (Activator && Activator->ActorHasTag("Player"))
	{
		if (ASpartaCharacter* PlayerCharacter = Cast<ASpartaCharacter>(Activator))
		{
			PlayerCharacter->ActivateSlowDebuff();
		}

		DestroyItem();
	}
}
