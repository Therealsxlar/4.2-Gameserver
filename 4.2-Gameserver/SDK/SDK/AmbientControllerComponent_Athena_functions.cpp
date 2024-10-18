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


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.SetTargetLPFFreq
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::SetTargetLPFFreq(float Target)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "SetTargetLPFFreq");

	Params::UAmbientControllerComponent_Athena_C_SetTargetLPFFreq_Params Parms;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.SetIndoorMixEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::SetIndoorMixEnabled(bool Enabled, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "SetIndoorMixEnabled");

	Params::UAmbientControllerComponent_Athena_C_SetIndoorMixEnabled_Params Parms;
	Parms.Enabled = Enabled;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Trace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Start                                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAmbientControllerComponent_Athena_C::Trace(const struct FVector& Start, const struct FVector& Direction, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "Trace");

	Params::UAmbientControllerComponent_Athena_C_Trace_Params Parms;
	Parms.Start = Start;
	Parms.Direction = Direction;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Crossfade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  NewSound                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  NewSoundLocal                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::Crossfade(class USoundBase* NewSound, class USoundBase* NewSoundLocal, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue1)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "Crossfade");

	Params::UAmbientControllerComponent_Athena_C_Crossfade_Params Parms;
	Parms.NewSound = NewSound;
	Parms.NewSoundLocal = NewSoundLocal;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue1 = CallFunc_SpawnSound2D_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.RegisterTimeOfDayCallbacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAmbientControllerComponent_Athena_C::RegisterTimeOfDayCallbacks()
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "RegisterTimeOfDayCallbacks");

	Params::UAmbientControllerComponent_Athena_C_RegisterTimeOfDayCallbacks_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UAmbientControllerComponent_Athena_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "ReceiveBeginPlay");

	Params::UAmbientControllerComponent_Athena_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "ReceiveEndPlay");

	Params::UAmbientControllerComponent_Athena_C_ReceiveEndPlay_Params Parms;
	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.OnCheckIfSurrounded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAmbientControllerComponent_Athena_C::OnCheckIfSurrounded()
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "OnCheckIfSurrounded");

	Params::UAmbientControllerComponent_Athena_C_OnCheckIfSurrounded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Evaluate Inside State
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAmbientControllerComponent_Athena_C::Evaluate_Inside_State()
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "Evaluate Inside State");

	Params::UAmbientControllerComponent_Athena_C_Evaluate_Inside_State_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Day Phase Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDayPhase           CurrentDayPhase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           PreviousDayPhase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAtCreation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAmbientControllerComponent_Athena_C::On_Day_Phase_Change(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "On Day Phase Change");

	Params::UAmbientControllerComponent_Athena_C_On_Day_Phase_Change_Params Parms;
	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "ReceiveTick");

	Params::UAmbientControllerComponent_Athena_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Game Phase Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaGamePhase        GamePhase                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::On_Game_Phase_Change(enum class EAthenaGamePhase GamePhase)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "On Game Phase Change");

	Params::UAmbientControllerComponent_Athena_C_On_Game_Phase_Change_Params Parms;
	Parms.GamePhase = GamePhase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.On Game Phase Step Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmbientControllerComponent_Athena_C::On_Game_Phase_Step_Change(enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "On Game Phase Step Change");

	Params::UAmbientControllerComponent_Athena_C_On_Game_Phase_Step_Change_Params Parms;
	Parms.GamePhaseStep = GamePhaseStep;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.Set Storm Amb Layer Enabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAmbientControllerComponent_Athena_C::Set_Storm_Amb_Layer_Enabled(bool Enabled)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "Set Storm Amb Layer Enabled");

	Params::UAmbientControllerComponent_Athena_C_Set_Storm_Amb_Layer_Enabled_Params Parms;
	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AmbientControllerComponent_Athena.AmbientControllerComponent_Athena_C.ExecuteUbergraph_AmbientControllerComponent_Athena
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDayPhase           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDayPhase           Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetViewTarget_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           K2Node_CustomEvent_CurrentDayPhase                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           K2Node_CustomEvent_PreviousDayPhase                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bAtCreation                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetViewTarget_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Trace_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Trace_ReturnValue1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Trace_ReturnValue2                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Trace_ReturnValue3                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Trace_ReturnValue4                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaGamePhase        K2Node_CustomEvent_GamePhase                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaGamePhaseStep    K2Node_CustomEvent_GamePhaseStep                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Enabled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAmbientControllerComponent_Athena_C::ExecuteUbergraph_AmbientControllerComponent_Athena(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, enum class EFortDayPhase Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, enum class EFortDayPhase Temp_byte_Variable1, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue1, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, enum class EFortDayPhase K2Node_CustomEvent_CurrentDayPhase, enum class EFortDayPhase K2Node_CustomEvent_PreviousDayPhase, bool K2Node_CustomEvent_bAtCreation, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class USoundBase* K2Node_Select_Default, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue1, class AActor* CallFunc_GetViewTarget_ReturnValue1, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, class USoundBase* K2Node_Select1_Default, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, bool CallFunc_Trace_ReturnValue, bool CallFunc_Trace_ReturnValue1, bool CallFunc_Trace_ReturnValue2, bool CallFunc_Trace_ReturnValue3, bool CallFunc_Trace_ReturnValue4, float K2Node_Event_DeltaSeconds, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess1, enum class EAthenaGamePhase K2Node_CustomEvent_GamePhase, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool K2Node_SwitchEnum_CmpSuccess, enum class EAthenaGamePhaseStep K2Node_CustomEvent_GamePhaseStep, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool K2Node_SwitchEnum1_CmpSuccess, bool K2Node_CustomEvent_Enabled, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsBROnly_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("AmbientControllerComponent_Athena_C", "ExecuteUbergraph_AmbientControllerComponent_Athena");

	Params::UAmbientControllerComponent_Athena_C_ExecuteUbergraph_AmbientControllerComponent_Athena_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetViewTarget_ReturnValue = CallFunc_GetViewTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.K2Node_CustomEvent_CurrentDayPhase = K2Node_CustomEvent_CurrentDayPhase;
	Parms.K2Node_CustomEvent_PreviousDayPhase = K2Node_CustomEvent_PreviousDayPhase;
	Parms.K2Node_CustomEvent_bAtCreation = K2Node_CustomEvent_bAtCreation;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue1 = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue1;
	Parms.CallFunc_GetViewTarget_ReturnValue1 = CallFunc_GetViewTarget_ReturnValue1;
	Parms.CallFunc_GetActorUpVector_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = CallFunc_Multiply_VectorFloat_ReturnValue1;
	Parms.CallFunc_Trace_ReturnValue = CallFunc_Trace_ReturnValue;
	Parms.CallFunc_Trace_ReturnValue1 = CallFunc_Trace_ReturnValue1;
	Parms.CallFunc_Trace_ReturnValue2 = CallFunc_Trace_ReturnValue2;
	Parms.CallFunc_Trace_ReturnValue3 = CallFunc_Trace_ReturnValue3;
	Parms.CallFunc_Trace_ReturnValue4 = CallFunc_Trace_ReturnValue4;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_CustomEvent_GamePhase = K2Node_CustomEvent_GamePhase;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_GamePhaseStep = K2Node_CustomEvent_GamePhaseStep;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.K2Node_CustomEvent_Enabled = K2Node_CustomEvent_Enabled;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
