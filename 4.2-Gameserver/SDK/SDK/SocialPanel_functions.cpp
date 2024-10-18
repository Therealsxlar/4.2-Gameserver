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


// Function SocialPanel.SocialPanel_C.HandleAction_Close
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialPanel_C::HandleAction_Close(bool* Passthrough, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue)
{
	static auto Func = Class->GetFunction("SocialPanel_C", "HandleAction_Close");

	Params::USocialPanel_C_HandleAction_Close_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function SocialPanel.SocialPanel_C.InitializeInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void USocialPanel_C::InitializeInput(bool CallFunc_IsMobileGame_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("SocialPanel_C", "InitializeInput");

	Params::USocialPanel_C_InitializeInput_Params Parms;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel.SocialPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USocialPanel_C::Construct()
{
	static auto Func = Class->GetFunction("SocialPanel_C", "Construct");

	Params::USocialPanel_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel.SocialPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanel_C::OnActivated()
{
	static auto Func = Class->GetFunction("SocialPanel_C", "OnActivated");

	Params::USocialPanel_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel.SocialPanel_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanel_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("SocialPanel_C", "OnDeactivated");

	Params::USocialPanel_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel.SocialPanel_C.OnBeginIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void USocialPanel_C::OnBeginIntro()
{
	static auto Func = Class->GetFunction("SocialPanel_C", "OnBeginIntro");

	Params::USocialPanel_C_OnBeginIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel.SocialPanel_C.ExecuteUbergraph_SocialPanel
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialPanel_C::ExecuteUbergraph_SocialPanel(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("SocialPanel_C", "ExecuteUbergraph_SocialPanel");

	Params::USocialPanel_C_ExecuteUbergraph_SocialPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
