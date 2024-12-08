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
	virtual void HighLightActor() override;
	virtual void UnHighLightActor() override;

	AAuraEnemy();
};
