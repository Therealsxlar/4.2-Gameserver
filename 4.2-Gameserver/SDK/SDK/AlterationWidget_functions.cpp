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


// Function AlterationWidget.AlterationWidget_C.GetValidBrush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UFortAlterationInfo*         CallFunc_GetAlterationInfo_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefintion_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue     ()

struct FSlateBrush UAlterationWidget_C::GetValidBrush(class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "GetValidBrush");

	Params::UAlterationWidget_C_GetValidBrush_Params Parms;
	Parms.CallFunc_GetAlterationInfo_ReturnValue = CallFunc_GetAlterationInfo_ReturnValue;
	Parms.CallFunc_GetAlterationDefintion_ReturnValue = CallFunc_GetAlterationDefintion_ReturnValue;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AlterationWidget.AlterationWidget_C.HasValidBrush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ValidBrush                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAlterationInfo*         CallFunc_GetAlterationInfo_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefintion_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue     ()
// class UObject*                     CallFunc_GetBrushResource_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationWidget_C::HasValidBrush(bool* ValidBrush, class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, class UObject* CallFunc_GetBrushResource_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "HasValidBrush");

	Params::UAlterationWidget_C_HasValidBrush_Params Parms;
	Parms.CallFunc_GetAlterationInfo_ReturnValue = CallFunc_GetAlterationInfo_ReturnValue;
	Parms.CallFunc_GetAlterationDefintion_ReturnValue = CallFunc_GetAlterationDefintion_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetBrushResource_ReturnValue = CallFunc_GetBrushResource_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (ValidBrush != nullptr)
		*ValidBrush = Parms.ValidBrush;

}


