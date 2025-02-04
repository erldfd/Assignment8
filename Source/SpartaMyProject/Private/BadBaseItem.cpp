#include "BadBaseItem.h"

#include "Components/SphereComponent.h"

ABadBaseItem::ABadBaseItem()
{
	PrimaryActorTick.bCanEverTick = false;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(Scene);

	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));

	Collision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	Collision->SetupAttachment(Scene);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(Collision);

	Collision->OnComponentBeginOverlap.AddDynamic(this, &ABadBaseItem::OnItemOverlap);
	Collision->OnComponentEndOverlap.AddDynamic(this, &ABadBaseItem::OnItemEndOverlap);
}

void ABadBaseItem::OnItemOverlap(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->ActorHasTag("Player"))
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("Overlapped")));
		ActivateItem(OtherActor);
	}
}

void ABadBaseItem::OnItemEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

void ABadBaseItem::ActivateItem(AActor* Activator)
{
}

FName ABadBaseItem::GetItemType() const
{
	return ItemType;
}

void ABadBaseItem::DestroyItem()
{
	Destroy();
}

