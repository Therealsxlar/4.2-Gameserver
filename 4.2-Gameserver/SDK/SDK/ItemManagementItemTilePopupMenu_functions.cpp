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


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.GetWarningText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EItemRecyclingWarning>Warnings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               HasAnimateItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        WarningText                                                      (Parm, OutParm)
// class FText                        TextGroup                                                        (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemRecyclingWarning   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetRecyclingWarningText_ReturnValue                     ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UItemManagementItemTilePopupMenu_C::GetWarningText(TArray<enum class EItemRecyclingWarning>& Warnings, bool HasAnimateItem, class FText* WarningText, class FText TextGroup, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class EItemRecyclingWarning CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetRecyclingWarningText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "GetWarningText");

	Params::UItemManagementItemTilePopupMenu_C_GetWarningText_Params Parms;
	Parms.Warnings = Warnings;
	Parms.HasAnimateItem = HasAnimateItem;
	Parms.TextGroup = TextGroup;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetRecyclingWarningText_ReturnValue = CallFunc_GetRecyclingWarningText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WarningText != nullptr)
		*WarningText = Parms.WarningText;

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.UpdateCollectionBookButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementItemTilePopupMenu_C::UpdateCollectionBookButtonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "UpdateCollectionBookButtonVisibility");

	Params::UItemManagementItemTilePopupMenu_C_UpdateCollectionBookButtonVisibility_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.UpdateRecycleButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemManagementItemTileButton*CallFunc_GetHostButton_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EItemRecyclingRestrictionReason>CallFunc_CanRecycle_OutRestrictionReasons                        (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CanRecycle_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFavorite_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementItemTilePopupMenu_C::UpdateRecycleButtonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortItemManagementItemTileButton* CallFunc_GetHostButton_ReturnValue, TArray<enum class EItemRecyclingRestrictionReason>& CallFunc_CanRecycle_OutRestrictionReasons, bool CallFunc_CanRecycle_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "UpdateRecycleButtonVisibility");

	Params::UItemManagementItemTilePopupMenu_C_UpdateRecycleButtonVisibility_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetHostButton_ReturnValue = CallFunc_GetHostButton_ReturnValue;
	Parms.CallFunc_CanRecycle_OutRestrictionReasons = CallFunc_CanRecycle_OutRestrictionReasons;
	Parms.CallFunc_CanRecycle_ReturnValue = CallFunc_CanRecycle_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsFavorite_ReturnValue = CallFunc_IsFavorite_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.UpdateFavoriteFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemManagementItemTileButton*CallFunc_GetHostButton_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFavorite_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementItemTilePopupMenu_C::UpdateFavoriteFlag(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, class UFortItemManagementItemTileButton* CallFunc_GetHostButton_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFavorite_ReturnValue, float K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "UpdateFavoriteFlag");

	Params::UItemManagementItemTilePopupMenu_C_UpdateFavoriteFlag_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.CallFunc_GetHostButton_ReturnValue = CallFunc_GetHostButton_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsFavorite_ReturnValue = CallFunc_IsFavorite_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.SetupRecycleRetireText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemManagementItemTileButton*CallFunc_GetHostButton_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementItemTilePopupMenu_C::SetupRecycleRetireText(class UFortItemManagementItemTileButton* CallFunc_GetHostButton_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue3)
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "SetupRecycleRetireText");

	Params::UItemManagementItemTilePopupMenu_C_SetupRecycleRetireText_Params Parms;
	Parms.CallFunc_GetHostButton_ReturnValue = CallFunc_GetHostButton_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue1 = CallFunc_GetType_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnSlotItemInCollectionBookComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*            AccountItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SlotId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCollectionBookManager*  CallFunc_GetCollectionBookManager_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementItemTilePopupMenu_C::OnSlotItemInCollectionBookComplete(class UFortAccountItem* AccountItem, class FName SlotId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "OnSlotItemInCollectionBookComplete");

	Params::UItemManagementItemTilePopupMenu_C_OnSlotItemInCollectionBookComplete_Params Parms;
	Parms.AccountItem = AccountItem;
	Parms.SlotId = SlotId;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCollectionBookManager_ReturnValue = CallFunc_GetCollectionBookManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.CacheCollectionBookStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCollectionBookManager*  CallFunc_GetCollectionBookManager_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasGameplayTagContainer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemManagementItemTileButton*CallFunc_GetHostButton_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanSlotItem_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementItemTilePopupMenu_C::CacheCollectionBookStatus(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasGameplayTagContainer_ReturnValue, class UFortItemManagementItemTileButton* CallFunc_GetHostButton_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanSlotItem_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "CacheCollectionBookStatus");

	Params::UItemManagementItemTilePopupMenu_C_CacheCollectionBookStatus_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCollectionBookManager_ReturnValue = CallFunc_GetCollectionBookManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasGameplayTagContainer_ReturnValue = CallFunc_HasGameplayTagContainer_ReturnValue;
	Parms.CallFunc_GetHostButton_ReturnValue = CallFunc_GetHostButton_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanSlotItem_ReturnValue = CallFunc_CanSlotItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.DialogResult_AA710CD8400475561228C78BEBCE1FFB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWaitingForLatentActionCompletion                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDialogExternalLatentActionHandleWaitingDialogHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UItemManagementItemTilePopupMenu_C::DialogResult_AA710CD8400475561228C78BEBCE1FFB(enum class EFortDialogResult Result, class FName ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle)
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "DialogResult_AA710CD8400475561228C78BEBCE1FFB");

	Params::UItemManagementItemTilePopupMenu_C_DialogResult_AA710CD8400475561228C78BEBCE1FFB_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;
	Parms.bWaitingForLatentActionCompletion = bWaitingForLatentActionCompletion;
	Parms.WaitingDialogHandle = WaitingDialogHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementItemTilePopupMenu_C::OnActivated()
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "OnActivated");

	Params::UItemManagementItemTilePopupMenu_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.HandleItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bItemChanged                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoChanged                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIngredientsChanged                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementItemTilePopupMenu_C::HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "HandleItemChanged");

	Params::UItemManagementItemTilePopupMenu_C_HandleItemChanged_Params Parms;
	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__BatchRecycleButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementItemTilePopupMenu_C::BndEvt__BatchRecycleButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "BndEvt__BatchRecycleButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature");

	Params::UItemManagementItemTilePopupMenu_C_BndEvt__BatchRecycleButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemManagementItemTilePopupMenu_C::Construct()
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "Construct");

	Params::UItemManagementItemTilePopupMenu_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementItemTilePopupMenu_C::BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature");

	Params::UItemManagementItemTilePopupMenu_C_BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.HandlePostDifferentContextProviderSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementItemTilePopupMenu_C::HandlePostDifferentContextProviderSet()
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "HandlePostDifferentContextProviderSet");

	Params::UItemManagementItemTilePopupMenu_C_HandlePostDifferentContextProviderSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnBeginOutro
