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


// Function SafeZoneIndicator.SafeZoneIndicator_C.GetAthenaGameState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AAthena_GameState_C*         AthenaGS                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameState_C*         K2Node_DynamicCast_AsAthena_Game_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASafeZoneIndicator_C::GetAthenaGameState(class AAthena_GameState_C** AthenaGS, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "GetAthenaGameState");

	Params::ASafeZoneIndicator_C_GetAthenaGameState_Params Parms;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Game_State = K2Node_DynamicCast_AsAthena_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AthenaGS != nullptr)
		*AthenaGS = Parms.AthenaGS;

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.UpdateAudioComponentLocations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ASafeZoneIndicator_C::UpdateAudioComponentLocations(bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult)
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "UpdateAudioComponentLocations");

	Params::ASafeZoneIndicator_C_UpdateAudioComponentLocations_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.HandleInsideOutsideMix
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::HandleInsideOutsideMix()
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "HandleInsideOutsideMix");

	Params::ASafeZoneIndicator_C_HandleInsideOutsideMix_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.InitClosestPointAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASafeZoneIndicator_C::InitClosestPointAudio(class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2)
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "InitClosestPointAudio");

	Params::ASafeZoneIndicator_C_InitClosestPointAudio_Params Parms;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue1 = CallFunc_SpawnSoundAttached_ReturnValue1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue2 = CallFunc_SpawnSoundAttached_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASafeZoneIndicator_C::UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "UserConstructionScript");

	Params::ASafeZoneIndicator_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.FadeSafeZoneVisuals__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::FadeSafeZoneVisuals__FinishedFunc()
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "FadeSafeZoneVisuals__FinishedFunc");

	Params::ASafeZoneIndicator_C_FadeSafeZoneVisuals__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.FadeSafeZoneVisuals__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::FadeSafeZoneVisuals__UpdateFunc()
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "FadeSafeZoneVisuals__UpdateFunc");

	Params::ASafeZoneIndicator_C_FadeSafeZoneVisuals__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.StormFadeTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::StormFadeTimeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "StormFadeTimeline__FinishedFunc");

	Params::ASafeZoneIndicator_C_StormFadeTimeline__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.StormFadeTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::StormFadeTimeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "StormFadeTimeline__UpdateFunc");

	Params::ASafeZoneIndicator_C_StormFadeTimeline__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortSafeZoneState      NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bInitial                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASafeZoneIndicator_C::OnSafeZoneStateChange(enum class EFortSafeZoneState NewState, bool bInitial)
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "OnSafeZoneStateChange");

	Params::ASafeZoneIndicator_C_OnSafeZoneStateChange_Params Parms;
	Parms.NewState = NewState;
	Parms.bInitial = bInitial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Apply Lowpass to Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::Apply_Lowpass_to_Audio()
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "Apply Lowpass to Audio");

	Params::ASafeZoneIndicator_C_Apply_Lowpass_to_Audio_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASafeZoneIndicator_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "ReceiveTick");

	Params::ASafeZoneIndicator_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ResetSafeZoneScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::ResetSafeZoneScale()
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "ResetSafeZoneScale");

	Params::ASafeZoneIndicator_C_ResetSafeZoneScale_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "ReceiveBeginPlay");

	Params::ASafeZoneIndicator_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.stormy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASafeZoneIndicator_C::Stormy(float NewParam)
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "stormy");

	Params::ASafeZoneIndicator_C_Stormy_Params Parms;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ASafeZoneIndicator_C::ReceiveDestroyed()
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "ReceiveDestroyed");

	Params::ASafeZoneIndicator_C_ReceiveDestroyed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ExecuteUbergraph_SafeZoneIndicator
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortSafeZoneState      K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInitial                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAnyListenersWithinRange_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimelineLength_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameState_C*         CallFunc_GetAthenaGameState_AthenaGS                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameState_C*         CallFunc_GetAthenaGameState_AthenaGS1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetServerWorldTimeSeconds_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetServerWorldTimeSeconds_ReturnValue1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetClockTickingAudioCurveValues_VolumeModValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetClockTickingAudioCurveValues_PitchModValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameState_C*         CallFunc_GetAthenaGameState_AthenaGS2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetServerWorldTimeSeconds_ReturnValue2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMovementAudioCurveValues_CrossfadeValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMovementAudioCurveValues_PitchModValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSinceSafeZonesStart_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASafeZoneIndicator_C::ExecuteUbergraph_SafeZoneIndicator(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsPlaying_ReturnValue1, enum class EFortSafeZoneState K2Node_Event_NewState, bool K2Node_Event_bInitial, bool K2Node_SwitchEnum_CmpSuccess, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Lerp_ReturnValue, bool CallFunc_AreAnyListenersWithinRange_ReturnValue, float K2Node_Select_Default, float CallFunc_FInterpTo_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, float K2Node_CustomEvent_NewParam, class AAthena_GameState_C* CallFunc_GetAthenaGameState_AthenaGS, class AAthena_GameState_C* CallFunc_GetAthenaGameState_AthenaGS1, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_GetClockTickingAudioCurveValues_VolumeModValue, float CallFunc_GetClockTickingAudioCurveValues_PitchModValue, class AAthena_GameState_C* CallFunc_GetAthenaGameState_AthenaGS2, float CallFunc_GetServerWorldTimeSeconds_ReturnValue2, float CallFunc_MapRangeUnclamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue1, float CallFunc_GetMovementAudioCurveValues_CrossfadeValue, float CallFunc_GetMovementAudioCurveValues_PitchModValue, float CallFunc_GetTimeSinceSafeZonesStart_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("SafeZoneIndicator_C", "ExecuteUbergraph_SafeZoneIndicator");

	Params::ASafeZoneIndicator_C_ExecuteUbergraph_SafeZoneIndicator_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsPlaying_ReturnValue1 = CallFunc_IsPlaying_ReturnValue1;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.K2Node_Event_bInitial = K2Node_Event_bInitial;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_AreAnyListenersWithinRange_ReturnValue = CallFunc_AreAnyListenersWithinRange_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_GetTimelineLength_ReturnValue = CallFunc_GetTimelineLength_ReturnValue;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.CallFunc_GetAthenaGameState_AthenaGS = CallFunc_GetAthenaGameState_AthenaGS;
	Parms.CallFunc_GetAthenaGameState_AthenaGS1 = CallFunc_GetAthenaGameState_AthenaGS1;
	Parms.CallFunc_GetServerWorldTimeSeconds_ReturnValue = CallFunc_GetServerWorldTimeSeconds_ReturnValue;
	Parms.CallFunc_GetServerWorldTimeSeconds_ReturnValue1 = CallFunc_GetServerWorldTimeSeconds_ReturnValue1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GetClockTickingAudioCurveValues_VolumeModValue = CallFunc_GetClockTickingAudioCurveValues_VolumeModValue;
	Parms.CallFunc_GetClockTickingAudioCurveValues_PitchModValue = CallFunc_GetClockTickingAudioCurveValues_PitchModValue;
	Parms.CallFunc_GetAthenaGameState_AthenaGS2 = CallFunc_GetAthenaGameState_AthenaGS2;
	Parms.CallFunc_GetServerWorldTimeSeconds_ReturnValue2 = CallFunc_GetServerWorldTimeSeconds_ReturnValue2;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue1 = CallFunc_MapRangeClamped_ReturnValue1;
	Parms.CallFunc_GetMovementAudioCurveValues_CrossfadeValue = CallFunc_GetMovementAudioCurveValues_CrossfadeValue;
	Parms.CallFunc_GetMovementAudioCurveValues_PitchModValue = CallFunc_GetMovementAudioCurveValues_PitchModValue;
	Parms.CallFunc_GetTimeSinceSafeZonesStart_ReturnValue = CallFunc_GetTimeSinceSafeZonesStart_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
