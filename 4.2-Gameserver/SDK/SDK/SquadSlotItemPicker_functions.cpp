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


// Function SquadSlotItemPicker.SquadSlotItemPicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USquadSlotItemPicker_C::Construct()
{
	static auto Func = Class->GetFunction("SquadSlotItemPicker_C", "Construct");

	Params::USquadSlotItemPicker_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotItemPicker.SquadSlotItemPicker_C.HandleChangeSort
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USquadSlotItemPicker_C::HandleChangeSort()
{
	static auto Func = Class->GetFunction("SquadSlotItemPicker_C", "HandleChangeSort");

	Params::USquadSlotItemPicker_C_HandleChangeSort_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotItemPicker.SquadSlotItemPicker_C.HandleSortChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESquadSlotSortType      CurrentSortType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESquadSlotType          NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadSlotItemPicker_C::HandleSortChanged(enum class ESquadSlotSortType CurrentSortType, enum class ESquadSlotType NewParam)
{
	static auto Func = Class->GetFunction("SquadSlotItemPicker_C", "HandleSortChanged");

	Params::USquadSlotItemPicker_C_HandleSortChanged_Params Parms;
	Parms.CurrentSortType = CurrentSortType;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotItemPicker.SquadSlotItemPicker_C.ExecuteUbergraph_SquadSlotItemPicker
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESquadSlotSortType      K2Node_CustomEvent_CurrentSortType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESquadSlotType          K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESquadSlotSortType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// enum class ESquadSlotType          Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable4                                              ()
// class FText                        Temp_text_Variable5                                              ()
// class FText                        Temp_text_Variable6                                              ()
// class FText                        Temp_text_Variable7                                              ()
// class FText                        Temp_text_Variable8                                              ()
// class FText                        Temp_text_Variable9                                              ()
// class FText                        Temp_text_Variable10                                             ()
// class FText                        Temp_text_Variable11                                             ()
// class FText                        K2Node_Select_Default                                            ()
// class FText                        K2Node_Select1_Default                                           ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void USquadSlotItemPicker_C::ExecuteUbergraph_SquadSlotItemPicker(int32 EntryPoint, enum class ESquadSlotSortType K2Node_CustomEvent_CurrentSortType, enum class ESquadSlotType K2Node_CustomEvent_NewParam, enum class ESquadSlotSortType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, enum class ESquadSlotType Temp_byte_Variable1, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class FText K2Node_Select_Default, class FText K2Node_Select1_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("SquadSlotItemPicker_C", "ExecuteUbergraph_SquadSlotItemPicker");

	Params::USquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_CurrentSortType = K2Node_CustomEvent_CurrentSortType;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.Temp_text_Variable11 = Temp_text_Variable11;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
