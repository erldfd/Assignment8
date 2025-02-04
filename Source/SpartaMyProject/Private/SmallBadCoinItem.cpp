#include "SmallBadCoinItem.h"

ASmallBadCoinItem::ASmallBadCoinItem()
{
	PointValue = 10;
	ItemType = "SmallBadCoin";
}

void ASmallBadCoinItem::ActivateItem(AActor* Activator)
{
	Super::ActivateItem(Activator);
}
