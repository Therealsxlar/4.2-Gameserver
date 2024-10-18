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


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Fort PC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPlayerController*       FortPC                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformKeyPickerTileButton_C::Get_Fort_PC(class AFortPlayerController** FortPC, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "Get Fort PC");

	Params::UItemTransformKeyPickerTileButton_C_Get_Fort_PC_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (FortPC != nullptr)
		*FortPC = Parms.FortPC;

}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key Catalysts
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UFortAccountItem*            CallFunc_Get_Transform_Key_AsFort_Account_Item                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortConversionControlItemDefinition*K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetRequiredCatalysts_ReturnValue                        ()

struct FGameplayTagContainer UItemTransformKeyPickerTileButton_C::Get_Transform_Key_Catalysts(class UFortAccountItem* CallFunc_Get_Transform_Key_AsFort_Account_Item, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortConversionControlItemDefinition* K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_GetRequiredCatalysts_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "Get Transform Key Catalysts");

	Params::UItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts_Params Parms;
	Parms.CallFunc_Get_Transform_Key_AsFort_Account_Item = CallFunc_Get_Transform_Key_AsFort_Account_Item;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition = K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRequiredCatalysts_ReturnValue = CallFunc_GetRequiredCatalysts_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Mark Item As Seen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       CatalystTags                                                     (Edit, BlueprintVisible)
