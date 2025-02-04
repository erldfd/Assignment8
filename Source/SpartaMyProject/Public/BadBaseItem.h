// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "BadItemInterface.h"

#include "BadBaseItem.generated.h"

UCLASS()
class SPARTAMYPROJECT_API ABadBaseItem : public AActor, public IBadItemInterface
{
	GENERATED_BODY()
	
public:	

	ABadBaseItem();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FName ItemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item|Component")
	USceneComponent* Scene;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item|Component")
	class USphereComponent* Collision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item|Component")
	UStaticMeshComponent* StaticMesh;

	virtual void OnItemOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult) override;

	virtual void OnItemEndOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex) override;

	virtual void ActivateItem(AActor* Activator) override;
	virtual FName GetItemType() const override;

	virtual void DestroyItem();

};
