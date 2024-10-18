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


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.SetConsoleInputImages
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 Temp_struct_Variable                                             ()
// struct FSlateBrush                 Temp_struct_Variable1                                            ()
// enum class ECommonGamepadType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 Temp_struct_Variable2                                            ()
// struct FSlateBrush                 Temp_struct_Variable3                                            ()
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonGamepadType      CallFunc_GetCurrentGamepadType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonGamepadType      Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush1                                    ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush2                                    ()
// struct FSlateBrush                 K2Node_Select_Default                                            ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush3                                    ()
// struct FSlateBrush                 K2Node_Select1_Default                                           ()

void UAthenaSpectatorScoreboard_C::SetConsoleInputImages(const struct FSlateBrush& Temp_struct_Variable, const struct FSlateBrush& Temp_struct_Variable1, enum class ECommonGamepadType Temp_byte_Variable, const struct FSlateBrush& Temp_struct_Variable2, const struct FSlateBrush& Temp_struct_Variable3, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonGamepadType CallFunc_GetCurrentGamepadType_ReturnValue, enum class ECommonGamepadType Temp_byte_Variable1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush2, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush3, const struct FSlateBrush& K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("AthenaSpectatorScoreboard_C", "SetConsoleInputImages");

	Params::UAthenaSpectatorScoreboard_C_SetConsoleInputImages_Params Parms;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentGamepadType_ReturnValue = CallFunc_GetCurrentGamepadType_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush1 = K2Node_MakeStruct_SlateBrush1;
	Parms.K2Node_MakeStruct_SlateBrush2 = K2Node_MakeStruct_SlateBrush2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush3 = K2Node_MakeStruct_SlateBrush3;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.UpdateListUI
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bResetFocus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorScoreboard_C::UpdateListUI(bool bResetFocus)
{
	static auto Func = Class->GetFunction("AthenaSpectatorScoreboard_C", "UpdateListUI");

	Params::UAthenaSpectatorScoreboard_C_UpdateListUI_Params Parms;
	Parms.bResetFocus = bResetFocus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.ResetFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorScoreboard_C::ResetFocus()
{
	static auto Func = Class->GetFunction("AthenaSpectatorScoreboard_C", "ResetFocus");

	Params::UAthenaSpectatorScoreboard_C_ResetFocus_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSpectatorScoreboard_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaSpectatorScoreboard_C", "Construct");

	Params::UAthenaSpectatorScoreboard_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.ExecuteUbergraph_AthenaSpectatorScoreboard
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetDisplayedEntryWidgets_ReturnValue                    (ConstParm, ZeroConstructor, ReferenceParm)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSpectatorScoreboardRowWidget_C*K2Node_DynamicCast_AsAthena_Spectator_Scoreboard_Row_Widget      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bResetFocus                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorScoreboard_C::ExecuteUbergraph_AthenaSpectatorScoreboard(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UAthenaSpectatorScoreboardRowWidget_C* K2Node_DynamicCast_AsAthena_Spectator_Scoreboard_Row_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_bResetFocus)
{
	static auto Func = Class->GetFunction("AthenaSpectatorScoreboard_C", "ExecuteUbergraph_AthenaSpectatorScoreboard");

	Params::UAthenaSpectatorScoreboard_C_ExecuteUbergraph_AthenaSpectatorScoreboard_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDisplayedEntryWidgets_ReturnValue = CallFunc_GetDisplayedEntryWidgets_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Spectator_Scoreboard_Row_Widget = K2Node_DynamicCast_AsAthena_Spectator_Scoreboard_Row_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_bResetFocus = K2Node_Event_bResetFocus;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
