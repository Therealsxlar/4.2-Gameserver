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


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DoesUseInstagorInsteadOfImpulseDirection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     OptionalObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                GT_IgnoreImpulseDirection                                        (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameplayEffect*             K2Node_DynamicCast_AsGameplay_Effect                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_EffectContextGetSourceObject_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_GenericApplyKnockback_C::DoesUseInstagorInsteadOfImpulseDirection(const struct FGameplayEffectContextHandle& EffectContext, class UObject* OptionalObject, bool* Value, const struct FGameplayTag& GT_IgnoreImpulseDirection, bool Temp_bool_Variable, class UGameplayEffect* K2Node_DynamicCast_AsGameplay_Effect, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "DoesUseInstagorInsteadOfImpulseDirection");

	Params::UGAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection_Params Parms;
	Parms.EffectContext = EffectContext;
	Parms.OptionalObject = OptionalObject;
	Parms.GT_IgnoreImpulseDirection = GT_IgnoreImpulseDirection;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsGameplay_Effect = K2Node_DynamicCast_AsGameplay_Effect;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EffectContextGetSourceObject_ReturnValue = CallFunc_EffectContextGetSourceObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.GetPawnFromInstigator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InActor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             OutPawn                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateZone*        K2Node_DynamicCast_AsFort_Player_State_Zone                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetCurrentPawn_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_GenericApplyKnockback_C::GetPawnFromInstigator(class AActor* InActor, class AFortPlayerPawn** OutPawn, class AFortPlayerStateZone* K2Node_DynamicCast_AsFort_Player_State_Zone, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetCurrentPawn_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "GetPawnFromInstigator");

	Params::UGAB_GenericApplyKnockback_C_GetPawnFromInstigator_Params Parms;
	Parms.InActor = InActor;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Zone = K2Node_DynamicCast_AsFort_Player_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentPawn_ReturnValue = CallFunc_GetCurrentPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPawn != nullptr)
		*OutPawn = Parms.OutPawn;

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.CalculateImpulseDirection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             InPawn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue1                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FVector UGAB_GenericApplyKnockback_C::CalculateImpulseDirection(class AFortPlayerPawn* InPawn, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue1, float CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "CalculateImpulseDirection");

	Params::UGAB_GenericApplyKnockback_C_CalculateImpulseDirection_Params Parms;
	Parms.InPawn = InPawn;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue1 = CallFunc_GetActivatingPawn_ReturnValue1;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue1 = CallFunc_Normal_ReturnValue1;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_D744890E4C485F1C80B3E7864AE506FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCancelled_D744890E4C485F1C80B3E7864AE506FF()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCancelled_D744890E4C485F1C80B3E7864AE506FF");

	Params::UGAB_GenericApplyKnockback_C_OnCancelled_D744890E4C485F1C80B3E7864AE506FF_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_D744890E4C485F1C80B3E7864AE506FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnInterrupted_D744890E4C485F1C80B3E7864AE506FF()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnInterrupted_D744890E4C485F1C80B3E7864AE506FF");

	Params::UGAB_GenericApplyKnockback_C_OnInterrupted_D744890E4C485F1C80B3E7864AE506FF_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_D744890E4C485F1C80B3E7864AE506FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnBlendOut_D744890E4C485F1C80B3E7864AE506FF()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnBlendOut_D744890E4C485F1C80B3E7864AE506FF");

	Params::UGAB_GenericApplyKnockback_C_OnBlendOut_D744890E4C485F1C80B3E7864AE506FF_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_D744890E4C485F1C80B3E7864AE506FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCompleted_D744890E4C485F1C80B3E7864AE506FF()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCompleted_D744890E4C485F1C80B3E7864AE506FF");

	Params::UGAB_GenericApplyKnockback_C_OnCompleted_D744890E4C485F1C80B3E7864AE506FF_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_1F181048470CEB2EB6CC648039C5913C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCancelled_1F181048470CEB2EB6CC648039C5913C()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCancelled_1F181048470CEB2EB6CC648039C5913C");

	Params::UGAB_GenericApplyKnockback_C_OnCancelled_1F181048470CEB2EB6CC648039C5913C_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_1F181048470CEB2EB6CC648039C5913C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnInterrupted_1F181048470CEB2EB6CC648039C5913C()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnInterrupted_1F181048470CEB2EB6CC648039C5913C");

	Params::UGAB_GenericApplyKnockback_C_OnInterrupted_1F181048470CEB2EB6CC648039C5913C_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_1F181048470CEB2EB6CC648039C5913C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnBlendOut_1F181048470CEB2EB6CC648039C5913C()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnBlendOut_1F181048470CEB2EB6CC648039C5913C");

	Params::UGAB_GenericApplyKnockback_C_OnBlendOut_1F181048470CEB2EB6CC648039C5913C_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_1F181048470CEB2EB6CC648039C5913C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCompleted_1F181048470CEB2EB6CC648039C5913C()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCompleted_1F181048470CEB2EB6CC648039C5913C");

	Params::UGAB_GenericApplyKnockback_C_OnCompleted_1F181048470CEB2EB6CC648039C5913C_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_BA9188C34C234A4C47306FA73AAF0583
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCancelled_BA9188C34C234A4C47306FA73AAF0583()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCancelled_BA9188C34C234A4C47306FA73AAF0583");

	Params::UGAB_GenericApplyKnockback_C_OnCancelled_BA9188C34C234A4C47306FA73AAF0583_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_BA9188C34C234A4C47306FA73AAF0583
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnInterrupted_BA9188C34C234A4C47306FA73AAF0583()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnInterrupted_BA9188C34C234A4C47306FA73AAF0583");

	Params::UGAB_GenericApplyKnockback_C_OnInterrupted_BA9188C34C234A4C47306FA73AAF0583_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_BA9188C34C234A4C47306FA73AAF0583
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnBlendOut_BA9188C34C234A4C47306FA73AAF0583()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnBlendOut_BA9188C34C234A4C47306FA73AAF0583");

	Params::UGAB_GenericApplyKnockback_C_OnBlendOut_BA9188C34C234A4C47306FA73AAF0583_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_BA9188C34C234A4C47306FA73AAF0583
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCompleted_BA9188C34C234A4C47306FA73AAF0583()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCompleted_BA9188C34C234A4C47306FA73AAF0583");

	Params::UGAB_GenericApplyKnockback_C_OnCompleted_BA9188C34C234A4C47306FA73AAF0583_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0");

	Params::UGAB_GenericApplyKnockback_C_OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0");

	Params::UGAB_GenericApplyKnockback_C_OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0");

	Params::UGAB_GenericApplyKnockback_C_OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0");

	Params::UGAB_GenericApplyKnockback_C_OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF");

	Params::UGAB_GenericApplyKnockback_C_OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF");

	Params::UGAB_GenericApplyKnockback_C_OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF");

	Params::UGAB_GenericApplyKnockback_C_OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF");

	Params::UGAB_GenericApplyKnockback_C_OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnReachedJumpApex
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnReachedJumpApex()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnReachedJumpApex");

	Params::UGAB_GenericApplyKnockback_C_OnReachedJumpApex_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.SetupMontageSectionsAndOrientDirection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::SetupMontageSectionsAndOrientDirection()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "SetupMontageSectionsAndOrientDirection");

	Params::UGAB_GenericApplyKnockback_C_SetupMontageSectionsAndOrientDirection_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnPawnLanded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UGAB_GenericApplyKnockback_C::OnPawnLanded(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnPawnLanded");

	Params::UGAB_GenericApplyKnockback_C_OnPawnLanded_Params Parms;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnHitPawn
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SelfActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UGAB_GenericApplyKnockback_C::OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnHitPawn");

	Params::UGAB_GenericApplyKnockback_C_OnHitPawn_Params Parms;
	Parms.SelfActor = SelfActor;
	Parms.OtherActor = OtherActor;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_GenericApplyKnockback_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_GenericApplyKnockback_C_K2_ActivateAbilityFromEvent_Params Parms;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_GenericApplyKnockback_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "K2_OnEndAbility");

	Params::UGAB_GenericApplyKnockback_C_K2_OnEndAbility_Params Parms;
	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DebugLine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::DebugLine()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "DebugLine");

	Params::UGAB_GenericApplyKnockback_C_DebugLine_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.ExecuteUbergraph_GAB_GenericApplyKnockback
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate13                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate14                           (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_Hit1                                          (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      K2Node_CustomEvent_SelfActor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherActor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_NormalImpulse                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_Hit                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromHitResult_ReturnValue              ()
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate15                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate16                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate17                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate18                           (ZeroConstructor, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue9                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue10                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate19                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate20                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1              (NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue11                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue2              (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate21                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate22                           (ZeroConstructor, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue3              (NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ZeroConstructor, ReferenceParm)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesUseInstagorInsteadOfImpulseDirection_Value          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetImpulseData_ImpulseDirection                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetImpulseData_KnockbackMagnitude                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetImpulseData_KnockbackZAngle                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetPawnFromInstigator_OutPawn                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_CalculateImpulseDirection_ReturnValue                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue2              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue12                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)

void UGAB_GenericApplyKnockback_C::ExecuteUbergraph_GAB_GenericApplyKnockback(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, bool CallFunc_IsFalling_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue3, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue4, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue5, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue1, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue2, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FHitResult& K2Node_CustomEvent_Hit1, class AActor* K2Node_CustomEvent_SelfActor, class AActor* K2Node_CustomEvent_OtherActor, const struct FVector& K2Node_CustomEvent_NormalImpulse, const struct FHitResult& K2Node_CustomEvent_Hit, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResult_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue6, float CallFunc_VSize_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue6, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue7, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue8, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue9, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate19, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate20, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue3, bool CallFunc_IsValid_ReturnValue7, bool CallFunc_IsValid_ReturnValue8, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue4, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue1, bool CallFunc_IsValid_ReturnValue9, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue11, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate21, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate22, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue3, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool K2Node_Event_bWasCancelled, bool CallFunc_DoesUseInstagorInsteadOfImpulseDirection_Value, const struct FVector& CallFunc_GetImpulseData_ImpulseDirection, float CallFunc_GetImpulseData_KnockbackMagnitude, float CallFunc_GetImpulseData_KnockbackZAngle, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue1, class AFortPlayerPawn* CallFunc_GetPawnFromInstigator_OutPawn, const struct FVector& CallFunc_CalculateImpulseDirection_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue12, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "ExecuteUbergraph_GAB_GenericApplyKnockback");

	Params::UGAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue1 = CallFunc_GetActivatingPawn_ReturnValue1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue2 = CallFunc_GetActivatingPawn_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate13 = K2Node_CreateDelegate_OutputDelegate13;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue3 = CallFunc_GetActivatingPawn_ReturnValue3;
	Parms.CallFunc_GetActivatingPawn_ReturnValue4 = CallFunc_GetActivatingPawn_ReturnValue4;
	Parms.CallFunc_GetActivatingPawn_ReturnValue5 = CallFunc_GetActivatingPawn_ReturnValue5;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue1 = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue1;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue2 = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_CreateDelegate_OutputDelegate14 = K2Node_CreateDelegate_OutputDelegate14;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = CallFunc_Multiply_VectorFloat_ReturnValue1;
	Parms.K2Node_CustomEvent_Hit1 = K2Node_CustomEvent_Hit1;
	Parms.K2Node_CustomEvent_SelfActor = K2Node_CustomEvent_SelfActor;
	Parms.K2Node_CustomEvent_OtherActor = K2Node_CustomEvent_OtherActor;
	Parms.K2Node_CustomEvent_NormalImpulse = K2Node_CustomEvent_NormalImpulse;
	Parms.K2Node_CustomEvent_Hit = K2Node_CustomEvent_Hit;
	Parms.CallFunc_AbilityTargetDataFromHitResult_ReturnValue = CallFunc_AbilityTargetDataFromHitResult_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue6 = CallFunc_GetActivatingPawn_ReturnValue6;
	Parms.CallFunc_GetActivatingPawn_ReturnValue7 = CallFunc_GetActivatingPawn_ReturnValue7;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue8 = CallFunc_GetActivatingPawn_ReturnValue8;
	Parms.CallFunc_GetActivatingAbilityComponent_ReturnValue = CallFunc_GetActivatingAbilityComponent_ReturnValue;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate15 = K2Node_CreateDelegate_OutputDelegate15;
	Parms.K2Node_CreateDelegate_OutputDelegate16 = K2Node_CreateDelegate_OutputDelegate16;
	Parms.K2Node_CreateDelegate_OutputDelegate17 = K2Node_CreateDelegate_OutputDelegate17;
	Parms.K2Node_CreateDelegate_OutputDelegate18 = K2Node_CreateDelegate_OutputDelegate18;
	Parms.CallFunc_GetActivatingPawn_ReturnValue9 = CallFunc_GetActivatingPawn_ReturnValue9;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue10 = CallFunc_GetActivatingPawn_ReturnValue10;
	Parms.K2Node_CreateDelegate_OutputDelegate19 = K2Node_CreateDelegate_OutputDelegate19;
	Parms.K2Node_CreateDelegate_OutputDelegate20 = K2Node_CreateDelegate_OutputDelegate20;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue3 = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue4 = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue4;
	Parms.CallFunc_GetActivatingAbilityComponent_ReturnValue1 = CallFunc_GetActivatingAbilityComponent_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue9 = CallFunc_IsValid_ReturnValue9;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1;
	Parms.CallFunc_GetActivatingPawn_ReturnValue11 = CallFunc_GetActivatingPawn_ReturnValue11;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue1 = CallFunc_IsServer_ReturnValue1;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue2 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate21 = K2Node_CreateDelegate_OutputDelegate21;
	Parms.K2Node_CreateDelegate_OutputDelegate22 = K2Node_CreateDelegate_OutputDelegate22;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue3 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue3;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_DoesUseInstagorInsteadOfImpulseDirection_Value = CallFunc_DoesUseInstagorInsteadOfImpulseDirection_Value;
	Parms.CallFunc_GetImpulseData_ImpulseDirection = CallFunc_GetImpulseData_ImpulseDirection;
	Parms.CallFunc_GetImpulseData_KnockbackMagnitude = CallFunc_GetImpulseData_KnockbackMagnitude;
	Parms.CallFunc_GetImpulseData_KnockbackZAngle = CallFunc_GetImpulseData_KnockbackZAngle;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue1 = CallFunc_SelectFloat_ReturnValue1;
	Parms.CallFunc_GetPawnFromInstigator_OutPawn = CallFunc_GetPawnFromInstigator_OutPawn;
	Parms.CallFunc_CalculateImpulseDirection_ReturnValue = CallFunc_CalculateImpulseDirection_ReturnValue;
	Parms.CallFunc_GetActivatingAbilityComponent_ReturnValue2 = CallFunc_GetActivatingAbilityComponent_ReturnValue2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue1 = CallFunc_RemoveActiveGameplayEffect_ReturnValue1;
	Parms.CallFunc_GetActivatingPawn_ReturnValue12 = CallFunc_GetActivatingPawn_ReturnValue12;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
