#include "BadCoinItem.h"

#include "SpartaGameState.h"

ABadCoinItem::ABadCoinItem()
{
	PointValue = 0;
	ItemType = "DefaultBadCoin";
}

void ABadCoinItem::ActivateItem(AActor* Activator)
{
	if (Activator && Activator->ActorHasTag("Player"))
	{
		if (UWorld* World = GetWorld())
		{
			if (ASpartaGameState* GameState = World->GetGameState<ASpartaGameState>())
			{
				GameState->SubtractScore(PointValue);
			}
		}

		DestroyItem();
	}
}
