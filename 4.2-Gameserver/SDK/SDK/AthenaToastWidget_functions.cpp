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


// Function AthenaToastWidget.AthenaToastWidget_C.StartIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaToastWidget_C::StartIntro()
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "StartIntro");

	Params::UAthenaToastWidget_C_StartIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.ShowText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*            TextBlock                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            LocalTextBlock                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LocalText                                                        (Edit, BlueprintVisible)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaToastWidget_C::ShowText(class FText Text, class UCommonTextBlock* TextBlock, class UCommonTextBlock* LocalTextBlock, class FText LocalText, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "ShowText");

	Params::UAthenaToastWidget_C_ShowText_Params Parms;
	Parms.Text = Text;
	Parms.TextBlock = TextBlock;
	Parms.LocalTextBlock = LocalTextBlock;
	Parms.LocalText = LocalText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.SetToast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaToastWidget_C::SetToast(class FText Title, class FText Description)
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "SetToast");

	Params::UAthenaToastWidget_C_SetToast_Params Parms;
	Parms.Title = Title;
	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaToastWidget_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "Construct");

	Params::UAthenaToastWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.HandleIntroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaToastWidget_C::HandleIntroFinished()
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "HandleIntroFinished");

	Params::UAthenaToastWidget_C_HandleIntroFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.HandleOutroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaToastWidget_C::HandleOutroFinished()
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "HandleOutroFinished");

	Params::UAthenaToastWidget_C_HandleOutroFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.HandleAnimationDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaToastWidget_C::HandleAnimationDelay()
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "HandleAnimationDelay");

	Params::UAthenaToastWidget_C_HandleAnimationDelay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaToastWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "OnMouseEnter");

	Params::UAthenaToastWidget_C_OnMouseEnter_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaToastWidget_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "OnMouseLeave");

	Params::UAthenaToastWidget_C_OnMouseLeave_Params Parms;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.ExecuteUbergraph_AthenaToastWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent1                                         (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)

void UAthenaToastWidget_C::ExecuteUbergraph_AthenaToastWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent1, const struct FPointerEvent& K2Node_Event_MouseEvent)
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "ExecuteUbergraph_AthenaToastWidget");

	Params::UAthenaToastWidget_C_ExecuteUbergraph_AthenaToastWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent1 = K2Node_Event_MouseEvent1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.OnFinishedToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaToastWidget_C::OnFinishedToast__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "OnFinishedToast__DelegateSignature");

	Params::UAthenaToastWidget_C_OnFinishedToast__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
