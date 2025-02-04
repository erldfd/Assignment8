#include "BlindDebuffItem.h"

#include "SpartaCharacter.h"

ABlindDebuffItem::ABlindDebuffItem()
{
}

void ABlindDebuffItem::ActivateItem(AActor* Activator)
{
	if (Activator && Activator->ActorHasTag("Player"))
	{
		if (ASpartaCharacter* PlayerCharacter = Cast<ASpartaCharacter>(Activator))
		{
			PlayerCharacter->ActivateBlindDebuff();
		}

		DestroyItem();
	}
}
