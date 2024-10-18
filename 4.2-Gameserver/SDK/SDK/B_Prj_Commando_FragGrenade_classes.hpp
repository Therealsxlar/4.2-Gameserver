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

// 0x2D0 (0x998 - 0x6C8)
// BlueprintGeneratedClass B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C
class AB_Prj_Commando_FragGrenade_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6C8(0x8)(Transient, DuplicateTransient)
	class UCapsuleComponent*                     OverlapCapsule;                                    // 0x6D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x6D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Fuse_Particle;                                     // 0x6E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x6E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       GrenadeFuse_AudioComponent;                        // 0x6F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Effect_Distance;                                   // 0x6F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_Explosion;                                       // 0x700(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitLocation;                                       // 0x708(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5383[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Cue_DistantSound;                                  // 0x718(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_CloseSound;                                    // 0x720(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplosionRadius;                                   // 0x728(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        NumberOfBouncesTillExplode;                        // 0x72C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentNumberOfBounces;                            // 0x730(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5384[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Cue_GrenadeFuseSound;                              // 0x738(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BouncePawnAgainstPawnGravityScale;                 // 0x740(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5385[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            StoredHit;                                         // 0x748(0x88)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, ContainsInstancedReference)
	class UForceFeedbackEffect*                  ExplosionForceFeedbackNear;                        // 0x7D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ExplosionForceFeedbackFar;                         // 0x7D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxClusterGrenades;                                // 0x7E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5386[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          EC_ClusterExplosion;                               // 0x7E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasCluster;                                       // 0x7F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_5387[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Prj_Cluster;                                       // 0x7F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      ClusterContainerSpec;                              // 0x800(0x80)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bHasKeepOut;                                       // 0x880(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5388[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortGameplayEffectContainerSpec      KeepOutContainerSpec;                              // 0x888(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                AOE_KeepOut;                                       // 0x908(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasClusterTactical;                               // 0x910(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_5389[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortGameplayEffectContainerSpec      Cluster_Tactical_Container_Spec;                   // 0x918(0x80)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Commando_FragGrenade_C");
		return Clss;
	}

	void SpawnKeepOut(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class AFortAreaOfEffectCloud* CallFunc_SpawnAreaOfEffectCloud_ReturnValue, class AAOE_Commando_KeepOutExplosion_C* K2Node_DynamicCast_AsAOE_Commando_Keep_Out_Explosion, bool K2Node_DynamicCast_bSuccess);
	void SpawnClusters(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_Variable, float CallFunc_RandomFloatInRange_ReturnValue2, int32 Temp_int_Variable, const struct FFortGameplayEffectContainerSpec& K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	float CalcGrenadeSpeed(float Angle, float GrenadeSpeedMin, float GrenadeSpeedMax, float MaxSpeedPitch, float MinSpeedPitch, float CallFunc_NormalizeAxis_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue);
	void OnRep_StoredHit(bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd);
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue);
	void ReceiveBeginPlay();
	void OnStop(struct FHitResult& Hit);
	void Stop_Rotation();
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnBounce(struct FHitResult& Hit);
	void BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void On_Destroy_Grenade(class AActor* DestroyedActor);
	void Bind_Destroy_Grenade();
	void Force_On_Exploded_Effects();
	void Unbind_Destroy_Grenade();
	void TriggerDoExplsoion();
	void ReceiveDestroyed();
	void CheckKeepOutAndCluster();
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, const struct FHitResult& K2Node_Event_Hit1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class AController* CallFunc_GetInstigatorController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable1, bool CallFunc_OnSameTeam_ReturnValue, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable3, bool Temp_bool_IsClosed_Variable1, bool Temp_bool_IsClosed_Variable2, bool Temp_bool_IsClosed_Variable3, float CallFunc_Multiply_FloatFloat_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_BreakHitResult_bBlockingHit1, bool CallFunc_BreakHitResult_bInitialOverlap1, float CallFunc_BreakHitResult_Time1, float CallFunc_BreakHitResult_Distance1, const struct FVector& CallFunc_BreakHitResult_Location1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint1, const struct FVector& CallFunc_BreakHitResult_Normal1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat1, class AActor* CallFunc_BreakHitResult_HitActor1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent1, class FName CallFunc_BreakHitResult_HitBoneName1, int32 CallFunc_BreakHitResult_HitItem1, int32 CallFunc_BreakHitResult_FaceIndex1, const struct FVector& CallFunc_BreakHitResult_TraceStart1, const struct FVector& CallFunc_BreakHitResult_TraceEnd1, class APawn* K2Node_DynamicCast_AsPawn1, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, bool Temp_bool_IsClosed_Variable4, bool Temp_bool_Has_Been_Initd_Variable4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float CallFunc_Abs_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, bool CallFunc_NotEqual_ObjectObject_ReturnValue1, class AActor* K2Node_CustomEvent_DestroyedActor, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
