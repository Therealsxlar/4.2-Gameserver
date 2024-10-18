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


// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.On_BorderTouchZone_MouseButtonDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_HandleBack_Passthrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UAthenaMatchStatsScreen_C::On_BorderTouchZone_MouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_HandleBack_Passthrough, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchStatsScreen_C", "On_BorderTouchZone_MouseButtonDown");

	Params::UAthenaMatchStatsScreen_C_On_BorderTouchZone_MouseButtonDown_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_HandleBack_Passthrough = CallFunc_HandleBack_Passthrough;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.InputRefresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UAthenaMatchStatsScreen_C::InputRefresh(const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("AthenaMatchStatsScreen_C", "InputRefresh");

	Params::UAthenaMatchStatsScreen_C_InputRefresh_Params Parms;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.InputSetup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchStatsScreen_C::InputSetup()
{
	static auto Func = Class->GetFunction("AthenaMatchStatsScreen_C", "InputSetup");

	Params::UAthenaMatchStatsScreen_C_InputSetup_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchStatsScreen_C::HandleBack(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchStatsScreen_C", "HandleBack");

	Params::UAthenaMatchStatsScreen_C_HandleBack_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.RegisterBack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UAthenaMatchStatsScreen_C::RegisterBack(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("AthenaMatchStatsScreen_C", "RegisterBack");

	Params::UAthenaMatchStatsScreen_C_RegisterBack_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchStatsScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaMatchStatsScreen_C", "OnActivated");

	Params::UAthenaMatchStatsScreen_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchStatsScreen_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaMatchStatsScreen_C", "Construct");

	Params::UAthenaMatchStatsScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchStatsScreen.AthenaMatchStatsScreen_C.ExecuteUbergraph_AthenaMatchStatsScreen
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_PlayerController_C*  K2Node_DynamicCast_AsAthena_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaPlayerMatchReport*    CallFunc_GetMatchReport_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchStatsScreen_C::ExecuteUbergraph_AthenaMatchStatsScreen(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UAthenaPlayerMatchReport* CallFunc_GetMatchReport_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchStatsScreen_C", "ExecuteUbergraph_AthenaMatchStatsScreen");

	Params::UAthenaMatchStatsScreen_C_ExecuteUbergraph_AthenaMatchStatsScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Player_Controller = K2Node_DynamicCast_AsAthena_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMatchReport_ReturnValue = CallFunc_GetMatchReport_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
