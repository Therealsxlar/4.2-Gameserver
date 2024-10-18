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

// 0x30 (0x258 - 0x228)
// WidgetBlueprintGeneratedClass AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C
class UAthenaSeasonLevelFreeRewardsWidget_C : public USeasonPassLevelWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(Transient, DuplicateTransient)
	class UImage*                                DarkenCenter;                                      // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         FreeRewardsBorder;                                 // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            FreeRewardsGrid;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UAthenaSeasonReward_C*>         RewardWidgets;                                     // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSeasonLevelFreeRewardsWidget_C");
		return Clss;
	}

	void UpdateStyling(float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable, bool Temp_bool_Variable1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue1, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue, bool CallFunc_IsFreeUnlocked_ReturnValue, const struct FLinearColor& K2Node_Select_Default, float K2Node_Select1_Default);
	void OnSetup();
	void OnLockedStatusChanged(bool FreeUnlocked, bool PaidUnlocked);
	void PlayIntro();
	void ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, class UAthenaSeasonReward_C* CallFunc_Array_Get_Item, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue1, TArray<class UFortItem*>& CallFunc_GetRewardItems_ReturnValue, bool CallFunc_IsFreeClaimed_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_IsFreeUnlocked_ReturnValue, bool CallFunc_IsFreeClaimed_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 Temp_int_Array_Index_Variable2, class UFortItem* CallFunc_Array_Get_Item1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool K2Node_Event_FreeUnlocked, bool K2Node_Event_PaidUnlocked, class UAthenaSeasonReward_C* CallFunc_Create_ReturnValue, class UAthenaSeasonReward_C* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue2, bool CallFunc_IsFreeClaimed_ReturnValue2, bool CallFunc_IsFreeUnlocked_ReturnValue1, bool CallFunc_IsFreeClaimed_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2, const struct FMargin& K2Node_MakeStruct_Margin);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
