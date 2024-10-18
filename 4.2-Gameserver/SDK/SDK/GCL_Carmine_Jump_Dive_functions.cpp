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


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCL_Carmine_Jump_Dive_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GCL_Carmine_Jump_Dive_C", "OnRemove");

	Params::AGCL_Carmine_Jump_Dive_C_OnRemove_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.OnStopParticleSystemSpawned
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*    SpawnedParticleSysComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCL_Carmine_Jump_Dive_C::OnStopParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GCL_Carmine_Jump_Dive_C", "OnStopParticleSystemSpawned");

	Params::AGCL_Carmine_Jump_Dive_C_OnStopParticleSystemSpawned_Params Parms;
	Parms.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.OnWhileActiveParticleSystemActivate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*    WhileActiveParticleSysComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCL_Carmine_Jump_Dive_C::OnWhileActiveParticleSystemActivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GCL_Carmine_Jump_Dive_C", "OnWhileActiveParticleSystemActivate");

	Params::AGCL_Carmine_Jump_Dive_C_OnWhileActiveParticleSystemActivate_Params Parms;
	Parms.WhileActiveParticleSysComponent = WhileActiveParticleSysComponent;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCL_Carmine_Jump_Dive_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("GCL_Carmine_Jump_Dive_C", "UserConstructionScript");

	Params::AGCL_Carmine_Jump_Dive_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.DiveTrailUpdate__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AGCL_Carmine_Jump_Dive_C::DiveTrailUpdate__FinishedFunc()
{
	static auto Func = Class->GetFunction("GCL_Carmine_Jump_Dive_C", "DiveTrailUpdate__FinishedFunc");

	Params::AGCL_Carmine_Jump_Dive_C_DiveTrailUpdate__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.DiveTrailUpdate__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AGCL_Carmine_Jump_Dive_C::DiveTrailUpdate__UpdateFunc()
{
	static auto Func = Class->GetFunction("GCL_Carmine_Jump_Dive_C", "DiveTrailUpdate__UpdateFunc");

	Params::AGCL_Carmine_Jump_Dive_C_DiveTrailUpdate__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGCL_Carmine_Jump_Dive_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("GCL_Carmine_Jump_Dive_C", "ReceiveBeginPlay");

	Params::AGCL_Carmine_Jump_Dive_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_Carmine_Jump_Dive_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("GCL_Carmine_Jump_Dive_C", "ReceiveEndPlay");

	Params::AGCL_Carmine_Jump_Dive_C_ReceiveEndPlay_Params Parms;
	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCL_Carmine_Jump_Dive_C::K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GCL_Carmine_Jump_Dive_C", "K2_HandleGameplayCue");

	Params::AGCL_Carmine_Jump_Dive_C_K2_HandleGameplayCue_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.ExecuteUbergraph_GCL_Carmine_Jump_Dive
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_Event_EventType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AGCL_Carmine_Jump_Dive_C::ExecuteUbergraph_GCL_Carmine_Jump_Dive(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult)
{
	static auto Func = Class->GetFunction("GCL_Carmine_Jump_Dive_C", "ExecuteUbergraph_GCL_Carmine_Jump_Dive");

	Params::AGCL_Carmine_Jump_Dive_C_ExecuteUbergraph_GCL_Carmine_Jump_Dive_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_EventType = K2Node_Event_EventType;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult = CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
