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


// Function BottomBarWidget.BottomBarWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBottomBarWidget_C::Construct()
{
	static auto Func = Class->GetFunction("BottomBarWidget_C", "Construct");

	Params::UBottomBarWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BottomBarWidget.BottomBarWidget_C.ExecuteUbergraph_BottomBarWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_NoResourceBrush_ReturnValue                             ()

void UBottomBarWidget_C::ExecuteUbergraph_BottomBarWidget(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue)
{
	static auto Func = Class->GetFunction("BottomBarWidget_C", "ExecuteUbergraph_BottomBarWidget");

	Params::UBottomBarWidget_C_ExecuteUbergraph_BottomBarWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_NoResourceBrush_ReturnValue = CallFunc_NoResourceBrush_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
