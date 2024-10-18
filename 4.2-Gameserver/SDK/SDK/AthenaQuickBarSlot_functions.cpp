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


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.UpdateJetpackFuelGaugeVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickBarSlot_C::UpdateJetpackFuelGaugeVisiblity(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaQuickBarSlot_C", "UpdateJetpackFuelGaugeVisiblity");

	Params::UAthenaQuickBarSlot_C_UpdateJetpackFuelGaugeVisiblity_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.ShowJetpackFuelGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaQuickBarSlot_C::ShowJetpackFuelGauge()
{
	static auto Func = Class->GetFunction("AthenaQuickBarSlot_C", "ShowJetpackFuelGauge");

	Params::UAthenaQuickBarSlot_C_ShowJetpackFuelGauge_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.HideJetpackFuelGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaQuickBarSlot_C::HideJetpackFuelGauge()
{
	static auto Func = Class->GetFunction("AthenaQuickBarSlot_C", "HideJetpackFuelGauge");

	Params::UAthenaQuickBarSlot_C_HideJetpackFuelGauge_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UAthenaQuickBarSlot_C::OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_IsBROnly_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaQuickBarSlot_C", "OnTouchStarted");

	Params::UAthenaQuickBarSlot_C_OnTouchStarted_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.OnRefreshItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaQuickBarSlot_C::OnRefreshItem()
{
	static auto Func = Class->GetFunction("AthenaQuickBarSlot_C", "OnRefreshItem");

	Params::UAthenaQuickBarSlot_C_OnRefreshItem_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.ExecuteUbergraph_AthenaQuickBarSlot
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaQuickBarSlot_C::ExecuteUbergraph_AthenaQuickBarSlot(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("AthenaQuickBarSlot_C", "ExecuteUbergraph_AthenaQuickBarSlot");

	Params::UAthenaQuickBarSlot_C_ExecuteUbergraph_AthenaQuickBarSlot_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