// Function AlterationWidget.AlterationWidget_C.IsGamplaySlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAlterationItemDefinition*Alteration                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortAlteration         CallFunc_GetAlterationType_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationWidget_C::IsGamplaySlot(class UFortAlterationItemDefinition* Alteration, bool* Result, enum class EFortAlteration CallFunc_GetAlterationType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "IsGamplaySlot");

	Params::UAlterationWidget_C_IsGamplaySlot_Params Parms;
	Parms.Alteration = Alteration;
	Parms.CallFunc_GetAlterationType_ReturnValue = CallFunc_GetAlterationType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AlterationWidget.AlterationWidget_C.TriggerTextAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAlterationWidget_C::TriggerTextAnimation()
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "TriggerTextAnimation");

	Params::UAlterationWidget_C_TriggerTextAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidget.AlterationWidget_C.SetWidgetSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInIncludeName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bInIncludeShortDescription                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bInIncludeDescription                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBrushSize          InIconSize                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bInUseLargeFormatName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               InShouldShowRarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationWidget_C::SetWidgetSettings(bool bInIncludeName, bool bInIncludeShortDescription, bool bInIncludeDescription, enum class EFortBrushSize InIconSize, bool bInUseLargeFormatName, bool InShouldShowRarity)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "SetWidgetSettings");

	Params::UAlterationWidget_C_SetWidgetSettings_Params Parms;
	Parms.bInIncludeName = bInIncludeName;
	Parms.bInIncludeShortDescription = bInIncludeShortDescription;
	Parms.bInIncludeDescription = bInIncludeDescription;
	Parms.InIconSize = InIconSize;
	Parms.bInUseLargeFormatName = bInUseLargeFormatName;
	Parms.InShouldShowRarity = InShouldShowRarity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidget.AlterationWidget_C.InitLockedLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldFadeAlteration_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldFadeAlteration_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAlterationInfo*         CallFunc_GetAlterationInfo_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRequiredLevel_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               CallFunc_ShouldFadeAlteration_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationWidget_C::InitLockedLayout(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool CallFunc_ShouldFadeAlteration_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_ShouldFadeAlteration_ReturnValue1, class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue, const struct FLinearColor& K2Node_Select1_Default, int32 CallFunc_GetRequiredLevel_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_ShouldFadeAlteration_ReturnValue2, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "InitLockedLayout");

	Params::UAlterationWidget_C_InitLockedLayout_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_ShouldFadeAlteration_ReturnValue = CallFunc_ShouldFadeAlteration_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ShouldFadeAlteration_ReturnValue1 = CallFunc_ShouldFadeAlteration_ReturnValue1;
	Parms.CallFunc_GetAlterationInfo_ReturnValue = CallFunc_GetAlterationInfo_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_GetRequiredLevel_ReturnValue = CallFunc_GetRequiredLevel_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_ShouldFadeAlteration_ReturnValue2 = CallFunc_ShouldFadeAlteration_ReturnValue2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidget.AlterationWidget_C.SetEvolutionDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAlterationInfo*         CallFunc_GetAlterationInfo_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlterationHighlighted_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationWidget_C::SetEvolutionDetails(bool Temp_bool_Variable, class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue, bool CallFunc_IsAlterationHighlighted_ReturnValue, class UClass* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "SetEvolutionDetails");

	Params::UAlterationWidget_C_SetEvolutionDetails_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetAlterationInfo_ReturnValue = CallFunc_GetAlterationInfo_ReturnValue;
	Parms.CallFunc_IsAlterationHighlighted_ReturnValue = CallFunc_IsAlterationHighlighted_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidget.AlterationWidget_C.UpdatePips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAlterationInfo*         LocalAlterationInfo                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    PipMID                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAlterationInfo*         CallFunc_GetAlterationInfo_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefintion_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAlterationInfo*         CallFunc_GetAlterationInfo_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetCorrespondingItem_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefintion_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortAlteration         CallFunc_GetAlterationType_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFreeAlterationChoice_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFreeAlterationChoice_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlterationHighlighted_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentPipCount_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationWidget_C::UpdatePips(class UFortAlterationInfo* LocalAlterationInfo, class UMaterialInstanceDynamic* PipMID, bool Temp_bool_Variable, class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue, float Temp_float_Variable, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, bool Temp_bool_Variable1, class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue1, class UFortItem* CallFunc_GetCorrespondingItem_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EFortAlteration CallFunc_GetAlterationType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsFreeAlterationChoice_ReturnValue, bool CallFunc_IsFreeAlterationChoice_ReturnValue1, bool CallFunc_IsAlterationHighlighted_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_GetCurrentPipCount_ReturnValue, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "UpdatePips");

	Params::UAlterationWidget_C_UpdatePips_Params Parms;
	Parms.LocalAlterationInfo = LocalAlterationInfo;
	Parms.PipMID = PipMID;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetAlterationInfo_ReturnValue = CallFunc_GetAlterationInfo_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetAlterationDefintion_ReturnValue = CallFunc_GetAlterationDefintion_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetAlterationInfo_ReturnValue1 = CallFunc_GetAlterationInfo_ReturnValue1;
	Parms.CallFunc_GetCorrespondingItem_ReturnValue = CallFunc_GetCorrespondingItem_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_GetAlterationDefintion_ReturnValue1 = CallFunc_GetAlterationDefintion_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetAlterationType_ReturnValue = CallFunc_GetAlterationType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsFreeAlterationChoice_ReturnValue = CallFunc_IsFreeAlterationChoice_ReturnValue;
	Parms.CallFunc_IsFreeAlterationChoice_ReturnValue1 = CallFunc_IsFreeAlterationChoice_ReturnValue1;
	Parms.CallFunc_IsAlterationHighlighted_ReturnValue = CallFunc_IsAlterationHighlighted_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetCurrentPipCount_ReturnValue = CallFunc_GetCurrentPipCount_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidget.AlterationWidget_C.InitDescriptiveText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAlterationItemDefinition*AlterationDef                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAlterationInfo*         CallFunc_GetAlterationInfo_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFreeAlterationChoice_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSingleLineDescription_ReturnValue                    ()
