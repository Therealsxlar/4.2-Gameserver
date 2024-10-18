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


// Function Button_CycleWeapon.Button_CycleWeapon_C.OnClicked
// (Event, Public, BlueprintEvent)
// Parameters:

void UButton_CycleWeapon_C::OnClicked()
{
	static auto Func = Class->GetFunction("Button_CycleWeapon_C", "OnClicked");

	Params::UButton_CycleWeapon_C_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Button_CycleWeapon.Button_CycleWeapon_C.ExecuteUbergraph_Button_CycleWeapon
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButton_CycleWeapon_C::ExecuteUbergraph_Button_CycleWeapon(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("Button_CycleWeapon_C", "ExecuteUbergraph_Button_CycleWeapon");

	Params::UButton_CycleWeapon_C_ExecuteUbergraph_Button_CycleWeapon_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
