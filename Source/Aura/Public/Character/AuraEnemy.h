// Copyright xianyu

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interactin/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

	public:
	AAuraEnemy();
	
	/* enemy interface*/
	virtual void HighLightActor() override;
	virtual void UnHighLightActor() override;
	/* end enemy interface*/
	
	virtual void BeginPlay() override;
};