// class FText                        CallFunc_GetShortDescription_ReturnValue                         ()
// class UFortAlterationInfo*         CallFunc_GetAlterationInfo_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefintion_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldFadeAlteration_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select2_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationWidget_C::InitDescriptiveText(class UFortAlterationItemDefinition* AlterationDef, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, bool Temp_bool_Variable3, bool CallFunc_IsValid_ReturnValue, class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue, bool CallFunc_IsFreeAlterationChoice_ReturnValue, class UClass* Temp_class_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetSingleLineDescription_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue1, class FText CallFunc_GetDisplayName_ReturnValue, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue, bool CallFunc_ShouldFadeAlteration_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default, class UClass* Temp_class_Variable1, class UWidget* K2Node_Select2_Default, bool Temp_bool_Variable4, class UClass* K2Node_Select3_Default, enum class ESlateVisibility K2Node_Select4_Default)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "InitDescriptiveText");

	Params::UAlterationWidget_C_InitDescriptiveText_Params Parms;
	Parms.AlterationDef = AlterationDef;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAlterationInfo_ReturnValue = CallFunc_GetAlterationInfo_ReturnValue;
	Parms.CallFunc_IsFreeAlterationChoice_ReturnValue = CallFunc_IsFreeAlterationChoice_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSingleLineDescription_ReturnValue = CallFunc_GetSingleLineDescription_ReturnValue;
	Parms.CallFunc_GetShortDescription_ReturnValue = CallFunc_GetShortDescription_ReturnValue;
	Parms.CallFunc_GetAlterationInfo_ReturnValue1 = CallFunc_GetAlterationInfo_ReturnValue1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetAlterationDefintion_ReturnValue = CallFunc_GetAlterationDefintion_ReturnValue;
	Parms.CallFunc_ShouldFadeAlteration_ReturnValue = CallFunc_ShouldFadeAlteration_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidget.AlterationWidget_C.InitIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAlterationItemDefinition*AlterationDef                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasValidBrush_ValidBrush                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetValidBrush_ReturnValue                               ()
// struct FSlateBrush                 CallFunc_ResizeBrush_NewParam                                    ()

void UAlterationWidget_C::InitIcon(class UFortAlterationItemDefinition* AlterationDef, bool CallFunc_HasValidBrush_ValidBrush, const struct FSlateBrush& CallFunc_GetValidBrush_ReturnValue, const struct FSlateBrush& CallFunc_ResizeBrush_NewParam)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "InitIcon");

	Params::UAlterationWidget_C_InitIcon_Params Parms;
	Parms.AlterationDef = AlterationDef;
	Parms.CallFunc_HasValidBrush_ValidBrush = CallFunc_HasValidBrush_ValidBrush;
	Parms.CallFunc_GetValidBrush_ReturnValue = CallFunc_GetValidBrush_ReturnValue;
	Parms.CallFunc_ResizeBrush_NewParam = CallFunc_ResizeBrush_NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidget.AlterationWidget_C.ShouldFadeAlteration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortAlterationInfo*         CallFunc_GetAlterationInfo_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlterationUnlocked_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlterationHighlighted_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAlterationWidget_C::ShouldFadeAlteration(class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue, bool CallFunc_IsAlterationUnlocked_ReturnValue, bool CallFunc_IsAlterationHighlighted_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "ShouldFadeAlteration");

	Params::UAlterationWidget_C_ShouldFadeAlteration_Params Parms;
	Parms.CallFunc_GetAlterationInfo_ReturnValue = CallFunc_GetAlterationInfo_ReturnValue;
	Parms.CallFunc_IsAlterationUnlocked_ReturnValue = CallFunc_IsAlterationUnlocked_ReturnValue;
	Parms.CallFunc_IsAlterationHighlighted_ReturnValue = CallFunc_IsAlterationHighlighted_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AlterationWidget.AlterationWidget_C.GetHighlightColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationInfo*         CallFunc_GetAlterationInfo_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlterationHighlighted_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Get_Buff_Color_Color                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UAlterationWidget_C::GetHighlightColor(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue, bool CallFunc_IsAlterationHighlighted_ReturnValue, const struct FLinearColor& CallFunc_Get_Buff_Color_Color, const struct FLinearColor& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "GetHighlightColor");

	Params::UAlterationWidget_C_GetHighlightColor_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetAlterationInfo_ReturnValue = CallFunc_GetAlterationInfo_ReturnValue;
	Parms.CallFunc_IsAlterationHighlighted_ReturnValue = CallFunc_IsAlterationHighlighted_ReturnValue;
	Parms.CallFunc_Get_Buff_Color_Color = CallFunc_Get_Buff_Color_Color;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AlterationWidget.AlterationWidget_C.OnSetup
// (Event, Public, BlueprintEvent)
// Parameters:

void UAlterationWidget_C::OnSetup()
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "OnSetup");

	Params::UAlterationWidget_C_OnSetup_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidget.AlterationWidget_C.ExecuteUbergraph_AlterationWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationWidget_C::ExecuteUbergraph_AlterationWidget(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("AlterationWidget_C", "ExecuteUbergraph_AlterationWidget");

	Params::UAlterationWidget_C_ExecuteUbergraph_AlterationWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
