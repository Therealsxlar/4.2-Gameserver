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

// 0x8C (0x2C4 - 0x238)
// WidgetBlueprintGeneratedClass QuestUpdatesLog.QuestUpdatesLog_C
class UQuestUpdatesLog_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          QuestUpdatesBox;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortQuestItem*>                PinnedQuests;                                      // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortQuestItem*                        RequiredQuest;                                     // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  PinnedQuestSingularText;                           // 0x260(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  PinnedQuestsPluralText;                            // 0x278(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FDynamicQuestUpdateInfo>       QueuedDynamicQuestStatusUpdates;                   // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        MaxDisplayedQuestUpdates;                          // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CEF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       QuestUpdateWidgets;                                // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                          TryDisplayNextUpdateTimerHandle;                   // 0x2B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        MaxDisplayedQuestObjectives;                       // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestUpdatesLog_C");
		return Clss;
	}

	void CanDisplayAnotherObjective(bool* Result, int32 CallFunc_GetTotalDisplayedObjectives_NumObjectives, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void GetTotalDisplayedObjectives(int32* NumObjectives, int32 Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UQuestUpdateEntry_C* K2Node_DynamicCast_AsQuest_Update_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumDisplayedObjectives_NumObjectives, int32 CallFunc_Add_IntInt_ReturnValue1);
	void CreateAnnouncementUpdate(const struct FDynamicQuestUpdateInfo& UpdateInfo, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, class AAnnounce_QuestUpdate_C* CallFunc_FinishSpawningActor_ReturnValue);
	void HandleQuestUpdateWidgetFinished(class UQuestUpdateEntry_C* UpdateWidget, bool CallFunc_RemoveChild_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void GetAvailableQuestUpdateWidget(const struct FDynamicQuestUpdateInfo& UpdateInfo, class UQuestUpdateEntry_C** AvailableWIdget, class UQuestUpdateEntry_C* FoundWidget, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UQuestUpdateEntry_C* K2Node_DynamicCast_AsQuest_Update_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanAddUpdate_Result);
	void TryDisplayDynamicQuestStatusUpdate(const TArray<struct FDynamicQuestUpdateInfo>& UpdatesToRemove, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_CanDisplayAnotherObjective_Result, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable1, bool CallFunc_Less_IntInt_ReturnValue, const struct FDynamicQuestUpdateInfo& CallFunc_Array_Get_Item, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, const struct FDynamicQuestUpdateInfo& CallFunc_Array_Get_Item1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UQuestUpdateEntry_C* CallFunc_GetAvailableQuestUpdateWidget_AvailableWIdget, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_HasChild_ReturnValue, bool CallFunc_OnReceiveQuestUpdate_Success, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_IsValid_ReturnValue);
	void CreateQuestUpdateWIdgets(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Variable, class UQuestUpdateEntry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void HandleDisplayDynamicQuestUpdate(class UFortQuestObjectiveInfo* QuestObjective, bool bDisplayStatusUpdate, bool bDisplayAnnouncementUpdate, class UFortQuestItem* CallFunc_GetOwningQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FDynamicQuestUpdateInfo& K2Node_MakeStruct_DynamicQuestUpdateInfo, const struct FDynamicQuestUpdateInfo& K2Node_MakeStruct_DynamicQuestUpdateInfo1, bool CallFunc_IsValid_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue);
	void Construct();
	void ExecuteUbergraph_QuestUpdatesLog(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
