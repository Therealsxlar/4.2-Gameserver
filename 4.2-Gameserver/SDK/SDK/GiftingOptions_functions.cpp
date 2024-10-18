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


// Function GiftingOptions.GiftingOptions_C.BndEvt__BackToRecipientButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGiftingOptions_C::BndEvt__BackToRecipientButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("GiftingOptions_C", "BndEvt__BackToRecipientButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature");

	Params::UGiftingOptions_C_BndEvt__BackToRecipientButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingOptions.GiftingOptions_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGiftingOptions_C::BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("GiftingOptions_C", "BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature");

	Params::UGiftingOptions_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingOptions.GiftingOptions_C.ShowFriendSelection
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGiftingOptions_C::ShowFriendSelection()
{
	static auto Func = Class->GetFunction("GiftingOptions_C", "ShowFriendSelection");

	Params::UGiftingOptions_C_ShowFriendSelection_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingOptions.GiftingOptions_C.AllowGiftWrapSelection
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsAllowed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiftingOptions_C::AllowGiftWrapSelection(bool bIsAllowed)
{
	static auto Func = Class->GetFunction("GiftingOptions_C", "AllowGiftWrapSelection");

	Params::UGiftingOptions_C_AllowGiftWrapSelection_Params Parms;
	Parms.bIsAllowed = bIsAllowed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingOptions.GiftingOptions_C.ExecuteUbergraph_GiftingOptions
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsAllowed                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiftingOptions_C::ExecuteUbergraph_GiftingOptions(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bIsAllowed)
{
	static auto Func = Class->GetFunction("GiftingOptions_C", "ExecuteUbergraph_GiftingOptions");

	Params::UGiftingOptions_C_ExecuteUbergraph_GiftingOptions_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_bIsAllowed = K2Node_Event_bIsAllowed;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
