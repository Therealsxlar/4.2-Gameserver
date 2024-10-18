#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x2E0 - 0x210)
// WidgetBlueprintGeneratedClass ItemTransformResultInfo.ItemTransformResultInfo_C
class UItemTransformResultInfo_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UCommonNumericTextBlock*               CurrentSacrificePointsText;                        // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformRequiredItems_C*         ItemTransformRequiredItems;                        // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformResultItems_C*           ItemTransformResultItems;                          // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                KeyCard;                                           // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      KeyName;                                           // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MaxText;                                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               NextLevelSacrificePoints;                          // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RequiredResourceInfo;                              // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TierProgressBar;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CurrentSacrificePoints;                            // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EB5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortConversionControlItemDefinition*  KeyItemDef;                                        // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             KeyItem;                                           // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     SelectedItems;                                     // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                  OnTransformConfirmed;                              // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        CurrentTier;                                       // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FirstTier;                                         // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxTier;                                           // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EB6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  AtMaxText;                                         // 0x2A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        TierPercentage;                                    // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EB7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              TierProgressBarMaterial;                           // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnUpdateSacrificeInfo;                             // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemTransformResultInfo_C");
		return Clss;
	}

	bool Is_Tranfsorm_Button_Enabled(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_GetRequiredItemQuantity_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetRequiredItemDefinition_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetNumInInventory_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);
	void Get_Transform_Data(int32* CurrentSacrificePoints, int32* CurrentTier);
	int32 CalculateNextTier(bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 K2Node_Select_Default);
	void GetPointsForTier(int32 Tier, int32* Points, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_GetPointsForTier_ReturnValue, int32 CallFunc_Max_ReturnValue);
	void UpdateTierProgressPercentage(float CalculatedPercent, int32 AdjustedNextPoints, int32 AdjustedCurrentPoints, int32 CallFunc_GetPointsForTier_Points, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue1, class FName CallFunc_MakeLiteralName_ReturnValue2, class FName CallFunc_MakeLiteralName_ReturnValue3, class FName CallFunc_MakeLiteralName_ReturnValue4, class FName CallFunc_MakeLiteralName_ReturnValue5, class FName CallFunc_MakeLiteralName_ReturnValue6, class FName CallFunc_MakeLiteralName_ReturnValue7, class FName CallFunc_MakeLiteralName_ReturnValue8, class FName CallFunc_MakeLiteralName_ReturnValue9, class FName CallFunc_MakeLiteralName_ReturnValue10, class FName CallFunc_MakeLiteralName_ReturnValue11, class FName CallFunc_MakeLiteralName_ReturnValue12, class FName CallFunc_MakeLiteralName_ReturnValue13, class FName CallFunc_MakeLiteralName_ReturnValue14, class FName CallFunc_MakeLiteralName_ReturnValue15, class FName CallFunc_MakeLiteralName_ReturnValue16, class FName CallFunc_MakeLiteralName_ReturnValue17, class FName CallFunc_MakeLiteralName_ReturnValue18, class FName CallFunc_MakeLiteralName_ReturnValue19, class FName CallFunc_MakeLiteralName_ReturnValue20, class FName CallFunc_MakeLiteralName_ReturnValue21, class FName CallFunc_MakeLiteralName_ReturnValue22, class FName CallFunc_MakeLiteralName_ReturnValue23, class FName CallFunc_MakeLiteralName_ReturnValue24, class FName CallFunc_MakeLiteralName_ReturnValue25, class FName CallFunc_MakeLiteralName_ReturnValue26, class FName CallFunc_MakeLiteralName_ReturnValue27, class FName CallFunc_MakeLiteralName_ReturnValue28, class FName CallFunc_MakeLiteralName_ReturnValue29, class FName CallFunc_MakeLiteralName_ReturnValue30, class FName CallFunc_MakeLiteralName_ReturnValue31, class FName CallFunc_MakeLiteralName_ReturnValue32, class FName CallFunc_MakeLiteralName_ReturnValue33, class FName CallFunc_MakeLiteralName_ReturnValue34, class FName CallFunc_MakeLiteralName_ReturnValue35, bool CallFunc_EqualEqual_IntInt_ReturnValue1, int32 CallFunc_GetPointsForTier_Points1, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue3, float CallFunc_Conv_IntToFloat_ReturnValue4, int32 CallFunc_CalculateNextTier_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue5, int32 CallFunc_GetPointsForTier_Points2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, int32 CallFunc_GetPointsForTier_Points3, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetPointsForTier_Points4, int32 CallFunc_Subtract_IntInt_ReturnValue1);
	void CalculateCurrentSacrificePoints(int32* TotalSacrificePoints, int32 TotalPoints, int32 Temp_int_Array_Index_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, const struct FTransmogSacrifice& CallFunc_GetTransmogSacrificeDataFromItemDefintion_OutTransmogData, bool CallFunc_GetTransmogSacrificeDataFromItemDefintion_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1);
	void UpdateSacrificeInfo(TArray<class UFortItem*>& SacrificeItems, bool CallFunc_Is_Tranfsorm_Button_Enabled_ReturnValue, int32 CallFunc_CalculateCurrentSacrificePoints_TotalSacrificePoints);
	void UpdateSacrificePointsBar(enum class EFortRarity CallFunc_GetTierFromSacrificePoints_CalculatedTier, bool CallFunc_GetTierFromSacrificePoints_ReturnValue, enum class EFortRarity CallFunc_GetMaxConversionTier_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue1, enum class EFortRarity CallFunc_GetFirstConversionTier_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue2, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 K2Node_Select_Default);
	void SetKeyToRepresent(class UFortItem* Key, class FText CallFunc_GetDisplayName_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortConversionControlItemDefinition* K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void BndEvt__TransformButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void ExecuteUbergraph_ItemTransformResultInfo(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button);
	void OnUpdateSacrificeInfo__DelegateSignature(bool TransformActive);
	void OnTransformConfirmed__DelegateSignature(int32 SacrificePoints, int32 CurrentTier);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
