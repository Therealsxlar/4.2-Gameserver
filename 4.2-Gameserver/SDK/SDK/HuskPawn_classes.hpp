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

// 0x1A4 (0x2060 - 0x1EBC)
// BlueprintGeneratedClass HuskPawn.HuskPawn_C
class AHuskPawn_C : public AEnemyPawn_Parent_C
{
public:
	uint8                                        Pad_3E14[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1EC0(0x8)(Transient, DuplicateTransient)
	int32                                        HitCount;                                          // 0x1EC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastTakeHitTime;                                   // 0x1ECC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PushFromFlingerSpawn;                              // 0x1ED0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E15[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             PawnThatSpawnedMe;                                 // 0x1ED8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PawnThatSpawnedMeLocation;                         // 0x1EE0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E16[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TC_HitReactionAdditiveSingleOneShot;               // 0x1EF0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_HitReactionAdditiveLoop;                        // 0x1F10(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_HitReactionFullBody;                            // 0x1F30(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_HitReactionBlockAll;                            // 0x1F50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_HitReactionBlockMelee;                          // 0x1F70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_HitReactionBlockRanged;                         // 0x1F90(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HitReactForMelee;                                  // 0x1FB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HuskIsInFlingersHand;                              // 0x1FB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HuskIsAirborne;                                    // 0x1FB2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E17[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HuskFlingerHandOffset;                             // 0x1FB4(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              HuskFlingerHandRotation;                           // 0x1FC0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FVector                               HuskFlingerProjectileOffset;                       // 0x1FCC(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              HuskFlingerProjectileRotation;                     // 0x1FD8(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       ImpactParticles_Default;                           // 0x1FE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ImpactParticles_HumanFlesh;                        // 0x1FF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ImpactParticles_Wood;                              // 0x1FF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ImpactParticles_Stone;                             // 0x2000(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ImpactParticles_Metal;                             // 0x2008(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MeleeImpact_UseSocketTransforms;                   // 0x2010(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E19[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Impact_MeleeSocket;                                // 0x2018(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHeadshot_HideHead;                               // 0x2020(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E1A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PreviousLargestDeathRadius;                        // 0x2024(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Death_Normal_Sound;                                // 0x2028(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Death_RedLaser_Sound;                              // 0x2030(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Spawn_Dust_Particles;                              // 0x2038(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SafetyTimerDuration;                               // 0x2040(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DeathFX_HQ;                                        // 0x2044(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E1B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                ShieldSkeletalMesh;                                // 0x2048(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AShielderSpringArm_C*                  ShieldArm;                                         // 0x2050(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Diffuse_Texture;                                   // 0x2058(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HuskPawn_C");
		return Clss;
	}

	void UserConstructionScript();
	void FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy);
	void CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked);
	void FlingerCanSpawnAnEnemy();
	void FlingerCan_tSpawnAnEnemy();
	void FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile);
	void FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile);
	void AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum, float PushDuration, class APawn* OwningFlinger);
	void FlingerEnemyDied(class APawn* PawnThatDied);
	void MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall);
	void MantleEnd();
	void HuskEvadeStart();
	void VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal);
	void ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal);
	void BeginTakerSwoopAttack();
	void EndTakerSwoopAttack();
	void TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug);
	void IsTakerWallPortalAvailable(bool Portal_Available_);
	void TakerAttackFSM(bool SuccessfulHit);
	void TakerSoulSuckSoundBegin(bool Success);
	void TakerSoulSuckSoundEnd();
	void PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>& BuildingActorList);
	void PortalClear();
	void TakerSoulSuckInterrupted();
	void PortalGet(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>& BuildingActorList, class AActor* BT);
	void PortalFX();
	void PortalCollision(bool Collide_);
	void GameplayCue_Impact_Physical_Creature(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Reapplied(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Destroyed(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Damage_Shielded(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_HuskPawn(int32 EntryPoint, class UParticleSystem* Temp_object_Variable, class UParticleSystem* Temp_object_Variable1, class UParticleSystem* Temp_object_Variable2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UParticleSystem* Temp_object_Variable3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue1, class AFortAIPawn* K2Node_Event_EnemySpawned, class AFortProjectileBase* K2Node_Event_ProjectileThatSpawnedThisEnemy, class AActor* K2Node_Event_ActorWhoAsked, class AFortProjectileBase* K2Node_Event_Projectile, class AFortProjectileBase* K2Node_Event_FailedProjectile, const struct FVector& K2Node_Event_PushMomentum, float K2Node_Event_PushDuration, class APawn* K2Node_Event_OwningFlinger, class APawn* K2Node_Event_PawnThatDied, const struct FVector& K2Node_Event_StartPos, const struct FVector& K2Node_Event_MidPos, const struct FVector& K2Node_Event_EndPos, bool K2Node_Event_LowWall, bool K2Node_Event_MidWall, bool K2Node_Event_FullWall, bool K2Node_Event_WindowWall, bool K2Node_Event_SpecialAttack, bool K2Node_Event_Swoop1, bool K2Node_Event_Soul_Suck, bool K2Node_Event_Portal1, bool K2Node_Event_Swoop, bool K2Node_Event_SoulSuckMelee, bool K2Node_Event_Portal, class AActor* K2Node_Event_BuildingPart, class UBTTask_BlueprintBase* K2Node_Event_Task, const struct FVector& K2Node_Event_DesiredMoveLocation, bool K2Node_Event_Debug, bool K2Node_Event_Portal_Available_, bool K2Node_Event_SuccessfulHit, bool K2Node_Event_Success, class ABuildingActor* K2Node_Event_BuildingActor1, TArray<class ABuildingActor*>& K2Node_Event_BuildingActorList1, class ABuildingActor* K2Node_Event_BuildingActor, TArray<class ABuildingActor*>& K2Node_Event_BuildingActorList, class AActor* K2Node_Event_BT, bool K2Node_Event_Collide_, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType3, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters3, const struct FHitResult& CallFunc_GetHitResult_ReturnValue, const struct FHitResult& CallFunc_GetHitResult_ReturnValue1, enum class EPhysicalSurface CallFunc_GetFortPhysicalSurface_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class USoundBase* CallFunc_GetImpactPhysicalSurfaceSound_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit1, bool CallFunc_BreakHitResult_bInitialOverlap1, float CallFunc_BreakHitResult_Time1, float CallFunc_BreakHitResult_Distance1, const struct FVector& CallFunc_BreakHitResult_Location1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint1, const struct FVector& CallFunc_BreakHitResult_Normal1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat1, class AActor* CallFunc_BreakHitResult_HitActor1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent1, class FName CallFunc_BreakHitResult_HitBoneName1, int32 CallFunc_BreakHitResult_HitItem1, int32 CallFunc_BreakHitResult_FaceIndex1, const struct FVector& CallFunc_BreakHitResult_TraceStart1, const struct FVector& CallFunc_BreakHitResult_TraceEnd1, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class UParticleSystem* Temp_object_Variable4, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType2, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType1, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters1, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, enum class EPhysicalSurface Temp_byte_Variable, class UParticleSystem* K2Node_Select_Default, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
