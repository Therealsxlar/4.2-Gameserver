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


// Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.GetDisplayName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DisplayName                                                      (Parm, OutParm)
// class FText                        OutName                                                          (Edit, BlueprintVisible)
// enum class EFortItemType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// class FText                        Temp_text_Variable5                                              ()
// class FText                        Temp_text_Variable6                                              ()
// class FText                        Temp_text_Variable7                                              ()
// class FText                        Temp_text_Variable8                                              ()
// class FText                        Temp_text_Variable9                                              ()
// class FText                        Temp_text_Variable10                                             ()
// class FText                        Temp_text_Variable11                                             ()
// class FText                        Temp_text_Variable12                                             ()
// class FText                        Temp_text_Variable13                                             ()
// class FText                        Temp_text_Variable14                                             ()
// class FText                        Temp_text_Variable15                                             ()
// class FText                        Temp_text_Variable16                                             ()
// class FText                        Temp_text_Variable17                                             ()
// class FText                        Temp_text_Variable18                                             ()
// class FText                        Temp_text_Variable19                                             ()
// class FText                        Temp_text_Variable20                                             ()
// class FText                        Temp_text_Variable21                                             ()
// class FText                        Temp_text_Variable22                                             ()
// class FText                        Temp_text_Variable23                                             ()
// class FText                        Temp_text_Variable24                                             ()
// class FText                        Temp_text_Variable25                                             ()
// class FText                        Temp_text_Variable26                                             ()
// class FText                        Temp_text_Variable27                                             ()
// class FText                        Temp_text_Variable28                                             ()
// class FText                        Temp_text_Variable29                                             ()
// class FText                        Temp_text_Variable30                                             ()
// class FText                        Temp_text_Variable31                                             ()
// class FText                        Temp_text_Variable32                                             ()
// class FText                        Temp_text_Variable33                                             ()
// class FText                        Temp_text_Variable34                                             ()
// class FText                        Temp_text_Variable35                                             ()
// class FText                        Temp_text_Variable36                                             ()
// class FText                        Temp_text_Variable37                                             ()
// class FText                        Temp_text_Variable38                                             ()
// class FText                        Temp_text_Variable39                                             ()
// class FText                        Temp_text_Variable40                                             ()
// class FText                        Temp_text_Variable41                                             ()
// class FText                        Temp_text_Variable42                                             ()
// class FText                        Temp_text_Variable43                                             ()
// class FText                        Temp_text_Variable44                                             ()
// class FText                        Temp_text_Variable45                                             ()
// class FText                        Temp_text_Variable46                                             ()
// class FText                        Temp_text_Variable47                                             ()
// class FText                        Temp_text_Variable48                                             ()
// class FText                        Temp_text_Variable49                                             ()
// class FText                        Temp_text_Variable50                                             ()
// class FText                        Temp_text_Variable51                                             ()
// class FText                        Temp_text_Variable52                                             ()
// class FText                        Temp_text_Variable53                                             ()
// class FText                        Temp_text_Variable54                                             ()
// class FText                        Temp_text_Variable55                                             ()
// class FText                        Temp_text_Variable56                                             ()
// class FText                        Temp_text_Variable57                                             ()
// class FText                        Temp_text_Variable58                                             ()
// class FText                        Temp_text_Variable59                                             ()
// class FText                        Temp_text_Variable60                                             ()
// class FText                        Temp_text_Variable61                                             ()
// class FText                        Temp_text_Variable62                                             ()
// class FText                        Temp_text_Variable63                                             ()
// class FText                        Temp_text_Variable64                                             ()
// class FText                        Temp_text_Variable65                                             ()
// class FText                        Temp_text_Variable66                                             ()
// class FText                        Temp_text_Variable67                                             ()
// class FText                        Temp_text_Variable68                                             ()
// class FText                        Temp_text_Variable69                                             ()
// class FText                        Temp_text_Variable70                                             ()
// class FText                        Temp_text_Variable71                                             ()
// class FText                        Temp_text_Variable72                                             ()
// class FText                        Temp_text_Variable73                                             ()
// class FText                        Temp_text_Variable74                                             ()
// class FText                        Temp_text_Variable75                                             ()
// class FText                        Temp_text_Variable76                                             ()
// class FText                        Temp_text_Variable77                                             ()
// class FText                        Temp_text_Variable78                                             ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            ()
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue1                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue2                            ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData4                            (HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorker*                 K2Node_DynamicCast_AsFort_Worker                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortInventoryFilter    CallFunc_GetFilterCategory_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTertiaryCategory_ItemCategoryText                    ()
// struct FSlateBrush                 CallFunc_GetTertiaryCategory_ItemCategoryBrush                   ()
// bool                               CallFunc_GetTertiaryCategory_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData5                            (HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue1                                     ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData6                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue2                                     ()

void URewardInfoSimpleWidget_C::GetDisplayName(class FText* DisplayName, class FText OutName, enum class EFortItemType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class FText Temp_text_Variable12, class FText Temp_text_Variable13, class FText Temp_text_Variable14, class FText Temp_text_Variable15, class FText Temp_text_Variable16, class FText Temp_text_Variable17, class FText Temp_text_Variable18, class FText Temp_text_Variable19, class FText Temp_text_Variable20, class FText Temp_text_Variable21, class FText Temp_text_Variable22, class FText Temp_text_Variable23, class FText Temp_text_Variable24, class FText Temp_text_Variable25, class FText Temp_text_Variable26, class FText Temp_text_Variable27, class FText Temp_text_Variable28, class FText Temp_text_Variable29, class FText Temp_text_Variable30, class FText Temp_text_Variable31, class FText Temp_text_Variable32, class FText Temp_text_Variable33, class FText Temp_text_Variable34, class FText Temp_text_Variable35, class FText Temp_text_Variable36, class FText Temp_text_Variable37, class FText Temp_text_Variable38, class FText Temp_text_Variable39, class FText Temp_text_Variable40, class FText Temp_text_Variable41, class FText Temp_text_Variable42, class FText Temp_text_Variable43, class FText Temp_text_Variable44, class FText Temp_text_Variable45, class FText Temp_text_Variable46, class FText Temp_text_Variable47, class FText Temp_text_Variable48, class FText Temp_text_Variable49, class FText Temp_text_Variable50, class FText Temp_text_Variable51, class FText Temp_text_Variable52, class FText Temp_text_Variable53, class FText Temp_text_Variable54, class FText Temp_text_Variable55, class FText Temp_text_Variable56, class FText Temp_text_Variable57, class FText Temp_text_Variable58, class FText Temp_text_Variable59, class FText Temp_text_Variable60, class FText Temp_text_Variable61, class FText Temp_text_Variable62, class FText Temp_text_Variable63, class FText Temp_text_Variable64, class FText Temp_text_Variable65, class FText Temp_text_Variable66, class FText Temp_text_Variable67, class FText Temp_text_Variable68, class FText Temp_text_Variable69, class FText Temp_text_Variable70, class FText Temp_text_Variable71, class FText Temp_text_Variable72, class FText Temp_text_Variable73, class FText Temp_text_Variable74, class FText Temp_text_Variable75, class FText Temp_text_Variable76, class FText Temp_text_Variable77, class FText Temp_text_Variable78, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UFortItem* CallFunc_GetItemInstance_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, class UFortItem* CallFunc_GetItemInstance_ReturnValue1, class UFortWorker* K2Node_DynamicCast_AsFort_Worker, bool K2Node_DynamicCast_bSuccess, enum class EFortInventoryFilter CallFunc_GetFilterCategory_ReturnValue, class UFortItem* CallFunc_GetItemInstance_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData5, class UFortItem* CallFunc_GetItemInstance_ReturnValue3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, enum class EFortItemType CallFunc_GetType_ReturnValue, class FText CallFunc_Format_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class UFortItem* CallFunc_GetItemInstance_ReturnValue4, enum class EFortItemType CallFunc_GetType_ReturnValue1, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2)
{
	static auto Func = Class->GetFunction("RewardInfoSimpleWidget_C", "GetDisplayName");

	Params::URewardInfoSimpleWidget_C_GetDisplayName_Params Parms;
	Parms.OutName = OutName;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.Temp_text_Variable11 = Temp_text_Variable11;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable13 = Temp_text_Variable13;
	Parms.Temp_text_Variable14 = Temp_text_Variable14;
	Parms.Temp_text_Variable15 = Temp_text_Variable15;
	Parms.Temp_text_Variable16 = Temp_text_Variable16;
	Parms.Temp_text_Variable17 = Temp_text_Variable17;
	Parms.Temp_text_Variable18 = Temp_text_Variable18;
	Parms.Temp_text_Variable19 = Temp_text_Variable19;
	Parms.Temp_text_Variable20 = Temp_text_Variable20;
	Parms.Temp_text_Variable21 = Temp_text_Variable21;
	Parms.Temp_text_Variable22 = Temp_text_Variable22;
	Parms.Temp_text_Variable23 = Temp_text_Variable23;
	Parms.Temp_text_Variable24 = Temp_text_Variable24;
	Parms.Temp_text_Variable25 = Temp_text_Variable25;
	Parms.Temp_text_Variable26 = Temp_text_Variable26;
	Parms.Temp_text_Variable27 = Temp_text_Variable27;
	Parms.Temp_text_Variable28 = Temp_text_Variable28;
	Parms.Temp_text_Variable29 = Temp_text_Variable29;
	Parms.Temp_text_Variable30 = Temp_text_Variable30;
	Parms.Temp_text_Variable31 = Temp_text_Variable31;
	Parms.Temp_text_Variable32 = Temp_text_Variable32;
	Parms.Temp_text_Variable33 = Temp_text_Variable33;
	Parms.Temp_text_Variable34 = Temp_text_Variable34;
	Parms.Temp_text_Variable35 = Temp_text_Variable35;
	Parms.Temp_text_Variable36 = Temp_text_Variable36;
	Parms.Temp_text_Variable37 = Temp_text_Variable37;
	Parms.Temp_text_Variable38 = Temp_text_Variable38;
	Parms.Temp_text_Variable39 = Temp_text_Variable39;
	Parms.Temp_text_Variable40 = Temp_text_Variable40;
	Parms.Temp_text_Variable41 = Temp_text_Variable41;
	Parms.Temp_text_Variable42 = Temp_text_Variable42;
	Parms.Temp_text_Variable43 = Temp_text_Variable43;
	Parms.Temp_text_Variable44 = Temp_text_Variable44;
	Parms.Temp_text_Variable45 = Temp_text_Variable45;
	Parms.Temp_text_Variable46 = Temp_text_Variable46;
	Parms.Temp_text_Variable47 = Temp_text_Variable47;
	Parms.Temp_text_Variable48 = Temp_text_Variable48;
	Parms.Temp_text_Variable49 = Temp_text_Variable49;
	Parms.Temp_text_Variable50 = Temp_text_Variable50;
	Parms.Temp_text_Variable51 = Temp_text_Variable51;
	Parms.Temp_text_Variable52 = Temp_text_Variable52;
	Parms.Temp_text_Variable53 = Temp_text_Variable53;
	Parms.Temp_text_Variable54 = Temp_text_Variable54;
	Parms.Temp_text_Variable55 = Temp_text_Variable55;
	Parms.Temp_text_Variable56 = Temp_text_Variable56;
	Parms.Temp_text_Variable57 = Temp_text_Variable57;
	Parms.Temp_text_Variable58 = Temp_text_Variable58;
	Parms.Temp_text_Variable59 = Temp_text_Variable59;
	Parms.Temp_text_Variable60 = Temp_text_Variable60;
	Parms.Temp_text_Variable61 = Temp_text_Variable61;
	Parms.Temp_text_Variable62 = Temp_text_Variable62;
	Parms.Temp_text_Variable63 = Temp_text_Variable63;
	Parms.Temp_text_Variable64 = Temp_text_Variable64;
	Parms.Temp_text_Variable65 = Temp_text_Variable65;
	Parms.Temp_text_Variable66 = Temp_text_Variable66;
	Parms.Temp_text_Variable67 = Temp_text_Variable67;
	Parms.Temp_text_Variable68 = Temp_text_Variable68;
	Parms.Temp_text_Variable69 = Temp_text_Variable69;
	Parms.Temp_text_Variable70 = Temp_text_Variable70;
	Parms.Temp_text_Variable71 = Temp_text_Variable71;
	Parms.Temp_text_Variable72 = Temp_text_Variable72;
	Parms.Temp_text_Variable73 = Temp_text_Variable73;
	Parms.Temp_text_Variable74 = Temp_text_Variable74;
	Parms.Temp_text_Variable75 = Temp_text_Variable75;
	Parms.Temp_text_Variable76 = Temp_text_Variable76;
	Parms.Temp_text_Variable77 = Temp_text_Variable77;
	Parms.Temp_text_Variable78 = Temp_text_Variable78;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetItemInstance_ReturnValue = CallFunc_GetItemInstance_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue1 = CallFunc_BPGetRarityData_ReturnValue1;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.CallFunc_BPGetRarityData_ReturnValue2 = CallFunc_BPGetRarityData_ReturnValue2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData4 = K2Node_MakeStruct_FormatArgumentData4;
	Parms.CallFunc_GetItemInstance_ReturnValue1 = CallFunc_GetItemInstance_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Worker = K2Node_DynamicCast_AsFort_Worker;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFilterCategory_ReturnValue = CallFunc_GetFilterCategory_ReturnValue;
	Parms.CallFunc_GetItemInstance_ReturnValue2 = CallFunc_GetItemInstance_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryText = CallFunc_GetTertiaryCategory_ItemCategoryText;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryBrush = CallFunc_GetTertiaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetTertiaryCategory_ReturnValue = CallFunc_GetTertiaryCategory_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData5 = K2Node_MakeStruct_FormatArgumentData5;
	Parms.CallFunc_GetItemInstance_ReturnValue3 = CallFunc_GetItemInstance_ReturnValue3;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_GetItemInstance_ReturnValue4 = CallFunc_GetItemInstance_ReturnValue4;
	Parms.CallFunc_GetType_ReturnValue1 = CallFunc_GetType_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData6 = K2Node_MakeStruct_FormatArgumentData6;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayName != nullptr)
		*DisplayName = Parms.DisplayName;

}


// Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void URewardInfoSimpleWidget_C::HandleDifferentItemOrQuantitySetBP()
{
	static auto Func = Class->GetFunction("RewardInfoSimpleWidget_C", "HandleDifferentItemOrQuantitySetBP");

	Params::URewardInfoSimpleWidget_C_HandleDifferentItemOrQuantitySetBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.ExecuteUbergraph_RewardInfoSimpleWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetSmallPreviewImage_ReturnValue                        (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetQuantity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void URewardInfoSimpleWidget_C::ExecuteUbergraph_RewardInfoSimpleWidget(int32 EntryPoint, class UFortItem* CallFunc_GetItemInstance_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue1, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetQuantity_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("RewardInfoSimpleWidget_C", "ExecuteUbergraph_RewardInfoSimpleWidget");

	Params::URewardInfoSimpleWidget_C_ExecuteUbergraph_RewardInfoSimpleWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetItemInstance_ReturnValue = CallFunc_GetItemInstance_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue1 = CallFunc_NotEqual_ObjectObject_ReturnValue1;
	Parms.CallFunc_GetSmallPreviewImage_ReturnValue = CallFunc_GetSmallPreviewImage_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuantity_ReturnValue = CallFunc_GetQuantity_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
