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


// Function B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_SmokeGrenade_FXVolume_C::UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Prj_Athena_SmokeGrenade_FXVolume_C", "UserConstructionScript");

	Params::AB_Prj_Athena_SmokeGrenade_FXVolume_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C.FadeSmokeTL__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Prj_Athena_SmokeGrenade_FXVolume_C::FadeSmokeTL__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_Prj_Athena_SmokeGrenade_FXVolume_C", "FadeSmokeTL__FinishedFunc");

	Params::AB_Prj_Athena_SmokeGrenade_FXVolume_C_FadeSmokeTL__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C.FadeSmokeTL__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Prj_Athena_SmokeGrenade_FXVolume_C::FadeSmokeTL__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_Prj_Athena_SmokeGrenade_FXVolume_C", "FadeSmokeTL__UpdateFunc");

	Params::AB_Prj_Athena_SmokeGrenade_FXVolume_C_FadeSmokeTL__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Prj_Athena_SmokeGrenade_FXVolume_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Prj_Athena_SmokeGrenade_FXVolume_C", "ReceiveBeginPlay");

	Params::AB_Prj_Athena_SmokeGrenade_FXVolume_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C.FadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Prj_Athena_SmokeGrenade_FXVolume_C::FadeIn()
{
	static auto Func = Class->GetFunction("B_Prj_Athena_SmokeGrenade_FXVolume_C", "FadeIn");

	Params::AB_Prj_Athena_SmokeGrenade_FXVolume_C_FadeIn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C.FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Prj_Athena_SmokeGrenade_FXVolume_C::FadeOut()
{
	static auto Func = Class->GetFunction("B_Prj_Athena_SmokeGrenade_FXVolume_C", "FadeOut");

	Params::AB_Prj_Athena_SmokeGrenade_FXVolume_C_FadeOut_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Athena_SmokeGrenade_FXVolume.B_Prj_Athena_SmokeGrenade_FXVolume_C.ExecuteUbergraph_B_Prj_Athena_SmokeGrenade_FXVolume
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void AB_Prj_Athena_SmokeGrenade_FXVolume_C::ExecuteUbergraph_B_Prj_Athena_SmokeGrenade_FXVolume(int32 EntryPoint, float Temp_float_Variable, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable1, float Temp_float_Variable1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, bool Temp_bool_Variable2, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select1_Default, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue2, float K2Node_Select2_Default, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Prj_Athena_SmokeGrenade_FXVolume_C", "ExecuteUbergraph_B_Prj_Athena_SmokeGrenade_FXVolume");

	Params::AB_Prj_Athena_SmokeGrenade_FXVolume_C_ExecuteUbergraph_B_Prj_Athena_SmokeGrenade_FXVolume_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue2 = CallFunc_GreaterEqual_FloatFloat_ReturnValue2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
