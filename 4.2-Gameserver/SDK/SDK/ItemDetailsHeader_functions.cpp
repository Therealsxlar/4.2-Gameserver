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


// Function ItemDetailsHeader.ItemDetailsHeader_C.SetStyles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemDetailsHeader_C::SetStyles()
{
	static auto Func = Class->GetFunction("ItemDetailsHeader_C", "SetStyles");

	Params::UItemDetailsHeader_C_SetStyles_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsHeader.ItemDetailsHeader_C.UpdateItemsForWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetSchematicCraftingResultBP_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   K2Node_DynamicCast_AsFort_Weapon_Item_Definition                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array1                                          (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array2                                          (ConstParm, ZeroConstructor, ReferenceParm)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetSchematicResultType_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetSchematicCraftingResultBP_ReturnValue1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// enum class EFortItemTier           CallFunc_GetTier_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Convert_Tier_To_Integer_Numeric_Tier                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDroppedItem_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLoadedAmmo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// bool                               CallFunc_Array_Contains_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemTier           CallFunc_GetTier_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Convert_Tier_To_Integer_Numeric_Tier1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemDetailsHeader_C::UpdateItemsForWidgets(TArray<enum class EFortItemType>& K2Node_MakeArray_Array, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, class UFortWeaponItemDefinition* K2Node_DynamicCast_AsFort_Weapon_Item_Definition, bool K2Node_DynamicCast_bSuccess, TArray<enum class EFortItemType>& K2Node_MakeArray_Array1, TArray<enum class EFortItemType>& K2Node_MakeArray_Array2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortItemType CallFunc_GetSchematicResultType_ReturnValue, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue1, enum class EFortItemType CallFunc_GetType_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue1, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, enum class EFortItemTier CallFunc_GetTier_ReturnValue, bool CallFunc_IsValid_ReturnValue2, int32 CallFunc_Convert_Tier_To_Integer_Numeric_Tier, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class EFortItemType K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_Contains_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select1_Default, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility Temp_byte_Variable5, bool Temp_bool_Variable3, enum class ESlateVisibility K2Node_Select3_Default, bool CallFunc_IsDroppedItem_ReturnValue, int32 CallFunc_GetLoadedAmmo_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue2, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Array_Contains_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, enum class EFortItemTier CallFunc_GetTier_ReturnValue1, int32 CallFunc_Convert_Tier_To_Integer_Numeric_Tier1, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemDetailsHeader_C", "UpdateItemsForWidgets");

	Params::UItemDetailsHeader_C_UpdateItemsForWidgets_Params Parms;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetSchematicCraftingResultBP_ReturnValue = CallFunc_GetSchematicCraftingResultBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Weapon_Item_Definition = K2Node_DynamicCast_AsFort_Weapon_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSchematicResultType_ReturnValue = CallFunc_GetSchematicResultType_ReturnValue;
	Parms.CallFunc_GetSchematicCraftingResultBP_ReturnValue1 = CallFunc_GetSchematicCraftingResultBP_ReturnValue1;
	Parms.CallFunc_GetType_ReturnValue1 = CallFunc_GetType_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_GetTier_ReturnValue = CallFunc_GetTier_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_Convert_Tier_To_Integer_Numeric_Tier = CallFunc_Convert_Tier_To_Integer_Numeric_Tier;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue1 = CallFunc_Array_Contains_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_IsDroppedItem_ReturnValue = CallFunc_IsDroppedItem_ReturnValue;
	Parms.CallFunc_GetLoadedAmmo_ReturnValue = CallFunc_GetLoadedAmmo_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue2 = CallFunc_GetType_ReturnValue2;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue2 = CallFunc_Array_Contains_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetTier_ReturnValue1 = CallFunc_GetTier_ReturnValue1;
	Parms.CallFunc_Convert_Tier_To_Integer_Numeric_Tier1 = CallFunc_Convert_Tier_To_Integer_Numeric_Tier1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsHeader.ItemDetailsHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemDetailsHeader_C::Construct()
{
	static auto Func = Class->GetFunction("ItemDetailsHeader_C", "Construct");

	Params::UItemDetailsHeader_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsHeader.ItemDetailsHeader_C.HandleDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemDetailsHeader_C::HandleDifferentItemToDetailSet()
{
	static auto Func = Class->GetFunction("ItemDetailsHeader_C", "HandleDifferentItemToDetailSet");

	Params::UItemDetailsHeader_C_HandleDifferentItemToDetailSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsHeader.ItemDetailsHeader_C.HandleDifferentItemToCompareSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemDetailsHeader_C::HandleDifferentItemToCompareSet()
{
	static auto Func = Class->GetFunction("ItemDetailsHeader_C", "HandleDifferentItemToCompareSet");

	Params::UItemDetailsHeader_C_HandleDifferentItemToCompareSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsHeader.ItemDetailsHeader_C.ExecuteUbergraph_ItemDetailsHeader
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemDetailsHeader_C::ExecuteUbergraph_ItemDetailsHeader(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue1)
{
	static auto Func = Class->GetFunction("ItemDetailsHeader_C", "ExecuteUbergraph_ItemDetailsHeader");

	Params::UItemDetailsHeader_C_ExecuteUbergraph_ItemDetailsHeader_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue1 = CallFunc_GetDynamicMaterial_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
