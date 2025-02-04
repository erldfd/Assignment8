// Fill out your copyright notice in the Description page of Project Settings.


#include "BigBadCoinItem.h"

ABigBadCoinItem::ABigBadCoinItem()
{
	PointValue = 50;
	ItemType = "BigBadCoin";
}

void ABigBadCoinItem::ActivateItem(AActor* Activator)
{
	Super::ActivateItem(Activator);
}
