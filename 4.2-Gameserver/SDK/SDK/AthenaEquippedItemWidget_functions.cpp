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


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.GetRemainingAmmoText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              RemainingAmmoCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CurrentAmmoText                                                  (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        K2Node_Select_Default                                            ()

void UAthenaEquippedItemWidget_C::GetRemainingAmmoText(int32 RemainingAmmoCount, class FText* CurrentAmmoText, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText Temp_text_Variable, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaEquippedItemWidget_C", "GetRemainingAmmoText");

	Params::UAthenaEquippedItemWidget_C_GetRemainingAmmoText_Params Parms;
	Parms.RemainingAmmoCount = RemainingAmmoCount;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentAmmoText != nullptr)
		*CurrentAmmoText = Parms.CurrentAmmoText;

}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.GetCurrentAmmoText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CurrentAmmoCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CurrentAmmoText                                                  (Parm, OutParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue1                                     ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEquippedItemWidget_C::GetCurrentAmmoText(int32 CurrentAmmoCount, class FText* CurrentAmmoText, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaEquippedItemWidget_C", "GetCurrentAmmoText");

	Params::UAthenaEquippedItemWidget_C_GetCurrentAmmoText_Params Parms;
	Parms.CurrentAmmoCount = CurrentAmmoCount;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentAmmoText != nullptr)
		*CurrentAmmoText = Parms.CurrentAmmoText;

}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateWidgetColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasAmmo                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select2_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UAthenaEquippedItemWidget_C::UpdateWidgetColor(bool HasAmmo, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable1, float K2Node_Select_Default, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select1_Default, const struct FLinearColor& K2Node_Select2_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("AthenaEquippedItemWidget_C", "UpdateWidgetColor");

	Params::UAthenaEquippedItemWidget_C_UpdateWidgetColor_Params Parms;
	Parms.HasAmmo = HasAmmo;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ResourceCountChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              ResourceCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEquippedItemWidget_C::ResourceCountChanged(int32 ResourceCount)
{
	static auto Func = Class->GetFunction("AthenaEquippedItemWidget_C", "ResourceCountChanged");

	Params::UAthenaEquippedItemWidget_C_ResourceCountChanged_Params Parms;
	Parms.ResourceCount = ResourceCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.AmmoTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortWeaponRanged*           RangedWeapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*    Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEquippedItemWidget_C::AmmoTypeChanged(class AFortWeaponRanged* RangedWeapon, class UFortWorldItemDefinition* Item)
{
	static auto Func = Class->GetFunction("AthenaEquippedItemWidget_C", "AmmoTypeChanged");

	Params::UAthenaEquippedItemWidget_C_AmmoTypeChanged_Params Parms;
	Parms.RangedWeapon = RangedWeapon;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ResourceTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortResourceItemDefinition* Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ResourceCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEquippedItemWidget_C::ResourceTypeChanged(class UFortResourceItemDefinition* Item, int32 ResourceCount)
{
	static auto Func = Class->GetFunction("AthenaEquippedItemWidget_C", "ResourceTypeChanged");

	Params::UAthenaEquippedItemWidget_C_ResourceTypeChanged_Params Parms;
	Parms.Item = Item;
	Parms.ResourceCount = ResourceCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.WeaponTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEquippedWeaponDisplay  Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEquippedItemWidget_C::WeaponTypeChanged(enum class EEquippedWeaponDisplay Mode)
{
	static auto Func = Class->GetFunction("AthenaEquippedItemWidget_C", "WeaponTypeChanged");

	Params::UAthenaEquippedItemWidget_C_WeaponTypeChanged_Params Parms;
	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.HasAmmoChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bHasAmmo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEquippedItemWidget_C::HasAmmoChanged(bool bHasAmmo)
{
	static auto Func = Class->GetFunction("AthenaEquippedItemWidget_C", "HasAmmoChanged");

	Params::UAthenaEquippedItemWidget_C_HasAmmoChanged_Params Parms;
	Parms.bHasAmmo = bHasAmmo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.AmmoChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              MagazineAmmoCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BackupAmmoCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalRemaining                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEquippedItemWidget_C::AmmoChanged(int32 MagazineAmmoCount, int32 BackupAmmoCount, int32 TotalRemaining)
{
	static auto Func = Class->GetFunction("AthenaEquippedItemWidget_C", "AmmoChanged");

	Params::UAthenaEquippedItemWidget_C_AmmoChanged_Params Parms;
	Parms.MagazineAmmoCount = MagazineAmmoCount;
	Parms.BackupAmmoCount = BackupAmmoCount;
	Parms.TotalRemaining = TotalRemaining;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UtilityItemCountChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Remaining                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEquippedItemWidget_C::UtilityItemCountChanged(int32 Remaining)
{
	static auto Func = Class->GetFunction("AthenaEquippedItemWidget_C", "UtilityItemCountChanged");

	Params::UAthenaEquippedItemWidget_C_UtilityItemCountChanged_Params Parms;
	Parms.Remaining = Remaining;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UtilityItemTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortWeapon*                 Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEquippedItemWidget_C::UtilityItemTypeChanged(class AFortWeapon* Weapon, class UFortWeaponItemDefinition* Item)
{
	static auto Func = Class->GetFunction("AthenaEquippedItemWidget_C", "UtilityItemTypeChanged");

	Params::UAthenaEquippedItemWidget_C_UtilityItemTypeChanged_Params Parms;
	Parms.Weapon = Weapon;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ExecuteUbergraph_AthenaEquippedItemWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEquippedWeaponDisplay  Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_ResourceCount1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeaponRanged*           K2Node_Event_RangedWeapon                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*    K2Node_Event_Item2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue     ()
// int32                              CallFunc_GetBulletsPerClip_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortResourceItemDefinition* K2Node_Event_Item1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ResourceCount                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             ()
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue1    ()
// enum class EEquippedWeaponDisplay  K2Node_Event_Mode                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bHasAmmo                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_MagazineAmmoCount                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_BackupAmmoCount                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TotalRemaining                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetRemainingAmmoText_CurrentAmmoText                    ()
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetCurrentAmmoText_CurrentAmmoText                      ()
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Remaining                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             ()
// class AFortWeapon*                 K2Node_Event_Weapon                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   K2Node_Event_Item                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue2    ()

void UAthenaEquippedItemWidget_C::ExecuteUbergraph_AthenaEquippedItemWidget(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable, float Temp_float_Variable2, float Temp_float_Variable3, enum class EEquippedWeaponDisplay Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable1, int32 K2Node_Event_ResourceCount1, class AFortWeaponRanged* K2Node_Event_RangedWeapon, class UFortWorldItemDefinition* K2Node_Event_Item2, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, int32 CallFunc_GetBulletsPerClip_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortResourceItemDefinition* K2Node_Event_Item1, int32 K2Node_Event_ResourceCount, class FText CallFunc_Conv_IntToText_ReturnValue1, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue1, enum class EEquippedWeaponDisplay K2Node_Event_Mode, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_bHasAmmo, int32 K2Node_Event_MagazineAmmoCount, int32 K2Node_Event_BackupAmmoCount, int32 K2Node_Event_TotalRemaining, class FText CallFunc_GetRemainingAmmoText_CurrentAmmoText, bool CallFunc_Greater_IntInt_ReturnValue1, class FText CallFunc_GetCurrentAmmoText_CurrentAmmoText, float K2Node_Select1_Default, bool CallFunc_Greater_IntInt_ReturnValue2, float K2Node_Select2_Default, int32 K2Node_Event_Remaining, class FText CallFunc_Conv_IntToText_ReturnValue2, class AFortWeapon* K2Node_Event_Weapon, class UFortWeaponItemDefinition* K2Node_Event_Item, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaEquippedItemWidget_C", "ExecuteUbergraph_AthenaEquippedItemWidget");

	Params::UAthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Event_ResourceCount1 = K2Node_Event_ResourceCount1;
	Parms.K2Node_Event_RangedWeapon = K2Node_Event_RangedWeapon;
	Parms.K2Node_Event_Item2 = K2Node_Event_Item2;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetBulletsPerClip_ReturnValue = CallFunc_GetBulletsPerClip_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Event_Item1 = K2Node_Event_Item1;
	Parms.K2Node_Event_ResourceCount = K2Node_Event_ResourceCount;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue1 = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue1;
	Parms.K2Node_Event_Mode = K2Node_Event_Mode;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_bHasAmmo = K2Node_Event_bHasAmmo;
	Parms.K2Node_Event_MagazineAmmoCount = K2Node_Event_MagazineAmmoCount;
	Parms.K2Node_Event_BackupAmmoCount = K2Node_Event_BackupAmmoCount;
	Parms.K2Node_Event_TotalRemaining = K2Node_Event_TotalRemaining;
	Parms.CallFunc_GetRemainingAmmoText_CurrentAmmoText = CallFunc_GetRemainingAmmoText_CurrentAmmoText;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_GetCurrentAmmoText_CurrentAmmoText = CallFunc_GetCurrentAmmoText_CurrentAmmoText;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Event_Remaining = K2Node_Event_Remaining;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;
	Parms.K2Node_Event_Weapon = K2Node_Event_Weapon;
	Parms.K2Node_Event_Item = K2Node_Event_Item;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue2 = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
