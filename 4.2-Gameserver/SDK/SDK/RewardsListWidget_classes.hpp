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

// 0x38 (0x250 - 0x218)
// WidgetBlueprintGeneratedClass RewardsListWidget.RewardsListWidget_C
class URewardsListWidget_C : public UFortUserWidget
{
public:
	class UVerticalBox*                          RewardsVerticalBox;                                // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFrontEndRewardWrapperWidget_C*> RewardsArray;                                      // 0x220(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        Index;                                             // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RewardCount;                                       // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoNotAnimate;                                      // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bPlaySound;                                        // 0x239(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A75[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFrontEndRewardWrapperWidget_C*> SelectableRewardsArray;                            // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RewardsListWidget_C");
		return Clss;
	}

	void PresentAllRewards(int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin1, int32 Temp_int_Loop_Counter_Variable1, class UFrontEndRewardWrapperWidget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemOrWidget_C* CallFunc_Create_ReturnValue, class UFrontEndRewardWrapperWidget_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue2);
	void CreateRewardWrapper(class UHomeScreenQuestRewardItem_C* Item, class FText DisplayName, class UFrontEndRewardWrapperWidget_C** OutputPin, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFrontEndRewardWrapperWidget_C* CallFunc_Create_ReturnValue);
	void CreateReward(struct FFortItemInstanceQuantityPair& FortItemInstanceQuantityPair, bool Selectable, int32 Quantity, class UFortItem* Item, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHomeScreenQuestRewardItem_C* CallFunc_Create_ReturnValue, class UFrontEndRewardWrapperWidget_C* CallFunc_CreateRewardWrapper_OutputPin, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1);
	void PresentNextReward(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, class UFrontEndRewardWrapperWidget_C* CallFunc_Array_Get_Item, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void PopulateRewards(TArray<struct FFortItemInstanceQuantityPair>& Rewards, TArray<struct FFortItemInstanceQuantityPair>& SelectableRewards, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable1, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
