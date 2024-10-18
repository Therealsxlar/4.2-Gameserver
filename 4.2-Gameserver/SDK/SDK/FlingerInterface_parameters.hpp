#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function FlingerInterface.FlingerInterface_C.FlingerEnemyDied
struct UFlingerInterface_C_FlingerEnemyDied_Params
{
public:
	class APawn*                                 PawnThatDied;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function FlingerInterface.FlingerInterface_C.AlertEnemySpawnedByFlinger
struct UFlingerInterface_C_AlertEnemySpawnedByFlinger_Params
{
public:
	struct FVector                               PushMomentum;                                      // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PushDuration;                                      // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 OwningFlinger;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FlingerInterface.FlingerInterface_C.FlingerEnemyFailedToSpawn
struct UFlingerInterface_C_FlingerEnemyFailedToSpawn_Params
{
public:
	class AFortProjectileBase*                   FailedProjectile;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FlingerInterface.FlingerInterface_C.FlingerThrewAProjectileContainingAnEnemy
struct UFlingerInterface_C_FlingerThrewAProjectileContainingAnEnemy_Params
{
public:
	class AFortProjectileBase*                   Projectile;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FlingerInterface.FlingerInterface_C.FlingerCan'tSpawnAnEnemy
struct UFlingerInterface_C_FlingerCan_tSpawnAnEnemy_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FlingerInterface.FlingerInterface_C.FlingerCanSpawnAnEnemy
struct UFlingerInterface_C_FlingerCanSpawnAnEnemy_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function FlingerInterface.FlingerInterface_C.CanFlingerSpawnAnEnemy
struct UFlingerInterface_C_CanFlingerSpawnAnEnemy_Params
{
public:
	class AActor*                                ActorWhoAsked;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function FlingerInterface.FlingerInterface_C.FlingerSpawnedAnEnemy
struct UFlingerInterface_C_FlingerSpawnedAnEnemy_Params
{
public:
	class AFortAIPawn*                           EnemySpawned;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   ProjectileThatSpawnedThisEnemy;                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
