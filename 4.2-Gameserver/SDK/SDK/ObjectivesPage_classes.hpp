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

// 0x80 (0x378 - 0x2F8)
// WidgetBlueprintGeneratedClass ObjectivesPage.ObjectivesPage_C
class UObjectivesPage_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(Transient, DuplicateTransient)
	class UActiveModifiersPanelContent_C*        ActiveModifiersPanelContent;                       // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     BadgesButton;                                      // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBadgesEarnedPanelContent_C*           BadgesEarnedPanelContent_0;                        // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ContentPanelScrollBox;                             // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ContentPanelSwitcher;                              // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     MissionButton;                                     // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMissionPanelContent_C*                MissionPanelContent_0;                             // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ModifiersButton;                                   // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ObjectivesButton;                                  // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObjectivesPanelContent_C*             ObjectivesPanelContent_0;                          // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Scorebutton;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTeamScorePanelContent_C*              TeamScorePanelContent_0;                           // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UZoneDetails_C*                        ZoneDetails;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ObjectivesPage_C");
		return Clss;
	}

	void MissionHasModifiers(bool* MissionHasModifiers, int32 Temp_int_Array_Index_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, TArray<class UFortGameplayModifierItemDefinition*>& CallFunc_GetActiveModifiers_OutActiveModifiers, int32 CallFunc_Add_IntInt_ReturnValue, class UFortGameplayModifierItemDefinition* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ConfigureModifiersView(bool ShowModifiers, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, TArray<class UFortGameplayModifierItemDefinition*>& CallFunc_GetActiveModifiers_OutActiveModifiers);
	void HandleInventory(bool* Passthrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void HandleSelectedButtonChanged(class UCommonButton* InButton, int32 InButtonIndex);
	void HandleBack(bool* Passthrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void Construct();
	void OnActivated();
	void Destruct();
	void OnActiveGameplayModifiersChanged_Event_0(TArray<class UFortGameplayModifierItemDefinition*>& AppliedModifiers);
	void ExecuteUbergraph_ObjectivesPage(int32 EntryPoint, bool CallFunc_MissionHasModifiers_MissionHasModifiers, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonGroup* CallFunc_SpawnObject_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, int32 CallFunc_GetSelectedButtonIndex_ReturnValue, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle2, bool CallFunc_MissionHasModifiers_MissionHasModifiers1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, TArray<class UFortGameplayModifierItemDefinition*>& K2Node_CustomEvent_AppliedModifiers, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
