// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SpartaCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
struct FInputActionValue;

UCLASS()
class SPARTAMYPROJECT_API ASpartaCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASpartaCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComp;

	UFUNCTION(BlueprintPure, Category = "Health")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Health")
	void AddHealth(float Amount);

	void ActivateSlowDebuff();
	void ActivateControlReversalDebuff();
	void ActivateBlindDebuff();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float Health;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual float TakeDamage(
		float DamageAmount,
		FDamageEvent const& DamageEvent,
		AController* EventInstigator,
		AActor* DamageCauser) override;

	UFUNCTION()
	void Move(const FInputActionValue& Value);

	UFUNCTION()
	void StartJump(const FInputActionValue& Value);

	UFUNCTION()
	void StopJump(const FInputActionValue& Value);

	UFUNCTION()
	void Look(const FInputActionValue& Value);

	UFUNCTION()
	void StartSprint(const FInputActionValue& Value);

	UFUNCTION()
	void StopSprint(const FInputActionValue& Value);

	void OnDeath();

private:

	float NormalSpeed;

	float SprintSpeedMultiplier;
	float SprintSpeed;
	bool bIsSprinting = false;


	float CurrentDebuffedSpeedMultiplier;
	float DebuffedSpeedMultiplier;

	float SlowDebuffTime = 5.0f;
	float ControlReversalDebuffTime = 5.0f;
	float BlindDebuffTime = 5.0f;

	FTimerHandle SlowDebuffTimerHandle;
	FTimerHandle ControlDebuffTimerHandle;
	FTimerHandle BlindDebuffTimerHandle;

	bool bIsSlowDebuffActivated = false;
	bool bIsControlReversalDebuffActivated = false;
	bool bIsBlindDebuffActivated = false;
};
