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


// Function XpReasonFeedItem.XpReasonFeedItem_C.SetXpText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UXpReasonFeedItem_C::SetXpText(class FText Text)
{
	static auto Func = Class->GetFunction("XpReasonFeedItem_C", "SetXpText");

	Params::UXpReasonFeedItem_C_SetXpText_Params Parms;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpReasonFeedItem.XpReasonFeedItem_C.PlayPresentEffectAndRemove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UXpReasonFeedItem_C::PlayPresentEffectAndRemove()
{
	static auto Func = Class->GetFunction("XpReasonFeedItem_C", "PlayPresentEffectAndRemove");

	Params::UXpReasonFeedItem_C_PlayPresentEffectAndRemove_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpReasonFeedItem.XpReasonFeedItem_C.BndEvt__Present_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UXpReasonFeedItem_C::BndEvt__Present_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("XpReasonFeedItem_C", "BndEvt__Present_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UXpReasonFeedItem_C_BndEvt__Present_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpReasonFeedItem.XpReasonFeedItem_C.ExecuteUbergraph_XpReasonFeedItem
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpReasonFeedItem_C::ExecuteUbergraph_XpReasonFeedItem(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("XpReasonFeedItem_C", "ExecuteUbergraph_XpReasonFeedItem");

	Params::UXpReasonFeedItem_C_ExecuteUbergraph_XpReasonFeedItem_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
