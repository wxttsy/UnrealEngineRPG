// Sylbie All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WarriorWeaponbase.generated.h"

class UBoxComponent;

UCLASS()
class ACTIONRPG_API AWarriorWeaponbase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWarriorWeaponbase();

	FORCEINLINE UBoxComponent* GetWeaponCollisionBox() const {return WeaponCollisionBox;}

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category = "Weapons")
	UStaticMeshComponent* WeaponMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category = "Weapons")
	UBoxComponent* WeaponCollisionBox;
};
