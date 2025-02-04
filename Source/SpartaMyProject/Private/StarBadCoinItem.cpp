#include "StarBadCoinItem.h"

AStarBadCoinItem::AStarBadCoinItem()
{
	PointValue = 100;
	ItemType = "StarBadCoin";
}

void AStarBadCoinItem::ActivateItem(AActor* Activator)
{
	Super::ActivateItem(Activator);
}
