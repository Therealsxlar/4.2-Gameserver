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

// 0x1BE (0x4F6 - 0x338)
// BlueprintGeneratedClass ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C
class AThreatPostProcessManagerAndParticleBlueprint_C : public AFortThreatParticleActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(Transient, DuplicateTransient)
	class UAudioComponent*                       EnterTheStormSound;                                // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Sprite1;                                           // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Ramp_Up_down_values_on_death_NewTrack_0_1CA080D642E9F1C3CB297DBE1BD2C9A4; // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Ramp_Up_down_values_on_death__Direction_1CA080D642E9F1C3CB297DBE1BD2C9A4; // 0x354(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_524D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Ramp_Up_down_values_on_death;                      // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Min_Cloud_Distance_from_player;                    // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_524E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Localized_Particle_System_MID;                     // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  NewEventDispatcher;                                // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  NewEventDispatcher0;                               // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FVector>                       Array_of_Cloud_Positions;                          // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                SkyParticleCloudDistances;                         // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int32>                                CloudDistanceToPlayerLookUpArray;                  // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                               Target_Cloud_Position;                             // 0x3C0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecalculateTimer;                                  // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Alive;                                          // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsAliveJustChanged;                                // 0x3D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsAlivePrevious;                                   // 0x3D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_524F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_alive; // 0x3D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentCloudMesh;                                  // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5250[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_dead; // 0x3DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APostProcessVolume*                    Materialpost;                                      // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Post_process_volume_falloff__around_the_threat_volume; // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowRainEffect;                                    // 0x3EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5251[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        FourClosestClouds;                                 // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int32                                        Number_Of_Volumes_to_check;                        // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x404(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostProcessTargetWeight;                           // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Current_Post_Process_Weight;                       // 0x40C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Post_Process_Fade_in_speed;                        // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SoundIsActive;                                     // 0x414(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SoundWasPreviouslyActive;                          // 0x415(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5252[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            PlayerTransform;                                   // 0x420(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_On;                                             // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5253[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APostProcessVolume*                    MaterialEffectsPostProcess;                        // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          ThreatFogPostProcessColor_Morning;                 // 0x460(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ThreatFogPostProcessColor_Day;                     // 0x470(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ThreatFogPostProcessColor_Evening;                 // 0x480(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ThreatFogPostProcessColor_Night;                   // 0x490(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBox>                          Array_of_Cloud_Volumes;                            // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        ClosestCloudIndex;                                 // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ClosestCloudDistance;                              // 0x4B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostProcessWeightModulation;                       // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ramp_Up_And_Down_Anim_Values;                      // 0x4BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowRainOnCameraLens;                              // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5254[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEmitterCameraLensEffectBase*          Rain_Camera_Lens_Effect;                           // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              LocalizedParticleSystem;                           // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsWorldReady;                                      // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5255[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Rain_Trace_Timer;                                  // 0x4DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               RainTraceOffset;                                   // 0x4E0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RainMultiplierCurrent;                             // 0x4EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Rain_Spawn_Rate_Exponent;                          // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         TracePrevious;                                     // 0x4F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsAthenaWorld;                                     // 0x4F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ThreatPostProcessManagerAndParticleBlueprint_C");
		return Clss;
	}

	void CalculatePlayerPositionNearBox(const struct FVector& BoxMin, const struct FVector& BoxMax, float* VolumePlayerCoveragePercentage, float SafeZoneRadius, float DistanceToSafeZone, const struct FVector& PlayerCameraLoc, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue2, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_FClamp_ReturnValue1, float CallFunc_FClamp_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_FClamp_ReturnValue3, float CallFunc_FClamp_ReturnValue4, float CallFunc_Subtract_FloatFloat_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue4, float CallFunc_FClamp_ReturnValue5, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue5, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_FClamp_ReturnValue6);
	void UserConstructionScript();
	void Ramp_Up_down_values_on_death__FinishedFunc();
	void Ramp_Up_down_values_on_death__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void OnThreatCloudsChanged(TArray<struct FThreatLocationInfo>& ThreatLocationInfo);
	void OnWorldReady();
	void VFX_RainTracePeriodic();
	void StartTraceTimer();
	void ForceUpdateLensEffect();
	void ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int32 EntryPoint, TArray<class AActor*>& Temp_object_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, int32 Temp_int_Array_Index_Variable1, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, float K2Node_Event_DeltaSeconds, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, int32 CallFunc_SelectInt_ReturnValue1, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_BreakColor_R1, float CallFunc_BreakColor_G1, float CallFunc_BreakColor_B1, float CallFunc_BreakColor_A1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakColor_R2, float CallFunc_BreakColor_G2, float CallFunc_BreakColor_B2, float CallFunc_BreakColor_A2, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, float CallFunc_BreakColor_R3, float CallFunc_BreakColor_G3, float CallFunc_BreakColor_B3, float CallFunc_BreakColor_A3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, float CallFunc_BreakColor_R4, float CallFunc_BreakColor_G4, float CallFunc_BreakColor_B4, float CallFunc_BreakColor_A4, TArray<struct FThreatLocationInfo>& K2Node_Event_ThreatLocationInfo, float CallFunc_Multiply_FloatFloat_ReturnValue3, const struct FThreatLocationInfo& CallFunc_Array_Get_Item, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FBox& CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue1, float CallFunc_CalculatePlayerPositionNearBox_VolumePlayerCoveragePercentage, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue4, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue5, class AEmitterCameraLensEffectBase* CallFunc_AddCameraLensEffect_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue2, class APawn* CallFunc_GetPlayerPawn_ReturnValue1, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue3, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AThreat_RainAttachedToPlayer_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue2, bool CallFunc_IsValid_ReturnValue5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue3, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue6, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue7, bool CallFunc_BooleanAND_ReturnValue4, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void NewEventDispatcher0__DelegateSignature();
	void NewEventDispatcher__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
