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


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.Set Scroll Box to Nav Scroll Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USquadSlotDetailsPanel_C::Set_Scroll_Box_to_Nav_Scroll_Widget()
{
	static auto Func = Class->GetFunction("SquadSlotDetailsPanel_C", "Set Scroll Box to Nav Scroll Widget");

	Params::USquadSlotDetailsPanel_C_Set_Scroll_Box_to_Nav_Scroll_Widget_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.GetRestrictionReasonsAsText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<enum class EFortSquadSlottingRestrictionReason>Reasons                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        Result                                                           (Edit, BlueprintVisible)
// class FText                        Temp_text_Variable                                               ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable1                                              ()
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortSquadSlottingRestrictionReasonCallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable2                                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        Temp_text_Variable3                                              ()
// enum class EFortSquadSlottingRestrictionReasonTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void USquadSlotDetailsPanel_C::GetRestrictionReasonsAsText(TArray<enum class EFortSquadSlottingRestrictionReason>& Reasons, class FText* Text, class FText Result, class FText Temp_text_Variable, int32 CallFunc_Array_Length_ReturnValue, class FText Temp_text_Variable1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class EFortSquadSlottingRestrictionReason CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText Temp_text_Variable2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText Temp_text_Variable3, enum class EFortSquadSlottingRestrictionReason Temp_byte_Variable, class FText K2Node_Select_Default, bool CallFunc_TextIsEmpty_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("SquadSlotDetailsPanel_C", "GetRestrictionReasonsAsText");

	Params::USquadSlotDetailsPanel_C_GetRestrictionReasonsAsText_Params Parms;
	Parms.Reasons = Reasons;
	Parms.Result = Result;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.UpdateSkillTreeButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadSlotDetailsPanel_C::UpdateSkillTreeButtonVisibility(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsInZone_ReturnValue, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, bool Temp_bool_Variable, class FName CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("SquadSlotDetailsPanel_C", "UpdateSkillTreeButtonVisibility");

	Params::USquadSlotDetailsPanel_C_UpdateSkillTreeButtonVisibility_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue = CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleDifferentSquadSlotSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void USquadSlotDetailsPanel_C::HandleDifferentSquadSlotSetBP()
{
	static auto Func = Class->GetFunction("SquadSlotDetailsPanel_C", "HandleDifferentSquadSlotSetBP");

	Params::USquadSlotDetailsPanel_C_HandleDifferentSquadSlotSetBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleSquadSlotStateChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void USquadSlotDetailsPanel_C::HandleSquadSlotStateChangedBP()
{
	static auto Func = Class->GetFunction("SquadSlotDetailsPanel_C", "HandleSquadSlotStateChangedBP");

	Params::USquadSlotDetailsPanel_C_HandleSquadSlotStateChangedBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadSlotDetailsPanel_C::BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SquadSlotDetailsPanel_C", "BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature");

	Params::USquadSlotDetailsPanel_C_BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USquadSlotDetailsPanel_C::Construct()
{
	static auto Func = Class->GetFunction("SquadSlotDetailsPanel_C", "Construct");

	Params::USquadSlotDetailsPanel_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleSquadSlotRestrictionFactorsChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void USquadSlotDetailsPanel_C::HandleSquadSlotRestrictionFactorsChangedBP()
{
	static auto Func = Class->GetFunction("SquadSlotDetailsPanel_C", "HandleSquadSlotRestrictionFactorsChangedBP");

	Params::USquadSlotDetailsPanel_C_HandleSquadSlotRestrictionFactorsChangedBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.ExecuteUbergraph_SquadSlotDetailsPanel
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInSquadSlotBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_TryGetItemToPreviewInSlot_OutItemToPreviewInSlot        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetItemToPreviewInSlot_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSquadSlotLockedBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHomebaseSquad              CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad                ()
// bool                               CallFunc_TryGetHomebaseSquadData_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHomebaseSquadSlot          CallFunc_Array_Get_Item                                          ()
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_ToText_ReturnValue                                      ()
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EFortSquadSlottingRestrictionReason>CallFunc_GetSlottingRestrictionReasons_ReturnValue               (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetRestrictionReasonsAsText_Text                        ()
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UWidget*                     K2Node_Select2_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select3_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// class UWidget*                     K2Node_Select4_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue1                                     ()

void USquadSlotDetailsPanel_C::ExecuteUbergraph_SquadSlotDetailsPanel(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortItem* CallFunc_TryGetItemToPreviewInSlot_OutItemToPreviewInSlot, bool CallFunc_TryGetItemToPreviewInSlot_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsSquadSlotLockedBP_ReturnValue, class UWidget* K2Node_Select_Default, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId1, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex1, bool Temp_bool_Variable1, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, const struct FHomebaseSquad& CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad, bool CallFunc_TryGetHomebaseSquadData_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, const struct FHomebaseSquadSlot& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue2, enum class EFortItemType CallFunc_Array_Get_Item1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_ToText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<enum class EFortSquadSlottingRestrictionReason>& CallFunc_GetSlottingRestrictionReasons_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetRestrictionReasonsAsText_Text, bool CallFunc_Greater_IntInt_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue2, enum class ESlateVisibility K2Node_Select1_Default, class FName CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool Temp_bool_Variable2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool Temp_bool_Variable3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UWidget* K2Node_Select2_Default, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable4, class UWidget* K2Node_Select3_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class UWidget* K2Node_Select4_Default, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1)
{
	static auto Func = Class->GetFunction("SquadSlotDetailsPanel_C", "ExecuteUbergraph_SquadSlotDetailsPanel");

	Params::USquadSlotDetailsPanel_C_ExecuteUbergraph_SquadSlotDetailsPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_GetItemInSquadSlotBP_ReturnValue = CallFunc_GetItemInSquadSlotBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetItemToPreviewInSlot_OutItemToPreviewInSlot = CallFunc_TryGetItemToPreviewInSlot_OutItemToPreviewInSlot;
	Parms.CallFunc_TryGetItemToPreviewInSlot_ReturnValue = CallFunc_TryGetItemToPreviewInSlot_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsSquadSlotLockedBP_ReturnValue = CallFunc_IsSquadSlotLockedBP_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId1 = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId1;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex1 = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad = CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad;
	Parms.CallFunc_TryGetHomebaseSquadData_ReturnValue = CallFunc_TryGetHomebaseSquadData_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_ToText_ReturnValue = CallFunc_ToText_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetSlottingRestrictionReasons_ReturnValue = CallFunc_GetSlottingRestrictionReasons_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetRestrictionReasonsAsText_Text = CallFunc_GetRestrictionReasonsAsText_Text;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue = CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
