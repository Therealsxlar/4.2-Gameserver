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


// Function TravelLogTextItem.TravelLogTextItem_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTravelLogTextItem_C::SetText(class FText InText)
{
	static auto Func = Class->GetFunction("TravelLogTextItem_C", "SetText");

	Params::UTravelLogTextItem_C_SetText_Params Parms;
	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
