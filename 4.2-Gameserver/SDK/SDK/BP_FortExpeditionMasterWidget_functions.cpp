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


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleSortExpeditionListAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Add_ByteByte_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::HandleSortExpeditionListAction(bool* Passthrough, uint8 CallFunc_Add_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "HandleSortExpeditionListAction");

	Params::UBP_FortExpeditionMasterWidget_C_HandleSortExpeditionListAction_Params Parms;
	Parms.CallFunc_Add_ByteByte_ReturnValue = CallFunc_Add_ByteByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Greater_ByteByte_ReturnValue = CallFunc_Greater_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Disable Input Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::Disable_Input_Action(const struct FDataTableRowHandle& InputActionRow)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Disable Input Action");

	Params::UBP_FortExpeditionMasterWidget_C_Disable_Input_Action_Params Parms;
	Parms.InputActionRow = InputActionRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleCollectExpeditionAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::HandleCollectExpeditionAction(bool* Passthrough)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "HandleCollectExpeditionAction");

	Params::UBP_FortExpeditionMasterWidget_C_HandleCollectExpeditionAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleAbandonExpeditionAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::HandleAbandonExpeditionAction(bool* Passthrough)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "HandleAbandonExpeditionAction");

	Params::UBP_FortExpeditionMasterWidget_C_HandleAbandonExpeditionAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleBuildExpeditionAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleBuildExpeditionAction_PassThrough                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::HandleBuildExpeditionAction(bool* Passthrough, bool CallFunc_HandleBuildExpeditionAction_PassThrough)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "HandleBuildExpeditionAction");

	Params::UBP_FortExpeditionMasterWidget_C_HandleBuildExpeditionAction_Params Parms;
	Parms.CallFunc_HandleBuildExpeditionAction_PassThrough = CallFunc_HandleBuildExpeditionAction_PassThrough;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Present Reward UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionMasterWidget_C::Present_Reward_UI()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Present Reward UI");

	Params::UBP_FortExpeditionMasterWidget_C_Present_Reward_UI_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Show Input Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::Show_Input_Action(const struct FDataTableRowHandle& InputActionRow)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Show Input Action");

	Params::UBP_FortExpeditionMasterWidget_C_Show_Input_Action_Params Parms;
	Parms.InputActionRow = InputActionRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Hide Input Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::Hide_Input_Action(const struct FDataTableRowHandle& InputActionRow)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Hide Input Action");

	Params::UBP_FortExpeditionMasterWidget_C_Hide_Input_Action_Params Parms;
	Parms.InputActionRow = InputActionRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Update Master Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStorageCapacity_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStorageNumItems_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AreProfilesAvailableToWIFE_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AreAnyExpeditionsComplete_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::Update_Master_Widget(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetStorageCapacity_ReturnValue, int32 CallFunc_GetStorageNumItems_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_AreProfilesAvailableToWIFE_ReturnValue, bool CallFunc_AreAnyExpeditionsComplete_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Update Master Widget");

	Params::UBP_FortExpeditionMasterWidget_C_Update_Master_Widget_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetStorageCapacity_ReturnValue = CallFunc_GetStorageCapacity_ReturnValue;
	Parms.CallFunc_GetStorageNumItems_ReturnValue = CallFunc_GetStorageNumItems_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_AreProfilesAvailableToWIFE_ReturnValue = CallFunc_AreProfilesAvailableToWIFE_ReturnValue;
	Parms.CallFunc_AreAnyExpeditionsComplete_ReturnValue = CallFunc_AreAnyExpeditionsComplete_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Setup Bindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::Setup_Bindings(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Setup Bindings");

	Params::UBP_FortExpeditionMasterWidget_C_Setup_Bindings_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Setup Input Action Handlers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::Setup_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Setup Input Action Handlers");

	Params::UBP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Handle Back
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionMasterWidget_C::Handle_Back(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Handle Back");

	Params::UBP_FortExpeditionMasterWidget_C_Handle_Back_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.DialogResult_99152A754621D0E9A8C9C889926A827D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionMasterWidget_C::DialogResult_99152A754621D0E9A8C9C889926A827D(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "DialogResult_99152A754621D0E9A8C9C889926A827D");

	Params::UBP_FortExpeditionMasterWidget_C_DialogResult_99152A754621D0E9A8C9C889926A827D_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.DialogResult_67CD2E3A4E1A6780703420B1064D5BD1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionMasterWidget_C::DialogResult_67CD2E3A4E1A6780703420B1064D5BD1(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "DialogResult_67CD2E3A4E1A6780703420B1064D5BD1");

	Params::UBP_FortExpeditionMasterWidget_C_DialogResult_67CD2E3A4E1A6780703420B1064D5BD1_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.DialogResult_39A80A89449E8489E8E81EAECC14DE95
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionMasterWidget_C::DialogResult_39A80A89449E8489E8E81EAECC14DE95(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "DialogResult_39A80A89449E8489E8E81EAECC14DE95");

	Params::UBP_FortExpeditionMasterWidget_C_DialogResult_39A80A89449E8489E8E81EAECC14DE95_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionMasterWidget_C::Construct()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Construct");

	Params::UBP_FortExpeditionMasterWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionMasterWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "Destruct");

	Params::UBP_FortExpeditionMasterWidget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleAllCompletedExpeditionsCollected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionMasterWidget_C::HandleAllCompletedExpeditionsCollected()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "HandleAllCompletedExpeditionsCollected");

	Params::UBP_FortExpeditionMasterWidget_C_HandleAllCompletedExpeditionsCollected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HACK_OnActivate_UpdateMasterWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionMasterWidget_C::HACK_OnActivate_UpdateMasterWidget()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "HACK_OnActivate_UpdateMasterWidget");

	Params::UBP_FortExpeditionMasterWidget_C_HACK_OnActivate_UpdateMasterWidget_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionMasterWidget_C::OnActivated()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "OnActivated");

	Params::UBP_FortExpeditionMasterWidget_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.OnRewardsBlockedByStorage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionMasterWidget_C::OnRewardsBlockedByStorage()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "OnRewardsBlockedByStorage");

	Params::UBP_FortExpeditionMasterWidget_C_OnRewardsBlockedByStorage_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.OnRewardsBlockedByLockedProfile
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_FortExpeditionMasterWidget_C::OnRewardsBlockedByLockedProfile()
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "OnRewardsBlockedByLockedProfile");

	Params::UBP_FortExpeditionMasterWidget_C_OnRewardsBlockedByLockedProfile_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.ExecuteUbergraph_BP_FortExpeditionMasterWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFrontendStorageEnabled_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWIFEEnabled_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionMasterWidget_C::ExecuteUbergraph_BP_FortExpeditionMasterWidget(int32 EntryPoint, bool CallFunc_IsFrontendStorageEnabled_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result2, class FName K2Node_CustomEvent_ResultName2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName1, class FName Temp_name_Variable1, enum class EFortDialogResult Temp_byte_Variable1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_IsValid_ReturnValue1, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable2, enum class EFortDialogResult Temp_byte_Variable2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsWIFEEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_FortExpeditionMasterWidget_C", "ExecuteUbergraph_BP_FortExpeditionMasterWidget");

	Params::UBP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsFrontendStorageEnabled_ReturnValue = CallFunc_IsFrontendStorageEnabled_ReturnValue;
	Parms.K2Node_CustomEvent_Result2 = K2Node_CustomEvent_Result2;
	Parms.K2Node_CustomEvent_ResultName2 = K2Node_CustomEvent_ResultName2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Result1 = K2Node_CustomEvent_Result1;
	Parms.K2Node_CustomEvent_ResultName1 = K2Node_CustomEvent_ResultName1;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1 = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.Temp_name_Variable2 = Temp_name_Variable2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2 = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_IsWIFEEnabled_ReturnValue = CallFunc_IsWIFEEnabled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
