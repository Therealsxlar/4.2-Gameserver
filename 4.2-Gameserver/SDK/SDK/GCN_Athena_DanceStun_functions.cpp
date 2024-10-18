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


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGCN_Athena_DanceStun_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GCN_Athena_DanceStun_C", "OnRemove");

	Params::AGCN_Athena_DanceStun_C_OnRemove_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena = K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCN_Athena_DanceStun_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GCN_Athena_DanceStun_C", "OnActive");

	Params::AGCN_Athena_DanceStun_C_OnActive_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Athena_DanceStun_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("GCN_Athena_DanceStun_C", "UserConstructionScript");

	Params::AGCN_Athena_DanceStun_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.IntroAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AGCN_Athena_DanceStun_C::IntroAnim__FinishedFunc()
{
	static auto Func = Class->GetFunction("GCN_Athena_DanceStun_C", "IntroAnim__FinishedFunc");

	Params::AGCN_Athena_DanceStun_C_IntroAnim__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.IntroAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AGCN_Athena_DanceStun_C::IntroAnim__UpdateFunc()
{
	static auto Func = Class->GetFunction("GCN_Athena_DanceStun_C", "IntroAnim__UpdateFunc");

	Params::AGCN_Athena_DanceStun_C_IntroAnim__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OutroAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AGCN_Athena_DanceStun_C::OutroAnim__FinishedFunc()
{
	static auto Func = Class->GetFunction("GCN_Athena_DanceStun_C", "OutroAnim__FinishedFunc");

	Params::AGCN_Athena_DanceStun_C_OutroAnim__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OutroAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AGCN_Athena_DanceStun_C::OutroAnim__UpdateFunc()
{
	static auto Func = Class->GetFunction("GCN_Athena_DanceStun_C", "OutroAnim__UpdateFunc");

	Params::AGCN_Athena_DanceStun_C_OutroAnim__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Athena_DanceStun_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("GCN_Athena_DanceStun_C", "ReceiveTick");

	Params::AGCN_Athena_DanceStun_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.AnimateIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Athena_DanceStun_C::AnimateIn()
{
	static auto Func = Class->GetFunction("GCN_Athena_DanceStun_C", "AnimateIn");

	Params::AGCN_Athena_DanceStun_C_AnimateIn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.AnimateOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Athena_DanceStun_C::AnimateOut()
{
	static auto Func = Class->GetFunction("GCN_Athena_DanceStun_C", "AnimateOut");

	Params::AGCN_Athena_DanceStun_C_AnimateOut_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.ExecuteUbergraph_GCN_Athena_DanceStun
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue1                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddLocalRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AGCN_Athena_DanceStun_C::ExecuteUbergraph_GCN_Athena_DanceStun(int32 EntryPoint, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue1, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult)
{
	static auto Func = Class->GetFunction("GCN_Athena_DanceStun_C", "ExecuteUbergraph_GCN_Athena_DanceStun");

	Params::AGCN_Athena_DanceStun_C_ExecuteUbergraph_GCN_Athena_DanceStun_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue1 = CallFunc_Conv_FloatToVector_ReturnValue1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_AddLocalRotation_SweepHitResult = CallFunc_K2_AddLocalRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
