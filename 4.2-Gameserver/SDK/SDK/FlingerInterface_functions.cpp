#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function FlingerInterface.FlingerInterface_C.FlingerEnemyDied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       PawnThatDied                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlingerInterface_C::FlingerEnemyDied(class APawn* PawnThatDied)
{
	static auto Func = Class->GetFunction("FlingerInterface_C", "FlingerEnemyDied");

	Params::UFlingerInterface_C_FlingerEnemyDied_Params Parms;
	Parms.PawnThatDied = PawnThatDied;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FlingerInterface.FlingerInterface_C.AlertEnemySpawnedByFlinger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     PushMomentum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PushDuration                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       OwningFlinger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlingerInterface_C::AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum, float PushDuration, class APawn* OwningFlinger)
{
	static auto Func = Class->GetFunction("FlingerInterface_C", "AlertEnemySpawnedByFlinger");

	Params::UFlingerInterface_C_AlertEnemySpawnedByFlinger_Params Parms;
	Parms.PushMomentum = PushMomentum;
	Parms.PushDuration = PushDuration;
	Parms.OwningFlinger = OwningFlinger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FlingerInterface.FlingerInterface_C.FlingerEnemyFailedToSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         FailedProjectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlingerInterface_C::FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile)
{
	static auto Func = Class->GetFunction("FlingerInterface_C", "FlingerEnemyFailedToSpawn");

	Params::UFlingerInterface_C_FlingerEnemyFailedToSpawn_Params Parms;
	Parms.FailedProjectile = FailedProjectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FlingerInterface.FlingerInterface_C.FlingerThrewAProjectileContainingAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlingerInterface_C::FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile)
{
	static auto Func = Class->GetFunction("FlingerInterface_C", "FlingerThrewAProjectileContainingAnEnemy");

	Params::UFlingerInterface_C_FlingerThrewAProjectileContainingAnEnemy_Params Parms;
	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FlingerInterface.FlingerInterface_C.FlingerCan'tSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFlingerInterface_C::FlingerCan_tSpawnAnEnemy()
{
	static auto Func = Class->GetFunction("FlingerInterface_C", "FlingerCan'tSpawnAnEnemy");

	Params::UFlingerInterface_C_FlingerCan_tSpawnAnEnemy_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FlingerInterface.FlingerInterface_C.FlingerCanSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFlingerInterface_C::FlingerCanSpawnAnEnemy()
{
	static auto Func = Class->GetFunction("FlingerInterface_C", "FlingerCanSpawnAnEnemy");

	Params::UFlingerInterface_C_FlingerCanSpawnAnEnemy_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FlingerInterface.FlingerInterface_C.CanFlingerSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorWhoAsked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlingerInterface_C::CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked)
{
	static auto Func = Class->GetFunction("FlingerInterface_C", "CanFlingerSpawnAnEnemy");

	Params::UFlingerInterface_C_CanFlingerSpawnAnEnemy_Params Parms;
	Parms.ActorWhoAsked = ActorWhoAsked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FlingerInterface.FlingerInterface_C.FlingerSpawnedAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*                 EnemySpawned                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         ProjectileThatSpawnedThisEnemy                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlingerInterface_C::FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy)
{
	static auto Func = Class->GetFunction("FlingerInterface_C", "FlingerSpawnedAnEnemy");

	Params::UFlingerInterface_C_FlingerSpawnedAnEnemy_Params Parms;
	Parms.EnemySpawned = EnemySpawned;
	Parms.ProjectileThatSpawnedThisEnemy = ProjectileThatSpawnedThisEnemy;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