// (Event, Public, BlueprintEvent)
// Parameters:

void UItemManagementItemTilePopupMenu_C::OnBeginOutro()
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "OnBeginOutro");

	Params::UItemManagementItemTilePopupMenu_C_OnBeginOutro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnBeginIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UItemManagementItemTilePopupMenu_C::OnBeginIntro()
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "OnBeginIntro");

	Params::UItemManagementItemTilePopupMenu_C_OnBeginIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemManagementItemTilePopupMenu_C::BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UItemManagementItemTilePopupMenu_C_BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementItemTilePopupMenu_C::BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature");

	Params::UItemManagementItemTilePopupMenu_C_BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementItemTilePopupMenu_C::BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature");

	Params::UItemManagementItemTilePopupMenu_C_BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementItemTilePopupMenu_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature");

	Params::UItemManagementItemTilePopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementItemTilePopupMenu_C::BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature");

	Params::UItemManagementItemTilePopupMenu_C_BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementItemTilePopupMenu_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "OnDeactivated");

	Params::UItemManagementItemTilePopupMenu_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementItemTilePopupMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "Tick");

	Params::UItemManagementItemTilePopupMenu_C_Tick_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.ResetGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemManagementItemTilePopupMenu_C::ResetGate()
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "ResetGate");

	Params::UItemManagementItemTilePopupMenu_C_ResetGate_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.ExecuteUbergraph_ItemManagementItemTilePopupMenu
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button5                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bItemChanged                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAmmoChanged                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIngredientsChanged                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemManagementItemTileButton*CallFunc_GetHostButton_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemManagementItemTileButton*CallFunc_GetHostButton_ReturnValue1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFavorite_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemManagementItemTileButton*CallFunc_GetHostButton_ReturnValue2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConfirmationDialogAction   K2Node_MakeStruct_ConfirmationDialogAction                       ()
// TArray<struct FConfirmationDialogAction>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI*CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemManagementItemTileButton*CallFunc_GetHostButton_ReturnValue3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCollectionBookManager*  CallFunc_GetCollectionBookManager_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SlotItem_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDialogExternalLatentActionHandleTemp_struct_Variable                                             (NoDestructor)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWaitingForLatentActionCompletion             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortDialogExternalLatentActionHandleK2Node_CustomEvent_WaitingDialogHandle                           (NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetMenuPosition_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOpen_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue1                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetMenuPosition_ReturnValue1                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DistanceBetweenTwoVectors_Distance                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementItemTilePopupMenu_C::ExecuteUbergraph_ItemManagementItemTilePopupMenu(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bItemChanged, bool K2Node_Event_bAmmoChanged, bool K2Node_Event_bIngredientsChanged, class UFortItemManagementItemTileButton* CallFunc_GetHostButton_ReturnValue, class UFortItemManagementItemTileButton* CallFunc_GetHostButton_ReturnValue1, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortItemManagementItemTileButton* CallFunc_GetHostButton_ReturnValue2, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction, TArray<struct FConfirmationDialogAction>& K2Node_MakeArray_Array, class UWidget* CallFunc_GetChildAt_ReturnValue, class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortItemManagementItemTileButton* CallFunc_GetHostButton_ReturnValue3, class UFortCollectionBookManager* CallFunc_GetCollectionBookManager_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item1, bool K2Node_DynamicCast_bSuccess1, enum class EFortDialogResult Temp_byte_Variable, bool CallFunc_SlotItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FName Temp_name_Variable, bool Temp_bool_Variable, const struct FFortDialogExternalLatentActionHandle& Temp_struct_Variable, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, bool K2Node_CustomEvent_bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& K2Node_CustomEvent_WaitingDialogHandle, bool K2Node_SwitchEnum1_CmpSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue1, const struct FVector2D& CallFunc_GetMenuPosition_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, bool CallFunc_IsOpen_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue1, const struct FVector2D& CallFunc_GetMenuPosition_ReturnValue1, float CallFunc_DistanceBetweenTwoVectors_Distance, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UFortMcpContext* CallFunc_GetContext_ReturnValue1)
{
	static auto Func = Class->GetFunction("ItemManagementItemTilePopupMenu_C", "ExecuteUbergraph_ItemManagementItemTilePopupMenu");

	Params::UItemManagementItemTilePopupMenu_C_ExecuteUbergraph_ItemManagementItemTilePopupMenu_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button5 = K2Node_ComponentBoundEvent_Button5;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_bItemChanged = K2Node_Event_bItemChanged;
	Parms.K2Node_Event_bAmmoChanged = K2Node_Event_bAmmoChanged;
	Parms.K2Node_Event_bIngredientsChanged = K2Node_Event_bIngredientsChanged;
	Parms.CallFunc_GetHostButton_ReturnValue = CallFunc_GetHostButton_ReturnValue;
	Parms.CallFunc_GetHostButton_ReturnValue1 = CallFunc_GetHostButton_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsFavorite_ReturnValue = CallFunc_IsFavorite_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetHostButton_ReturnValue2 = CallFunc_GetHostButton_ReturnValue2;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeStruct_ConfirmationDialogAction = K2Node_MakeStruct_ConfirmationDialogAction;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue = CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetHostButton_ReturnValue3 = CallFunc_GetHostButton_ReturnValue3;
	Parms.CallFunc_GetCollectionBookManager_ReturnValue = CallFunc_GetCollectionBookManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item1 = K2Node_DynamicCast_AsFort_Account_Item1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_SlotItem_ReturnValue = CallFunc_SlotItem_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_CustomEvent_bWaitingForLatentActionCompletion = K2Node_CustomEvent_bWaitingForLatentActionCompletion;
	Parms.K2Node_CustomEvent_WaitingDialogHandle = K2Node_CustomEvent_WaitingDialogHandle;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetMenuPosition_ReturnValue = CallFunc_GetMenuPosition_ReturnValue;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue = CallFunc_Conv_Vector2DToVector_ReturnValue;
	Parms.CallFunc_IsOpen_ReturnValue = CallFunc_IsOpen_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_NotEqual_Vector2DVector2D_ReturnValue = CallFunc_NotEqual_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue1 = CallFunc_Conv_Vector2DToVector_ReturnValue1;
	Parms.CallFunc_GetMenuPosition_ReturnValue1 = CallFunc_GetMenuPosition_ReturnValue1;
	Parms.CallFunc_DistanceBetweenTwoVectors_Distance = CallFunc_DistanceBetweenTwoVectors_Distance;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
