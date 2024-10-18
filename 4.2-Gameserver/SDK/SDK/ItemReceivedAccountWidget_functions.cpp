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


// Function ItemReceivedAccountWidget.ItemReceivedAccountWidget_C.OnAccountInfoChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo      Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UItemReceivedAccountWidget_C::OnAccountInfoChanged(struct FFortPublicAccountInfo& Result)
{
	static auto Func = Class->GetFunction("ItemReceivedAccountWidget_C", "OnAccountInfoChanged");

	Params::UItemReceivedAccountWidget_C_OnAccountInfoChanged_Params Parms;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedAccountWidget.ItemReceivedAccountWidget_C.ExecuteUbergraph_ItemReceivedAccountWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPublicAccountInfo      K2Node_Event_Result                                              (ConstParm, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UItemReceivedAccountWidget_C::ExecuteUbergraph_ItemReceivedAccountWidget(int32 EntryPoint, const struct FFortPublicAccountInfo& K2Node_Event_Result, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemReceivedAccountWidget_C", "ExecuteUbergraph_ItemReceivedAccountWidget");

	Params::UItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
