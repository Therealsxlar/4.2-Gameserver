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


// Function Button_EmoteMenu.Button_EmoteMenu_C.OnClicked
// (Event, Public, BlueprintEvent)
// Parameters:

void UButton_EmoteMenu_C::OnClicked()
{
	static auto Func = Class->GetFunction("Button_EmoteMenu_C", "OnClicked");

	Params::UButton_EmoteMenu_C_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Button_EmoteMenu.Button_EmoteMenu_C.ExecuteUbergraph_Button_EmoteMenu
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButton_EmoteMenu_C::ExecuteUbergraph_Button_EmoteMenu(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("Button_EmoteMenu_C", "ExecuteUbergraph_Button_EmoteMenu");

	Params::UButton_EmoteMenu_C_ExecuteUbergraph_Button_EmoteMenu_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