// class AFortPlayerController*       CallFunc_Get_Fort_PC_FortPC                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_Get_Transform_Key_Catalysts_ReturnValue                 ()
// class UFortHomebaseNodeItem*       CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumGameplayTagsInContainer_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_Get_Transform_Key_AsFort_Account_Item                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformKeyPickerTileButton_C::Mark_Item_As_Seen(const struct FGameplayTagContainer& CatalystTags, class AFortPlayerController* CallFunc_Get_Fort_PC_FortPC, const struct FGameplayTagContainer& CallFunc_Get_Transform_Key_Catalysts_ReturnValue, class UFortHomebaseNodeItem* CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue, int32 CallFunc_GetNumGameplayTagsInContainer_ReturnValue, class UFortAccountItem* CallFunc_Get_Transform_Key_AsFort_Account_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "Mark Item As Seen");

	Params::UItemTransformKeyPickerTileButton_C_Mark_Item_As_Seen_Params Parms;
	Parms.CatalystTags = CatalystTags;
	Parms.CallFunc_Get_Fort_PC_FortPC = CallFunc_Get_Fort_PC_FortPC;
	Parms.CallFunc_Get_Transform_Key_Catalysts_ReturnValue = CallFunc_Get_Transform_Key_Catalysts_ReturnValue;
	Parms.CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue = CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue;
	Parms.CallFunc_GetNumGameplayTagsInContainer_ReturnValue = CallFunc_GetNumGameplayTagsInContainer_ReturnValue;
	Parms.CallFunc_Get_Transform_Key_AsFort_Account_Item = CallFunc_Get_Transform_Key_AsFort_Account_Item;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Is Transform Key Consumable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bConsumedOnConversion                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItem*            CallFunc_Get_Transform_Key_AsFort_Account_Item                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortConversionControlItemDefinition*K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetRequiredCatalysts_ReturnValue                        ()
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformKeyPickerTileButton_C::Is_Transform_Key_Consumable(bool* bConsumedOnConversion, class UFortAccountItem* CallFunc_Get_Transform_Key_AsFort_Account_Item, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortConversionControlItemDefinition* K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_GetRequiredCatalysts_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "Is Transform Key Consumable");

	Params::UItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable_Params Parms;
	Parms.CallFunc_Get_Transform_Key_AsFort_Account_Item = CallFunc_Get_Transform_Key_AsFort_Account_Item;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition = K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRequiredCatalysts_ReturnValue = CallFunc_GetRequiredCatalysts_ReturnValue;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bConsumedOnConversion != nullptr)
		*bConsumedOnConversion = Parms.bConsumedOnConversion;

}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAccountItem*            AsFort_Account_Item                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetListItemObject_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformKeyPickerTileButton_C::Get_Transform_Key(class UFortAccountItem** AsFort_Account_Item, class UObject* CallFunc_GetListItemObject_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "Get Transform Key");

	Params::UItemTransformKeyPickerTileButton_C_Get_Transform_Key_Params Parms;
	Parms.CallFunc_GetListItemObject_ReturnValue = CallFunc_GetListItemObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsFort_Account_Item != nullptr)
		*AsFort_Account_Item = Parms.AsFort_Account_Item;

}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Update Bang State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       CatalystTags                                                     (Edit, BlueprintVisible)
// class AFortPlayerController*       CallFunc_Get_Fort_PC_FortPC                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHomebaseNodeItem*       CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumGameplayTagsInContainer_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_Get_Transform_Key_Catalysts_ReturnValue                 ()
// class UFortAccountItem*            CallFunc_Get_Transform_Key_AsFort_Account_Item                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformKeyPickerTileButton_C::Update_Bang_State(const struct FGameplayTagContainer& CatalystTags, class AFortPlayerController* CallFunc_Get_Fort_PC_FortPC, class UFortHomebaseNodeItem* CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue, int32 CallFunc_GetNumGameplayTagsInContainer_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayTagContainer& CallFunc_Get_Transform_Key_Catalysts_ReturnValue, class UFortAccountItem* CallFunc_Get_Transform_Key_AsFort_Account_Item, bool CallFunc_HasBeenSeenLocally_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue1)
{
	static auto Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "Update Bang State");

	Params::UItemTransformKeyPickerTileButton_C_Update_Bang_State_Params Parms;
	Parms.CatalystTags = CatalystTags;
	Parms.CallFunc_Get_Fort_PC_FortPC = CallFunc_Get_Fort_PC_FortPC;
	Parms.CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue = CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue;
	Parms.CallFunc_GetNumGameplayTagsInContainer_ReturnValue = CallFunc_GetNumGameplayTagsInContainer_ReturnValue;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Get_Transform_Key_Catalysts_ReturnValue = CallFunc_Get_Transform_Key_Catalysts_ReturnValue;
	Parms.CallFunc_Get_Transform_Key_AsFort_Account_Item = CallFunc_Get_Transform_Key_AsFort_Account_Item;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue1 = CallFunc_HasBeenSeenLocally_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyPickerTileButton_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "OnListItemObjectSet");

	Params::UItemTransformKeyPickerTileButton_C_OnListItemObjectSet_Params Parms;
	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemTransformKeyPickerTileButton_C::BP_OnSelected()
{
	static auto Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "BP_OnSelected");

	Params::UItemTransformKeyPickerTileButton_C_BP_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemTransformKeyPickerTileButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "BP_OnHovered");

	Params::UItemTransformKeyPickerTileButton_C_BP_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.ExecuteUbergraph_ItemTransformKeyPickerTileButton
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNullItem_Is_Null_Item                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldUseNewItemCards_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyPickerTileButton_C::ExecuteUbergraph_ItemTransformKeyPickerTileButton(int32 EntryPoint, bool Temp_bool_Variable, class UObject* K2Node_Event_ListItemObject, bool CallFunc_IsNullItem_Is_Null_Item, bool CallFunc_ShouldUseNewItemCards_ReturnValue, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "ExecuteUbergraph_ItemTransformKeyPickerTileButton");

	Params::UItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.CallFunc_IsNullItem_Is_Null_Item = CallFunc_IsNullItem_Is_Null_Item;
	Parms.CallFunc_ShouldUseNewItemCards_ReturnValue = CallFunc_ShouldUseNewItemCards_ReturnValue;
	Parms.CallFunc_GetCardDimensions_ReturnValue = CallFunc_GetCardDimensions_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
