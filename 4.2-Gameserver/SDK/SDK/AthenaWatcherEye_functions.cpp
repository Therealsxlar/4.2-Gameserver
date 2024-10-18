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


// Function AthenaWatcherEye.AthenaWatcherEye_C.SpectatorAdded_Watcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaWatcherEye_C::SpectatorAdded_Watcher()
{
	static auto Func = Class->GetFunction("AthenaWatcherEye_C", "SpectatorAdded_Watcher");

	Params::UAthenaWatcherEye_C_SpectatorAdded_Watcher_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaWatcherEye.AthenaWatcherEye_C.Hide_Watcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaWatcherEye_C::Hide_Watcher()
{
	static auto Func = Class->GetFunction("AthenaWatcherEye_C", "Hide_Watcher");

	Params::UAthenaWatcherEye_C_Hide_Watcher_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaWatcherEye.AthenaWatcherEye_C.Show_Watcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaWatcherEye_C::Show_Watcher()
{
	static auto Func = Class->GetFunction("AthenaWatcherEye_C", "Show_Watcher");

	Params::UAthenaWatcherEye_C_Show_Watcher_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaWatcherEye.AthenaWatcherEye_C.End_Watcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaWatcherEye_C::End_Watcher()
{
	static auto Func = Class->GetFunction("AthenaWatcherEye_C", "End_Watcher");

	Params::UAthenaWatcherEye_C_End_Watcher_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaWatcherEye.AthenaWatcherEye_C.SpectatorRemoved_Watcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaWatcherEye_C::SpectatorRemoved_Watcher()
{
	static auto Func = Class->GetFunction("AthenaWatcherEye_C", "SpectatorRemoved_Watcher");

	Params::UAthenaWatcherEye_C_SpectatorRemoved_Watcher_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaWatcherEye.AthenaWatcherEye_C.Begin_Watcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ManySpectatorsJoining                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaWatcherEye_C::Begin_Watcher(bool ManySpectatorsJoining)
{
	static auto Func = Class->GetFunction("AthenaWatcherEye_C", "Begin_Watcher");

	Params::UAthenaWatcherEye_C_Begin_Watcher_Params Parms;
	Parms.ManySpectatorsJoining = ManySpectatorsJoining;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaWatcherEye.AthenaWatcherEye_C.ManySpectatorsAdded_Watcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaWatcherEye_C::ManySpectatorsAdded_Watcher()
{
	static auto Func = Class->GetFunction("AthenaWatcherEye_C", "ManySpectatorsAdded_Watcher");

	Params::UAthenaWatcherEye_C_ManySpectatorsAdded_Watcher_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaWatcherEye.AthenaWatcherEye_C.ExecuteUbergraph_AthenaWatcherEye
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsAnyAnimationPlaying_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// float                              CallFunc_GetEndTime_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyAnimationPlaying_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnyAnimationPlaying_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ManySpectatorsJoining                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnyAnimationPlaying_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            K2Node_Select1_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaWatcherEye_C::ExecuteUbergraph_AthenaWatcherEye(int32 EntryPoint, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsAnyAnimationPlaying_ReturnValue, float CallFunc_GetEndTime_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetEndTime_ReturnValue1, bool CallFunc_IsAnyAnimationPlaying_ReturnValue1, bool CallFunc_IsAnyAnimationPlaying_ReturnValue2, bool K2Node_CustomEvent_ManySpectatorsJoining, bool CallFunc_IsAnyAnimationPlaying_ReturnValue3, bool Temp_bool_Variable1, class UWidgetAnimation* K2Node_Select_Default, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UWidgetAnimation* K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("AthenaWatcherEye_C", "ExecuteUbergraph_AthenaWatcherEye");

	Params::UAthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsAnyAnimationPlaying_ReturnValue = CallFunc_IsAnyAnimationPlaying_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue1 = CallFunc_GetEndTime_ReturnValue1;
	Parms.CallFunc_IsAnyAnimationPlaying_ReturnValue1 = CallFunc_IsAnyAnimationPlaying_ReturnValue1;
	Parms.CallFunc_IsAnyAnimationPlaying_ReturnValue2 = CallFunc_IsAnyAnimationPlaying_ReturnValue2;
	Parms.K2Node_CustomEvent_ManySpectatorsJoining = K2Node_CustomEvent_ManySpectatorsJoining;
	Parms.CallFunc_IsAnyAnimationPlaying_ReturnValue3 = CallFunc_IsAnyAnimationPlaying_ReturnValue3;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
