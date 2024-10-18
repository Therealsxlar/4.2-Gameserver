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

// 0xC0 (0x4E0 - 0x420)
// BlueprintGeneratedClass GCN_Hoverboard_Running.GCN_Hoverboard_Running_C
class AGCN_Hoverboard_Running_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(Transient, DuplicateTransient)
	struct FLinearColor                          Spawnin_Color_9CDC88F8422A5E3495C4D286D1223B9D;    // 0x428(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spawnin_Dissolve_9CDC88F8422A5E3495C4D286D1223B9D; // 0x438(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Spawnin__Direction_9CDC88F8422A5E3495C4D286D1223B9D; // 0x43C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4307[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Spawnin;                                           // 0x440(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Generic_C*                 OwningPlayer;                                      // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SND_HoverboardLoopAsset;                           // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SND_HoverboardLoop;                                // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bJumpActive;                                       // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4308[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentSpeed;                                      // 0x464(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NextSpeed;                                         // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delta;                                             // 0x46C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SND_HoverboardSound_JumpAsset;                     // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SND_HoverboardSound_AccelerateAsset;               // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SND_HoverboardSound_Accelerate;                    // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TickRate;                                          // 0x488(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4309[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       SND_HoverboardStart;                               // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SND_HoverboardSound_StartAsset;                    // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_HoverboardComponent;                            // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              IdleFX;                                            // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              BoostFX;                                           // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              LSmokeTrail;                                       // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              RSmokeTrail;                                       // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NoiseRadius;                                       // 0x4C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_430A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Target;                                            // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          SetupTimerHandle;                                  // 0x4D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Hoverboard_Running_C");
		return Clss;
	}

	float GetPlayerLeanValuePercent(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortPlayerAnimInstance* K2Node_DynamicCast_AsFort_Player_Anim_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue);
	void GetHoverboardSkeletal(class USkeletalMeshComponent** SK_HoverboardComponent, bool CallFunc_IsValid_ReturnValue);
	void ClearSounds(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess);
	bool PlayerIsAccelerating(bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue);
	bool PlayerIsDecelerating(bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool IsPlayerJumping(const struct FVector& InVec, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, float CallFunc_SignOfFloat_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UserConstructionScript();
	void Spawnin__FinishedFunc();
	void Spawnin__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void K2_OnReset();
	void OnJump();
	void Idle();
	void Moving();
	void OnSpawnedIn();
	void OnDespawned();
	void ResetSpawnIn();
	void BindSetup();
	void Setup();
	void ExecuteUbergraph_GCN_Hoverboard_Running(int32 EntryPoint, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool Temp_bool_IsClosed_Variable, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue1, bool Temp_bool_IsClosed_Variable1, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable2, float CallFunc_FInterpTo_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float CallFunc_FInterpEaseInOut_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FVector& CallFunc_GetVelocity_ReturnValue1, bool CallFunc_PlayerIsDecelerating_ReturnValue, bool CallFunc_IsPlayerJumping_ReturnValue, bool CallFunc_PlayerIsAccelerating_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, class USkeletalMeshComponent* CallFunc_GetHoverboardSkeletal_SK_HoverboardComponent, class USkeletalMeshComponent* CallFunc_GetHoverboardSkeletal_SK_HoverboardComponent1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, class USkeletalMeshComponent* CallFunc_GetHoverboardSkeletal_SK_HoverboardComponent2, class USkeletalMeshComponent* CallFunc_GetHoverboardSkeletal_SK_HoverboardComponent3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue3, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetHoverboardSkeletal_SK_HoverboardComponent4, class USkeletalMeshComponent* CallFunc_GetHoverboardSkeletal_SK_HoverboardComponent5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable2, class USkeletalMeshComponent* CallFunc_GetHoverboardSkeletal_SK_HoverboardComponent6, class USkeletalMeshComponent* CallFunc_GetHoverboardSkeletal_SK_HoverboardComponent7);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
