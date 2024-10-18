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

// 0x7A (0x3AA - 0x330)
// WidgetBlueprintGeneratedClass DailyRewards.DailyRewards_C
class UDailyRewards_C : public UFortDailyRewards
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        ClaimedRewardBox;                                  // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CurrentDaysLogged;                                 // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          CurrentRewardsBox;                                 // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDailyRewardsCurrent_C*                DailyRewardsCurrent_C_8;                           // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         MainBorder;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SchedulesVerticalBox;                              // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ViewOrClaimSwitcher;                               // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        LengthOfWeek;                                      // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FAC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnDailyRewardsComplete;                            // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        NumSchedulesToDisplay;                             // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FAD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UDailyRewardsCurrent_C*>        Rewards_to_Receive;                                // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         Currently_Open;                                    // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Trigger_Update_On_Complete;                        // 0x3A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DailyRewards_C");
		return Clss;
	}

	void Handle_Collect(bool* Passthrough);
	void Handle_Close(bool* Passthrough, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsInZone_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Set_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
	void PopPanelWhileInGame(class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue);
	void Setup_Daily_Rewards(int32 Temp_int_Array_Index_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize1, bool Temp_bool_Variable, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, class UDailyRewardsCurrent_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, enum class EInputActionState Temp_byte_Variable2, int32 CallFunc_Subtract_IntInt_ReturnValue, enum class EInputActionState Temp_byte_Variable3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, bool Temp_bool_Variable1, class UDailyRewardsMissingFoundersPack_C* CallFunc_Create_ReturnValue1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UDailyRewardsCurrent_C* CallFunc_Create_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, class UDailyRewardsSchedule_C* CallFunc_Create_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue2, int32 Temp_int_Loop_Counter_Variable, const struct FFortDailyRewardsData& CallFunc_TryGetDailyRewardsData_OutDailyRewardsData, bool CallFunc_TryGetDailyRewardsData_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortDailyRewardsScheduleData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, enum class EInputActionState K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, enum class EInputActionState K2Node_Select1_Default, int32 CallFunc_Subtract_IntInt_ReturnValue1, int32 CallFunc_Percent_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFortDailyRewardsItemData& CallFunc_Array_Get_Item1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Construct();
	void OnActivated();
	void PreConstruct(bool IsDesignTime);
	void ClaimResultReceived(TArray<struct FFortItemInstanceQuantityPair>& Loot);
	void OnDeactivated();
	void Destruct();
	void ExecuteUbergraph_DailyRewards(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsInZone_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Array_Index_Variable, int32 K2Node_Select_Default, bool K2Node_Event_IsDesignTime, int32 Temp_int_Loop_Counter_Variable, TArray<struct FFortItemInstanceQuantityPair>& K2Node_Event_Loot, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, class UDailyRewardsCurrent_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select1_Default);
	void OnDailyRewardsComplete__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
