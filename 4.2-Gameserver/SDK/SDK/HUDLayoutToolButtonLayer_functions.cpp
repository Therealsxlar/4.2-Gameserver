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


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUDLayoutToolButtonLayer_C::Construct()
{
	static auto Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "Construct");

	Params::UHUDLayoutToolButtonLayer_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.On Tool Opened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUDLayoutToolButtonLayer_C::On_Tool_Opened()
{
	static auto Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "On Tool Opened");

	Params::UHUDLayoutToolButtonLayer_C_On_Tool_Opened_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.OnBuildMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bBuildMode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutToolButtonLayer_C::OnBuildMode(bool bBuildMode)
{
	static auto Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "OnBuildMode");

	Params::UHUDLayoutToolButtonLayer_C_OnBuildMode_Params Parms;
	Parms.bBuildMode = bBuildMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.ExecuteUbergraph_HUDLayoutToolButtonLayer
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bBuildMode                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasSavedLayout_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasSavedLayout_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutToolButtonLayer_C::ExecuteUbergraph_HUDLayoutToolButtonLayer(int32 EntryPoint, bool K2Node_Event_bBuildMode, class FText Temp_text_Variable, class FText Temp_text_Variable1, bool Temp_bool_Variable, class FText K2Node_Select_Default, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasSavedLayout_ReturnValue, bool CallFunc_HasSavedLayout_ReturnValue1)
{
	static auto Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "ExecuteUbergraph_HUDLayoutToolButtonLayer");

	Params::UHUDLayoutToolButtonLayer_C_ExecuteUbergraph_HUDLayoutToolButtonLayer_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bBuildMode = K2Node_Event_bBuildMode;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasSavedLayout_ReturnValue = CallFunc_HasSavedLayout_ReturnValue;
	Parms.CallFunc_HasSavedLayout_ReturnValue1 = CallFunc_HasSavedLayout_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
