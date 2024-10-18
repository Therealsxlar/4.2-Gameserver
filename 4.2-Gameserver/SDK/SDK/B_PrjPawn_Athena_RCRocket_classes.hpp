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

// 0x151 (0x2021 - 0x1ED0)
// BlueprintGeneratedClass B_PrjPawn_Athena_RCRocket.B_PrjPawn_Athena_RCRocket_C
class AB_PrjPawn_Athena_RCRocket_C : public AFortRemoteControlledPawnAthena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1ED0(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              Jet_Launch;                                        // 0x1ED8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         RideBox;                                           // 0x1EE0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         HitBox;                                            // 0x1EE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPoseableMeshComponent*                PoseableMissileMesh;                               // 0x1EF0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              BlinkingLight;                                     // 0x1EF8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  LoadMissile;                                       // 0x1F00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Jet;                                               // 0x1F08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MissileInAirBankingAudio;                          // 0x1F10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MissileInAirAudio;                                 // 0x1F18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ScaleUpRocket_ScaleRocket_AE4726BD4835EF8E9D886681DC468461; // 0x1F20(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleUpRocket__Direction_AE4726BD4835EF8E9D886681DC468461; // 0x1F2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5323[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleUpRocket;                                     // 0x1F30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDetached;                                         // 0x1F38(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         bTransformed;                                      // 0x1F39(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5324[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            ExplosionSound;                                    // 0x1F40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ExplosionPS;                                       // 0x1F48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       TransformationPS;                                  // 0x1F50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            TransformationSound;                               // 0x1F58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Tick_Delta;                                        // 0x1F60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CurrentVector;                                     // 0x1F64(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PreviousVector;                                    // 0x1F70(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LevelOutRotation;                                  // 0x1F7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Turn_Rate;                                         // 0x1F80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BankingAudioVolume;                                // 0x1F84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BankingAudioPitch;                                 // 0x1F88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TurnAudioModulator;                                // 0x1F8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TurnAudioModulatorMax;                             // 0x1F90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5325[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LeftWing;                                          // 0x1F98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RightWing;                                         // 0x1FA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TopWing;                                           // 0x1FA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BottomWing;                                        // 0x1FB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_RCRocket_Launcher_Athena_C*         MissileLauncher;                                   // 0x1FB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          SwapToIdleAnim;                                    // 0x1FC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ControllerAnim;                                    // 0x1FC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutTime;                                       // 0x1FD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBeforeMeshSwap;                               // 0x1FD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxFuelAmount;                                     // 0x1FD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5326[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          FuelTimer;                                         // 0x1FE0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class USoundBase*                            MissileInAirSound;                                 // 0x1FE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            MissileLowFuelSound;                               // 0x1FF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Missile_LowFuelWarning;                            // 0x1FF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ControllerRocketFX;                                // 0x2000(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ScreenSoundComponent;                              // 0x2008(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayToggleRC_Vis;                                 // 0x2010(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5327[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       HologramRocket;                                    // 0x2018(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasPlayedFuelWarningSound;                        // 0x2020(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_PrjPawn_Athena_RCRocket_C");
		return Clss;
	}

	void FuelLevelVisuals(bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void OnRep_bDetached();
	void UserConstructionScript();
	void ScaleUpRocket__FinishedFunc();
	void ScaleUpRocket__UpdateFunc();
	void OnNotifyEnd_1C6565004725732561E54185F8C600B6(class FName NotifyName);
	void OnNotifyBegin_1C6565004725732561E54185F8C600B6(class FName NotifyName);
	void OnInterrupted_1C6565004725732561E54185F8C600B6(class FName NotifyName);
	void OnBlendOut_1C6565004725732561E54185F8C600B6(class FName NotifyName);
	void OnCompleted_1C6565004725732561E54185F8C600B6(class FName NotifyName);
	void OnNotifyEnd_FCA2D54B4941303C809ADFA4DDC7D622(class FName NotifyName);
	void OnNotifyBegin_FCA2D54B4941303C809ADFA4DDC7D622(class FName NotifyName);
	void OnInterrupted_FCA2D54B4941303C809ADFA4DDC7D622(class FName NotifyName);
	void OnBlendOut_FCA2D54B4941303C809ADFA4DDC7D622(class FName NotifyName);
	void OnCompleted_FCA2D54B4941303C809ADFA4DDC7D622(class FName NotifyName);
	void ReceiveBeginPlay();
	void ReceiveUnpossessed(class AController* OldController);
	void OnTriggeredHealthThreshold(float PreviousTriggeredHealthThreshold, float CurrentTriggeredHealthThreshold);
	void ReceiveTick(float DeltaSeconds);
	void OnDoKill();
	void Multicast_HandleOnKill();
	void SetPreviousVector();
	void LevelOutMissile();
	void Handle_Movement_Audio();
	void ResetWeapon();
	void StartFuelTimer();
	void OnClientSetupRemoteControlPawn();
	void ExecuteUbergraph_B_PrjPawn_Athena_RCRocket(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName6, class FName K2Node_CustomEvent_NotifyName5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class FName K2Node_CustomEvent_NotifyName4, class FName K2Node_CustomEvent_NotifyName3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class FName K2Node_CustomEvent_NotifyName2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class FName K2Node_CustomEvent_NotifyName1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class FName K2Node_CustomEvent_NotifyName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class FName Temp_name_Variable1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, class AController* K2Node_Event_OldController, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable1, float K2Node_Event_PreviousTriggeredHealthThreshold, float K2Node_Event_CurrentTriggeredHealthThreshold, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_NotEqual_VectorVector_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_Multiply_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool Temp_bool_IsClosed_Variable1, bool CallFunc_Greater_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue5, float CallFunc_Add_FloatFloat_ReturnValue2, const struct FRotator& CallFunc_MakeRotator_ReturnValue1, float CallFunc_FMin_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue6, float CallFunc_Subtract_FloatFloat_ReturnValue1, const struct FRotator& CallFunc_MakeRotator_ReturnValue2, float CallFunc_FMax_ReturnValue1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue1, class FName K2Node_CustomEvent_NotifyName7, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue1, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_DegAcos_ReturnValue, float CallFunc_Abs_ReturnValue1, const struct FLinearColor& Temp_struct_Variable, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable2, bool CallFunc_IsDedicatedServer_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool Temp_bool_IsClosed_Variable2, bool CallFunc_IsPlaying_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class FName K2Node_CustomEvent_NotifyName8, bool Temp_bool_Has_Been_Initd_Variable3, const struct FLinearColor& Temp_struct_Variable1, bool CallFunc_IsDedicatedServer_ReturnValue2, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult1, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, float CallFunc_BreakRotator_Roll2, float CallFunc_BreakRotator_Pitch2, float CallFunc_BreakRotator_Yaw2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult2, float CallFunc_Multiply_FloatFloat_ReturnValue7, float CallFunc_Multiply_FloatFloat_ReturnValue8, const struct FRotator& CallFunc_MakeRotator_ReturnValue3, const struct FRotator& CallFunc_MakeRotator_ReturnValue4, float CallFunc_Multiply_FloatFloat_ReturnValue9, float CallFunc_Multiply_FloatFloat_ReturnValue10, const struct FRotator& CallFunc_MakeRotator_ReturnValue5, const struct FRotator& CallFunc_MakeRotator_ReturnValue6, float CallFunc_Multiply_FloatFloat_ReturnValue11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, const struct FRotator& CallFunc_MakeRotator_ReturnValue7, float CallFunc_Multiply_FloatFloat_ReturnValue12, class FName K2Node_CustomEvent_NotifyName9, const struct FRotator& CallFunc_MakeRotator_ReturnValue8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, float CallFunc_Multiply_FloatFloat_ReturnValue13, float CallFunc_Multiply_FloatFloat_ReturnValue14, const struct FRotator& CallFunc_MakeRotator_ReturnValue9, const struct FRotator& CallFunc_MakeRotator_ReturnValue10, float CallFunc_Multiply_FloatFloat_ReturnValue15, float CallFunc_Multiply_FloatFloat_ReturnValue16, const struct FRotator& CallFunc_MakeRotator_ReturnValue11, const struct FRotator& CallFunc_MakeRotator_ReturnValue12, bool Temp_bool_IsClosed_Variable3, bool Temp_bool_IsClosed_Variable4, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue17, const struct FRotator& CallFunc_MakeRotator_ReturnValue13, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class AB_RCRocket_Launcher_Athena_C* K2Node_DynamicCast_AsB_RCRocket_Launcher_Athena, bool K2Node_DynamicCast_bSuccess, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool K2Node_SwitchEnum_CmpSuccess, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, float CallFunc_PlayAnimMontage_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_OnSameTeam_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, const struct FLinearColor& K2Node_Select_Default, bool Temp_bool_Has_Been_Initd_Variable4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsVisible_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsDead_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
