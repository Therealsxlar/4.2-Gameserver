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


// Function StatValueWidget.StatValueWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStatValueWidget_C::OnStatChanged()
{
	static auto Func = Class->GetFunction("StatValueWidget_C", "OnStatChanged");

	Params::UStatValueWidget_C_OnStatChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatValueWidget.StatValueWidget_C.ExecuteUbergraph_StatValueWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaBaseStatView*         CallFunc_GetBaseStatView_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIStatStyle            CallFunc_GetStatStyle_ReturnValue                                (ConstParm)
// float                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatValueWidget_C::ExecuteUbergraph_StatValueWidget(int32 EntryPoint, class UAthenaBaseStatView* CallFunc_GetBaseStatView_ReturnValue, const struct FFortUIStatStyle& CallFunc_GetStatStyle_ReturnValue, float CallFunc_GetStat_ReturnValue)
{
	static auto Func = Class->GetFunction("StatValueWidget_C", "ExecuteUbergraph_StatValueWidget");

	Params::UStatValueWidget_C_ExecuteUbergraph_StatValueWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBaseStatView_ReturnValue = CallFunc_GetBaseStatView_ReturnValue;
	Parms.CallFunc_GetStatStyle_ReturnValue = CallFunc_GetStatStyle_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
