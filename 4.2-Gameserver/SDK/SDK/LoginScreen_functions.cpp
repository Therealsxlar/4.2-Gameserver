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


// Function LoginScreen.LoginScreen_C.PopContentWidgetInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState           State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_SafePopFlowStack_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* ULoginScreen_C::PopContentWidgetInternal(const struct FContentPushState& State, class UWidget* CallFunc_SafePopFlowStack_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "PopContentWidgetInternal");

	Params::ULoginScreen_C_PopContentWidgetInternal_Params Parms;
	Parms.State = State;
	Parms.CallFunc_SafePopFlowStack_ReturnValue = CallFunc_SafePopFlowStack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LoginScreen.LoginScreen_C.ShowAccountLinkingWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetPlatformDisplayName_ReturnValue                      ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAccountLinkingWindow_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginScreen_C::ShowAccountLinkingWindow(class FText CallFunc_GetPlatformDisplayName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAccountLinkingWindow_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "ShowAccountLinkingWindow");

	Params::ULoginScreen_C_ShowAccountLinkingWindow_Params Parms;
	Parms.CallFunc_GetPlatformDisplayName_ReturnValue = CallFunc_GetPlatformDisplayName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULoginScreen_C::Construct()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "Construct");

	Params::ULoginScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortUIState            PreviousUIState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginScreen_C::OnEnterState(enum class EFortUIState PreviousUIState)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "OnEnterState");

	Params::ULoginScreen_C_OnEnterState_Params Parms;
	Parms.PreviousUIState = PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.AccountLinking_PushStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        StatusText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ULoginScreen_C::AccountLinking_PushStatus(class FText StatusText)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "AccountLinking_PushStatus");

	Params::ULoginScreen_C_AccountLinking_PushStatus_Params Parms;
	Parms.StatusText = StatusText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.AccountLinking_PopStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginScreen_C::AccountLinking_PopStatus()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "AccountLinking_PopStatus");

	Params::ULoginScreen_C_AccountLinking_PopStatus_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.AccountLinking_LinkingFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        FailReason                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ULoginScreen_C::AccountLinking_LinkingFailed(class FText FailReason)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "AccountLinking_LinkingFailed");

	Params::ULoginScreen_C_AccountLinking_LinkingFailed_Params Parms;
	Parms.FailReason = FailReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.AccountLinking_RequestSignIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginScreen_C::AccountLinking_RequestSignIn()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "AccountLinking_RequestSignIn");

	Params::ULoginScreen_C_AccountLinking_RequestSignIn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.AccountLinking_RequestAutoLogin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginScreen_C::AccountLinking_RequestAutoLogin()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "AccountLinking_RequestAutoLogin");

	Params::ULoginScreen_C_AccountLinking_RequestAutoLogin_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState           State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ULoginScreen_C::PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "PushContentWidgetInternal");

	Params::ULoginScreen_C_PushContentWidgetInternal_Params Parms;
	Parms.Widget = Widget;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginScreen_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature");

	Params::ULoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.OnNeedsPurchaseOrAccountLinking
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULoginScreen_C::OnNeedsPurchaseOrAccountLinking()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "OnNeedsPurchaseOrAccountLinking");

	Params::ULoginScreen_C_OnNeedsPurchaseOrAccountLinking_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.ShowBackBar
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULoginScreen_C::ShowBackBar()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "ShowBackBar");

	Params::ULoginScreen_C_ShowBackBar_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.HideTopBarOptions
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULoginScreen_C::HideTopBarOptions()
{
	static auto Func = Class->GetFunction("LoginScreen_C", "HideTopBarOptions");

	Params::ULoginScreen_C_HideTopBarOptions_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFort_Entry_Music_Controller_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFort_Entry_Music_Controller_BP_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIState            K2Node_Event_PreviousUIState                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_StatusText                                    ()
// class FText                        K2Node_CustomEvent_FailReason                                    ()
// bool                               CallFunc_StartAutoLogin_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState           K2Node_Event_State                                               (NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_SafePopFlowStack_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_SafePopFlowStack_ReturnValue1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetGameVersion_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void ULoginScreen_C::ExecuteUbergraph_LoginScreen(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, enum class EFortUIState K2Node_Event_PreviousUIState, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class FText K2Node_CustomEvent_StatusText, class FText K2Node_CustomEvent_FailReason, bool CallFunc_StartAutoLogin_ReturnValue, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UWidget* CallFunc_SafePopFlowStack_ReturnValue, class UWidget* CallFunc_SafePopFlowStack_ReturnValue1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, const class FString& CallFunc_GetGameVersion_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("LoginScreen_C", "ExecuteUbergraph_LoginScreen");

	Params::ULoginScreen_C_ExecuteUbergraph_LoginScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_PreviousUIState = K2Node_Event_PreviousUIState;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CustomEvent_StatusText = K2Node_CustomEvent_StatusText;
	Parms.K2Node_CustomEvent_FailReason = K2Node_CustomEvent_FailReason;
	Parms.CallFunc_StartAutoLogin_ReturnValue = CallFunc_StartAutoLogin_ReturnValue;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_SafePopFlowStack_ReturnValue = CallFunc_SafePopFlowStack_ReturnValue;
	Parms.CallFunc_SafePopFlowStack_ReturnValue1 = CallFunc_SafePopFlowStack_ReturnValue1;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_GetGameVersion_ReturnValue = CallFunc_GetGameVersion_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
