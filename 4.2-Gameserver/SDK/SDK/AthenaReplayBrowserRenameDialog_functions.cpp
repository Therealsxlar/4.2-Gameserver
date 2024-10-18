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


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.CancelRename
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaReplayBrowserRenameDialog_C::CancelRename()
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "CancelRename");

	Params::UAthenaReplayBrowserRenameDialog_C_CancelRename_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.TapToClose
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UAthenaReplayBrowserRenameDialog_C::TapToClose(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "TapToClose");

	Params::UAthenaReplayBrowserRenameDialog_C_TapToClose_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReplayBrowserRenameDialog_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "PreConstruct");

	Params::UAthenaReplayBrowserRenameDialog_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaReplayBrowserRenameDialog_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "OnActivated");

	Params::UAthenaReplayBrowserRenameDialog_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserRenameDialog_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UAthenaReplayBrowserRenameDialog_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserRenameDialog_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UAthenaReplayBrowserRenameDialog_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaReplayBrowserRenameDialog_C::BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(class FText& Text)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature");

	Params::UAthenaReplayBrowserRenameDialog_C_BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params Parms;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserRenameDialog_C::BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature");

	Params::UAthenaReplayBrowserRenameDialog_C_BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature_Params Parms;
	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.ExecuteUbergraph_AthenaReplayBrowserRenameDialog
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text1                                 (ConstParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UAthenaReplayBrowserRenameDialog_C::ExecuteUbergraph_AthenaReplayBrowserRenameDialog(int32 EntryPoint, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class FText CallFunc_GetText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText K2Node_ComponentBoundEvent_Text1, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue1, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "ExecuteUbergraph_AthenaReplayBrowserRenameDialog");

	Params::UAthenaReplayBrowserRenameDialog_C_ExecuteUbergraph_AthenaReplayBrowserRenameDialog_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text1 = K2Node_ComponentBoundEvent_Text1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue1 = CallFunc_TextIsEmpty_ReturnValue1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.OnCancelRename__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaReplayBrowserRenameDialog_C::OnCancelRename__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "OnCancelRename__DelegateSignature");

	Params::UAthenaReplayBrowserRenameDialog_C_OnCancelRename__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C.OnConfirmRename__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewName                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaReplayBrowserRenameDialog_C::OnConfirmRename__DelegateSignature(class FText NewName)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserRenameDialog_C", "OnConfirmRename__DelegateSignature");

	Params::UAthenaReplayBrowserRenameDialog_C_OnConfirmRename__DelegateSignature_Params Parms;
	Parms.NewName = NewName;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
