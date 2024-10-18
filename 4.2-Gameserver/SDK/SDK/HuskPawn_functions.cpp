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


// Function HuskPawn.HuskPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHuskPawn_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("HuskPawn_C", "UserConstructionScript");

	Params::AHuskPawn_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.FlingerSpawnedAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*                 EnemySpawned                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         ProjectileThatSpawnedThisEnemy                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHuskPawn_C::FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "FlingerSpawnedAnEnemy");

	Params::AHuskPawn_C_FlingerSpawnedAnEnemy_Params Parms;
	Parms.EnemySpawned = EnemySpawned;
	Parms.ProjectileThatSpawnedThisEnemy = ProjectileThatSpawnedThisEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.CanFlingerSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorWhoAsked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHuskPawn_C::CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "CanFlingerSpawnAnEnemy");

	Params::AHuskPawn_C_CanFlingerSpawnAnEnemy_Params Parms;
	Parms.ActorWhoAsked = ActorWhoAsked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.FlingerCanSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHuskPawn_C::FlingerCanSpawnAnEnemy()
{
	static auto Func = Class->GetFunction("HuskPawn_C", "FlingerCanSpawnAnEnemy");

	Params::AHuskPawn_C_FlingerCanSpawnAnEnemy_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.FlingerCan'tSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHuskPawn_C::FlingerCan_tSpawnAnEnemy()
{
	static auto Func = Class->GetFunction("HuskPawn_C", "FlingerCan'tSpawnAnEnemy");

	Params::AHuskPawn_C_FlingerCan_tSpawnAnEnemy_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.FlingerThrewAProjectileContainingAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHuskPawn_C::FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "FlingerThrewAProjectileContainingAnEnemy");

	Params::AHuskPawn_C_FlingerThrewAProjectileContainingAnEnemy_Params Parms;
	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.FlingerEnemyFailedToSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         FailedProjectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHuskPawn_C::FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "FlingerEnemyFailedToSpawn");

	Params::AHuskPawn_C_FlingerEnemyFailedToSpawn_Params Parms;
	Parms.FailedProjectile = FailedProjectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.AlertEnemySpawnedByFlinger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     PushMomentum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PushDuration                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       OwningFlinger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHuskPawn_C::AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum, float PushDuration, class APawn* OwningFlinger)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "AlertEnemySpawnedByFlinger");

	Params::AHuskPawn_C_AlertEnemySpawnedByFlinger_Params Parms;
	Parms.PushMomentum = PushMomentum;
	Parms.PushDuration = PushDuration;
	Parms.OwningFlinger = OwningFlinger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.FlingerEnemyDied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       PawnThatDied                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHuskPawn_C::FlingerEnemyDied(class APawn* PawnThatDied)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "FlingerEnemyDied");

	Params::AHuskPawn_C_FlingerEnemyDied_Params Parms;
	Parms.PawnThatDied = PawnThatDied;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.MantleStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     StartPos                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     MidPos                                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     EndPos                                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LowWall                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               MidWall                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FullWall                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               WindowWall                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHuskPawn_C::MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "MantleStart");

	Params::AHuskPawn_C_MantleStart_Params Parms;
	Parms.StartPos = StartPos;
	Parms.MidPos = MidPos;
	Parms.EndPos = EndPos;
	Parms.LowWall = LowWall;
	Parms.MidWall = MidWall;
	Parms.FullWall = FullWall;
	Parms.WindowWall = WindowWall;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.MantleEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHuskPawn_C::MantleEnd()
{
	static auto Func = Class->GetFunction("HuskPawn_C", "MantleEnd");

	Params::AHuskPawn_C_MantleEnd_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.HuskEvadeStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHuskPawn_C::HuskEvadeStart()
{
	static auto Func = Class->GetFunction("HuskPawn_C", "HuskEvadeStart");

	Params::AHuskPawn_C_HuskEvadeStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.VerifyTakerAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SpecialAttack                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Swoop                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Soul_Suck                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Portal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHuskPawn_C::VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "VerifyTakerAttack");

	Params::AHuskPawn_C_VerifyTakerAttack_Params Parms;
	Parms.SpecialAttack = SpecialAttack;
	Parms.Swoop = Swoop;
	Parms.Soul_Suck = Soul_Suck;
	Parms.Portal = Portal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.ResetTakerSpecialAttackTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Swoop                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SoulSuckMelee                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Portal                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHuskPawn_C::ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "ResetTakerSpecialAttackTimer");

	Params::AHuskPawn_C_ResetTakerSpecialAttackTimer_Params Parms;
	Parms.Swoop = Swoop;
	Parms.SoulSuckMelee = SoulSuckMelee;
	Parms.Portal = Portal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.BeginTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHuskPawn_C::BeginTakerSwoopAttack()
{
	static auto Func = Class->GetFunction("HuskPawn_C", "BeginTakerSwoopAttack");

	Params::AHuskPawn_C_BeginTakerSwoopAttack_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.EndTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHuskPawn_C::EndTakerSwoopAttack()
{
	static auto Func = Class->GetFunction("HuskPawn_C", "EndTakerSwoopAttack");

	Params::AHuskPawn_C_EndTakerSwoopAttack_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.TakerWallPortalBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      BuildingPart                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBTTask_BlueprintBase*       Task                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     DesiredMoveLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Debug                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHuskPawn_C::TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "TakerWallPortalBehavior");

	Params::AHuskPawn_C_TakerWallPortalBehavior_Params Parms;
	Parms.BuildingPart = BuildingPart;
	Parms.Task = Task;
	Parms.DesiredMoveLocation = DesiredMoveLocation;
	Parms.Debug = Debug;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.IsTakerWallPortalAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Portal_Available_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHuskPawn_C::IsTakerWallPortalAvailable(bool Portal_Available_)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "IsTakerWallPortalAvailable");

	Params::AHuskPawn_C_IsTakerWallPortalAvailable_Params Parms;
	Parms.Portal_Available_ = Portal_Available_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.TakerAttackFSM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SuccessfulHit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHuskPawn_C::TakerAttackFSM(bool SuccessfulHit)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "TakerAttackFSM");

	Params::AHuskPawn_C_TakerAttackFSM_Params Parms;
	Parms.SuccessfulHit = SuccessfulHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.TakerSoulSuckSoundBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHuskPawn_C::TakerSoulSuckSoundBegin(bool Success)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "TakerSoulSuckSoundBegin");

	Params::AHuskPawn_C_TakerSoulSuckSoundBegin_Params Parms;
	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.TakerSoulSuckSoundEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHuskPawn_C::TakerSoulSuckSoundEnd()
{
	static auto Func = Class->GetFunction("HuskPawn_C", "TakerSoulSuckSoundEnd");

	Params::AHuskPawn_C_TakerSoulSuckSoundEnd_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.PortalAdd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*              BuildingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABuildingActor*>      BuildingActorList                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AHuskPawn_C::PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>& BuildingActorList)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "PortalAdd");

	Params::AHuskPawn_C_PortalAdd_Params Parms;
	Parms.BuildingActor = BuildingActor;
	Parms.BuildingActorList = BuildingActorList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.PortalClear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHuskPawn_C::PortalClear()
{
	static auto Func = Class->GetFunction("HuskPawn_C", "PortalClear");

	Params::AHuskPawn_C_PortalClear_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.TakerSoulSuckInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHuskPawn_C::TakerSoulSuckInterrupted()
{
	static auto Func = Class->GetFunction("HuskPawn_C", "TakerSoulSuckInterrupted");

	Params::AHuskPawn_C_TakerSoulSuckInterrupted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.PortalGet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*              BuildingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABuildingActor*>      BuildingActorList                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                      BT                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHuskPawn_C::PortalGet(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>& BuildingActorList, class AActor* BT)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "PortalGet");

	Params::AHuskPawn_C_PortalGet_Params Parms;
	Parms.BuildingActor = BuildingActor;
	Parms.BuildingActorList = BuildingActorList;
	Parms.BT = BT;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.PortalFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHuskPawn_C::PortalFX()
{
	static auto Func = Class->GetFunction("HuskPawn_C", "PortalFX");

	Params::AHuskPawn_C_PortalFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.PortalCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Collide_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHuskPawn_C::PortalCollision(bool Collide_)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "PortalCollision");

	Params::AHuskPawn_C_PortalCollision_Params Parms;
	Parms.Collide_ = Collide_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.GameplayCue.Impact.Physical.Creature
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void AHuskPawn_C::GameplayCue_Impact_Physical_Creature(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "GameplayCue.Impact.Physical.Creature");

	Params::AHuskPawn_C_GameplayCue_Impact_Physical_Creature_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.GameplayCue.Shield.Reapplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void AHuskPawn_C::GameplayCue_Shield_Reapplied(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "GameplayCue.Shield.Reapplied");

	Params::AHuskPawn_C_GameplayCue_Shield_Reapplied_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.GameplayCue.Shield.Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void AHuskPawn_C::GameplayCue_Shield_Destroyed(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "GameplayCue.Shield.Destroyed");

	Params::AHuskPawn_C_GameplayCue_Shield_Destroyed_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.GameplayCue.Damage.Shielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void AHuskPawn_C::GameplayCue_Damage_Shielded(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "GameplayCue.Damage.Shielded");

	Params::AHuskPawn_C_GameplayCue_Damage_Shielded_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HuskPawn.HuskPawn_C.ExecuteUbergraph_HuskPawn
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortAIPawn*                 K2Node_Event_EnemySpawned                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         K2Node_Event_ProjectileThatSpawnedThisEnemy                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ActorWhoAsked                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         K2Node_Event_Projectile                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         K2Node_Event_FailedProjectile                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_PushMomentum                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_PushDuration                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_OwningFlinger                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_PawnThatDied                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_StartPos                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_MidPos                                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_EndPos                                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_LowWall                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_MidWall                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_FullWall                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_WindowWall                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SpecialAttack                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Swoop1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Soul_Suck                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Portal1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Swoop                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SoulSuckMelee                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Portal                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_BuildingPart                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBTTask_BlueprintBase*       K2Node_Event_Task                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_DesiredMoveLocation                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Debug                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Portal_Available_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SuccessfulHit                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Success                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABuildingActor*              K2Node_Event_BuildingActor1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABuildingActor*>      K2Node_Event_BuildingActorList1                                  (ZeroConstructor, ReferenceParm)
// class ABuildingActor*              K2Node_Event_BuildingActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABuildingActor*>      K2Node_Event_BuildingActorList                                   (ZeroConstructor, ReferenceParm)
// class AActor*                      K2Node_Event_BT                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collide_                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters3                              (ContainsInstancedReference)
// struct FHitResult                  CallFunc_GetHitResult_ReturnValue                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_GetHitResult_ReturnValue1                               (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class EPhysicalSurface        CallFunc_GetFortPhysicalSurface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_GetImpactPhysicalSurfaceSound_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location1                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal1                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal1                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart1                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd1                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// class UParticleSystem*             Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters2                              (ContainsInstancedReference)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters1                              (ContainsInstancedReference)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters                               (ContainsInstancedReference)
// enum class EPhysicalSurface        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHuskPawn_C::ExecuteUbergraph_HuskPawn(int32 EntryPoint, class UParticleSystem* Temp_object_Variable, class UParticleSystem* Temp_object_Variable1, class UParticleSystem* Temp_object_Variable2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UParticleSystem* Temp_object_Variable3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue1, class AFortAIPawn* K2Node_Event_EnemySpawned, class AFortProjectileBase* K2Node_Event_ProjectileThatSpawnedThisEnemy, class AActor* K2Node_Event_ActorWhoAsked, class AFortProjectileBase* K2Node_Event_Projectile, class AFortProjectileBase* K2Node_Event_FailedProjectile, const struct FVector& K2Node_Event_PushMomentum, float K2Node_Event_PushDuration, class APawn* K2Node_Event_OwningFlinger, class APawn* K2Node_Event_PawnThatDied, const struct FVector& K2Node_Event_StartPos, const struct FVector& K2Node_Event_MidPos, const struct FVector& K2Node_Event_EndPos, bool K2Node_Event_LowWall, bool K2Node_Event_MidWall, bool K2Node_Event_FullWall, bool K2Node_Event_WindowWall, bool K2Node_Event_SpecialAttack, bool K2Node_Event_Swoop1, bool K2Node_Event_Soul_Suck, bool K2Node_Event_Portal1, bool K2Node_Event_Swoop, bool K2Node_Event_SoulSuckMelee, bool K2Node_Event_Portal, class AActor* K2Node_Event_BuildingPart, class UBTTask_BlueprintBase* K2Node_Event_Task, const struct FVector& K2Node_Event_DesiredMoveLocation, bool K2Node_Event_Debug, bool K2Node_Event_Portal_Available_, bool K2Node_Event_SuccessfulHit, bool K2Node_Event_Success, class ABuildingActor* K2Node_Event_BuildingActor1, TArray<class ABuildingActor*>& K2Node_Event_BuildingActorList1, class ABuildingActor* K2Node_Event_BuildingActor, TArray<class ABuildingActor*>& K2Node_Event_BuildingActorList, class AActor* K2Node_Event_BT, bool K2Node_Event_Collide_, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType3, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters3, const struct FHitResult& CallFunc_GetHitResult_ReturnValue, const struct FHitResult& CallFunc_GetHitResult_ReturnValue1, enum class EPhysicalSurface CallFunc_GetFortPhysicalSurface_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class USoundBase* CallFunc_GetImpactPhysicalSurfaceSound_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit1, bool CallFunc_BreakHitResult_bInitialOverlap1, float CallFunc_BreakHitResult_Time1, float CallFunc_BreakHitResult_Distance1, const struct FVector& CallFunc_BreakHitResult_Location1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint1, const struct FVector& CallFunc_BreakHitResult_Normal1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat1, class AActor* CallFunc_BreakHitResult_HitActor1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent1, class FName CallFunc_BreakHitResult_HitBoneName1, int32 CallFunc_BreakHitResult_HitItem1, int32 CallFunc_BreakHitResult_FaceIndex1, const struct FVector& CallFunc_BreakHitResult_TraceStart1, const struct FVector& CallFunc_BreakHitResult_TraceEnd1, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class UParticleSystem* Temp_object_Variable4, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType2, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType1, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters1, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, enum class EPhysicalSurface Temp_byte_Variable, class UParticleSystem* K2Node_Select_Default, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue2)
{
	static auto Func = Class->GetFunction("HuskPawn_C", "ExecuteUbergraph_HuskPawn");

	Params::AHuskPawn_C_ExecuteUbergraph_HuskPawn_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue1 = CallFunc_IsDedicatedServer_ReturnValue1;
	Parms.K2Node_Event_EnemySpawned = K2Node_Event_EnemySpawned;
	Parms.K2Node_Event_ProjectileThatSpawnedThisEnemy = K2Node_Event_ProjectileThatSpawnedThisEnemy;
	Parms.K2Node_Event_ActorWhoAsked = K2Node_Event_ActorWhoAsked;
	Parms.K2Node_Event_Projectile = K2Node_Event_Projectile;
	Parms.K2Node_Event_FailedProjectile = K2Node_Event_FailedProjectile;
	Parms.K2Node_Event_PushMomentum = K2Node_Event_PushMomentum;
	Parms.K2Node_Event_PushDuration = K2Node_Event_PushDuration;
	Parms.K2Node_Event_OwningFlinger = K2Node_Event_OwningFlinger;
	Parms.K2Node_Event_PawnThatDied = K2Node_Event_PawnThatDied;
	Parms.K2Node_Event_StartPos = K2Node_Event_StartPos;
	Parms.K2Node_Event_MidPos = K2Node_Event_MidPos;
	Parms.K2Node_Event_EndPos = K2Node_Event_EndPos;
	Parms.K2Node_Event_LowWall = K2Node_Event_LowWall;
	Parms.K2Node_Event_MidWall = K2Node_Event_MidWall;
	Parms.K2Node_Event_FullWall = K2Node_Event_FullWall;
	Parms.K2Node_Event_WindowWall = K2Node_Event_WindowWall;
	Parms.K2Node_Event_SpecialAttack = K2Node_Event_SpecialAttack;
	Parms.K2Node_Event_Swoop1 = K2Node_Event_Swoop1;
	Parms.K2Node_Event_Soul_Suck = K2Node_Event_Soul_Suck;
	Parms.K2Node_Event_Portal1 = K2Node_Event_Portal1;
	Parms.K2Node_Event_Swoop = K2Node_Event_Swoop;
	Parms.K2Node_Event_SoulSuckMelee = K2Node_Event_SoulSuckMelee;
	Parms.K2Node_Event_Portal = K2Node_Event_Portal;
	Parms.K2Node_Event_BuildingPart = K2Node_Event_BuildingPart;
	Parms.K2Node_Event_Task = K2Node_Event_Task;
	Parms.K2Node_Event_DesiredMoveLocation = K2Node_Event_DesiredMoveLocation;
	Parms.K2Node_Event_Debug = K2Node_Event_Debug;
	Parms.K2Node_Event_Portal_Available_ = K2Node_Event_Portal_Available_;
	Parms.K2Node_Event_SuccessfulHit = K2Node_Event_SuccessfulHit;
	Parms.K2Node_Event_Success = K2Node_Event_Success;
	Parms.K2Node_Event_BuildingActor1 = K2Node_Event_BuildingActor1;
	Parms.K2Node_Event_BuildingActorList1 = K2Node_Event_BuildingActorList1;
	Parms.K2Node_Event_BuildingActor = K2Node_Event_BuildingActor;
	Parms.K2Node_Event_BuildingActorList = K2Node_Event_BuildingActorList;
	Parms.K2Node_Event_BT = K2Node_Event_BT;
	Parms.K2Node_Event_Collide_ = K2Node_Event_Collide_;
	Parms.K2Node_GameplayCueEvent_EventType3 = K2Node_GameplayCueEvent_EventType3;
	Parms.K2Node_GameplayCueEvent_Parameters3 = K2Node_GameplayCueEvent_Parameters3;
	Parms.CallFunc_GetHitResult_ReturnValue = CallFunc_GetHitResult_ReturnValue;
	Parms.CallFunc_GetHitResult_ReturnValue1 = CallFunc_GetHitResult_ReturnValue1;
	Parms.CallFunc_GetFortPhysicalSurface_ReturnValue = CallFunc_GetFortPhysicalSurface_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetImpactPhysicalSurfaceSound_ReturnValue = CallFunc_GetImpactPhysicalSurfaceSound_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit1 = CallFunc_BreakHitResult_bBlockingHit1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap1 = CallFunc_BreakHitResult_bInitialOverlap1;
	Parms.CallFunc_BreakHitResult_Time1 = CallFunc_BreakHitResult_Time1;
	Parms.CallFunc_BreakHitResult_Distance1 = CallFunc_BreakHitResult_Distance1;
	Parms.CallFunc_BreakHitResult_Location1 = CallFunc_BreakHitResult_Location1;
	Parms.CallFunc_BreakHitResult_ImpactPoint1 = CallFunc_BreakHitResult_ImpactPoint1;
	Parms.CallFunc_BreakHitResult_Normal1 = CallFunc_BreakHitResult_Normal1;
	Parms.CallFunc_BreakHitResult_ImpactNormal1 = CallFunc_BreakHitResult_ImpactNormal1;
	Parms.CallFunc_BreakHitResult_PhysMat1 = CallFunc_BreakHitResult_PhysMat1;
	Parms.CallFunc_BreakHitResult_HitActor1 = CallFunc_BreakHitResult_HitActor1;
	Parms.CallFunc_BreakHitResult_HitComponent1 = CallFunc_BreakHitResult_HitComponent1;
	Parms.CallFunc_BreakHitResult_HitBoneName1 = CallFunc_BreakHitResult_HitBoneName1;
	Parms.CallFunc_BreakHitResult_HitItem1 = CallFunc_BreakHitResult_HitItem1;
	Parms.CallFunc_BreakHitResult_FaceIndex1 = CallFunc_BreakHitResult_FaceIndex1;
	Parms.CallFunc_BreakHitResult_TraceStart1 = CallFunc_BreakHitResult_TraceStart1;
	Parms.CallFunc_BreakHitResult_TraceEnd1 = CallFunc_BreakHitResult_TraceEnd1;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_GameplayCueEvent_EventType2 = K2Node_GameplayCueEvent_EventType2;
	Parms.K2Node_GameplayCueEvent_Parameters2 = K2Node_GameplayCueEvent_Parameters2;
	Parms.K2Node_GameplayCueEvent_EventType1 = K2Node_GameplayCueEvent_EventType1;
	Parms.K2Node_GameplayCueEvent_Parameters1 = K2Node_GameplayCueEvent_Parameters1;
	Parms.K2Node_GameplayCueEvent_EventType = K2Node_GameplayCueEvent_EventType;
	Parms.K2Node_GameplayCueEvent_Parameters = K2Node_GameplayCueEvent_Parameters;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue1 = CallFunc_SpawnEmitterAtLocation_ReturnValue1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue2 = CallFunc_SpawnEmitterAtLocation_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
