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


// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BattlePassUnlockAnim_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("BP_BattlePassUnlockAnim_C", "PreConstruct");

	Params::UBP_BattlePassUnlockAnim_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.AnimComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_BattlePassUnlockAnim_C::AnimComplete()
{
	static auto Func = Class->GetFunction("BP_BattlePassUnlockAnim_C", "AnimComplete");

	Params::UBP_BattlePassUnlockAnim_C_AnimComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_BattlePassUnlockAnim_C::CustomEvent_0()
{
	static auto Func = Class->GetFunction("BP_BattlePassUnlockAnim_C", "CustomEvent_0");

	Params::UBP_BattlePassUnlockAnim_C_CustomEvent_0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_BattlePassUnlockAnim_C::OnActivated()
{
	static auto Func = Class->GetFunction("BP_BattlePassUnlockAnim_C", "OnActivated");

	Params::UBP_BattlePassUnlockAnim_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.PlayIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_BattlePassUnlockAnim_C::PlayIntro()
{
	static auto Func = Class->GetFunction("BP_BattlePassUnlockAnim_C", "PlayIntro");

	Params::UBP_BattlePassUnlockAnim_C_PlayIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.ExecuteUbergraph_BP_BattlePassUnlockAnim
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemReceived_Base_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattlePassUnlockAnim_C::ExecuteUbergraph_BP_BattlePassUnlockAnim(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UItemReceived_Base_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1)
{
	static auto Func = Class->GetFunction("BP_BattlePassUnlockAnim_C", "ExecuteUbergraph_BP_BattlePassUnlockAnim");

	Params::UBP_BattlePassUnlockAnim_C_ExecuteUbergraph_BP_BattlePassUnlockAnim_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue1 = CallFunc_GetUIManagerWidget_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
