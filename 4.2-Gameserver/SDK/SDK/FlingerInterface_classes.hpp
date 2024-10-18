#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass FlingerInterface.FlingerInterface_C
class UFlingerInterface_C : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FlingerInterface_C");
		return Clss;
	}

	void FlingerEnemyDied(class APawn* PawnThatDied);
	void AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum, float PushDuration, class APawn* OwningFlinger);
	void FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile);
	void FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile);
	void FlingerCan_tSpawnAnEnemy();
	void FlingerCanSpawnAnEnemy();
	void CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked);
	void FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
