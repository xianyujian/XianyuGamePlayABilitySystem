// Copyright xianyu

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AuraAffectActor.generated.h"

class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class AURA_API AAuraAffectActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAuraAffectActor();

	UFUNCTION()
	virtual void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,UPrimitiveComponent* OtherComp,int32 OhterBodyIndex,bool bFromSweep,const FHitResult& SweepResult);

	UFUNCTION()
	virtual void EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USphereComponent> Sphere;
	
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> Mesh;

};
