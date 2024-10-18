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


// Function CustomFilterRow.CustomFilterRow_C.SetCheckedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsChecked                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomFilterRow_C::SetCheckedState(bool IsChecked, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("CustomFilterRow_C", "SetCheckedState");

	Params::UCustomFilterRow_C_SetCheckedState_Params Parms;
	Parms.IsChecked = IsChecked;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomFilterRow.CustomFilterRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCustomFilterRow_C::Construct()
{
	static auto Func = Class->GetFunction("CustomFilterRow_C", "Construct");

	Params::UCustomFilterRow_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomFilterRow.CustomFilterRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCustomFilterRow_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("CustomFilterRow_C", "PreConstruct");

	Params::UCustomFilterRow_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomFilterRow.CustomFilterRow_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCustomFilterRow_C::BP_OnClicked()
{
	static auto Func = Class->GetFunction("CustomFilterRow_C", "BP_OnClicked");

	Params::UCustomFilterRow_C_BP_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomFilterRow.CustomFilterRow_C.ExecuteUbergraph_CustomFilterRow
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UCustomFilterRow_C::ExecuteUbergraph_CustomFilterRow(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("CustomFilterRow_C", "ExecuteUbergraph_CustomFilterRow");

	Params::UCustomFilterRow_C_ExecuteUbergraph_CustomFilterRow_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CustomFilterRow.CustomFilterRow_C.OnCustomFilterToggled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortInventoryCustomFilterFilter                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChecked                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCustomFilterRow_C::OnCustomFilterToggled__DelegateSignature(enum class EFortInventoryCustomFilter Filter, bool IsChecked)
{
	static auto Func = Class->GetFunction("CustomFilterRow_C", "OnCustomFilterToggled__DelegateSignature");

	Params::UCustomFilterRow_C_OnCustomFilterToggled__DelegateSignature_Params Parms;
	Parms.Filter = Filter;
	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
