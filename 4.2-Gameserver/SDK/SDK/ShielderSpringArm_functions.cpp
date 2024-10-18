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


// Function ShielderSpringArm.ShielderSpringArm_C.Spline Points
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShielderPawn_C*             K2Node_DynamicCast_AsShielder_Pawn                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue1                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShielderSpringArm_C::Spline_Points(class AShielderPawn_C* K2Node_DynamicCast_AsShielder_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "Spline Points");

	Params::AShielderSpringArm_C_Spline_Points_Params Parms;
	Parms.K2Node_DynamicCast_AsShielder_Pawn = K2Node_DynamicCast_AsShielder_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue1 = CallFunc_GetSocketLocation_ReturnValue1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X1 = CallFunc_BreakVector_X1;
	Parms.CallFunc_BreakVector_Y1 = CallFunc_BreakVector_Y1;
	Parms.CallFunc_BreakVector_Z1 = CallFunc_BreakVector_Z1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "UserConstructionScript");

	Params::AShielderSpringArm_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "Timeline_0__FinishedFunc");

	Params::AShielderSpringArm_C_Timeline_0__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "Timeline_0__UpdateFunc");

	Params::AShielderSpringArm_C_Timeline_0__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.PulseRelease__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::PulseRelease__FinishedFunc()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "PulseRelease__FinishedFunc");

	Params::AShielderSpringArm_C_PulseRelease__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.PulseRelease__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::PulseRelease__UpdateFunc()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "PulseRelease__UpdateFunc");

	Params::AShielderSpringArm_C_PulseRelease__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.BuildUp__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::BuildUp__FinishedFunc()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "BuildUp__FinishedFunc");

	Params::AShielderSpringArm_C_BuildUp__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.BuildUp__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::BuildUp__UpdateFunc()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "BuildUp__UpdateFunc");

	Params::AShielderSpringArm_C_BuildUp__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.Conjure_BuildUp__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::Conjure_BuildUp__FinishedFunc()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "Conjure_BuildUp__FinishedFunc");

	Params::AShielderSpringArm_C_Conjure_BuildUp__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.Conjure_BuildUp__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::Conjure_BuildUp__UpdateFunc()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "Conjure_BuildUp__UpdateFunc");

	Params::AShielderSpringArm_C_Conjure_BuildUp__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShielderSpringArm_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "ReceiveTick");

	Params::AShielderSpringArm_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::ReceiveDestroyed()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "ReceiveDestroyed");

	Params::AShielderSpringArm_C_ReceiveDestroyed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.Beam_Removal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::Beam_Removal()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "Beam_Removal");

	Params::AShielderSpringArm_C_Beam_Removal_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.Beam_Spawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Origin                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShielderSpringArm_C::Beam_Spawn(class AActor* Origin)
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "Beam_Spawn");

	Params::AShielderSpringArm_C_Beam_Spawn_Params Parms;
	Parms.Origin = Origin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::FadeOut()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "FadeOut");

	Params::AShielderSpringArm_C_FadeOut_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.FadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::FadeIn()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "FadeIn");

	Params::AShielderSpringArm_C_FadeIn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.Pulse Shielder Release
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::Pulse_Shielder_Release()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "Pulse Shielder Release");

	Params::AShielderSpringArm_C_Pulse_Shielder_Release_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.ShieldMeshSetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::ShieldMeshSetup()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "ShieldMeshSetup");

	Params::AShielderSpringArm_C_ShieldMeshSetup_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.PulseBuildUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::PulseBuildUp()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "PulseBuildUp");

	Params::AShielderSpringArm_C_PulseBuildUp_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.Hit Flash FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::Hit_Flash_FX()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "Hit Flash FX");

	Params::AShielderSpringArm_C_Hit_Flash_FX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.Conjure
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::Conjure()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "Conjure");

	Params::AShielderSpringArm_C_Conjure_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.ExecuteUbergraph_ShielderSpringArm
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Origin                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AShielderPawn_C*             K2Node_DynamicCast_AsShielder_Pawn                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AShielderPawn_C*             K2Node_DynamicCast_AsShielder_Pawn1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue1                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue2                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue1                     (IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue1                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void AShielderSpringArm_C::ExecuteUbergraph_ShielderSpringArm(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, class AActor* K2Node_CustomEvent_Origin, class AShielderPawn_C* K2Node_DynamicCast_AsShielder_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, float K2Node_Event_DeltaSeconds, class AShielderPawn_C* K2Node_DynamicCast_AsShielder_Pawn1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue5, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue2, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue7, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue1, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue8, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue1)
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "ExecuteUbergraph_ShielderSpringArm");

	Params::AShielderSpringArm_C_ExecuteUbergraph_ShielderSpringArm_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.K2Node_CustomEvent_Origin = K2Node_CustomEvent_Origin;
	Parms.K2Node_DynamicCast_AsShielder_Pawn = K2Node_DynamicCast_AsShielder_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue1 = CallFunc_SpawnEmitterAttached_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_DynamicCast_AsShielder_Pawn1 = K2Node_DynamicCast_AsShielder_Pawn1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_GetSocketLocation_ReturnValue1 = CallFunc_GetSocketLocation_ReturnValue1;
	Parms.CallFunc_GetSocketLocation_ReturnValue2 = CallFunc_GetSocketLocation_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue1 = CallFunc_K2_GetComponentToWorld_ReturnValue1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult1 = CallFunc_K2_SetWorldTransform_SweepHitResult1;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue1 = CallFunc_Conv_FloatToVector_ReturnValue1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue1 = CallFunc_GetGameTimeInSeconds_ReturnValue1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue1 = CallFunc_K2_AttachToComponent_ReturnValue1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue1 = CallFunc_IsDedicatedServer_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
