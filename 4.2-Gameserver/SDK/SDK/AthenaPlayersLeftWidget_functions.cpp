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


// Function AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C.SetPlayersLeftText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        PlayersText                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaPlayersLeftWidget_C::SetPlayersLeftText(class FText& PlayersText)
{
	static auto Func = Class->GetFunction("AthenaPlayersLeftWidget_C", "SetPlayersLeftText");

	Params::UAthenaPlayersLeftWidget_C_SetPlayersLeftText_Params Parms;
	Parms.PlayersText = PlayersText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C.ExecuteUbergraph_AthenaPlayersLeftWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_PlayersText                                         (ConstParm)

void UAthenaPlayersLeftWidget_C::ExecuteUbergraph_AthenaPlayersLeftWidget(int32 EntryPoint, class FText K2Node_Event_PlayersText)
{
	static auto Func = Class->GetFunction("AthenaPlayersLeftWidget_C", "ExecuteUbergraph_AthenaPlayersLeftWidget");

	Params::UAthenaPlayersLeftWidget_C_ExecuteUbergraph_AthenaPlayersLeftWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PlayersText = K2Node_Event_PlayersText;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
