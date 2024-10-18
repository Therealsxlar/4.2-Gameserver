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

// 0x24 (0x234 - 0x210)
// WidgetBlueprintGeneratedClass ItemManagementFocusSwitcher.ItemManagementFocusSwitcher_C
class UItemManagementFocusSwitcher_C : public UCommonUserWidget
{
public:
	class UIconTabButton_C*                      IconTabButton;                                     // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemTileView*                     TileViewA;                                         // 0x218(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemTileView*                     TileViewB;                                         // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemTileView*                     PreviousFocus;                                     // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TileViewBIndex;                                    // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemManagementFocusSwitcher_C");
		return Clss;
	}

	void ExecuteFocusSwitch(int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue2, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue2, bool Temp_bool_Variable, int32 CallFunc_GetNumItems_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue3, int32 K2Node_Select_Default, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue2, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue3, int32 CallFunc_GetNumItems_ReturnValue4, int32 CallFunc_GetNumItems_ReturnValue5, bool CallFunc_Greater_IntInt_ReturnValue4, bool CallFunc_Greater_IntInt_ReturnValue5);
	void DeferFocusSwitch(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
