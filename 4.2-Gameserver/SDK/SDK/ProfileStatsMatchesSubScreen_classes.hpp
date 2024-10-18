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

// 0x50 (0x348 - 0x2F8)
// WidgetBlueprintGeneratedClass ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C
class UProfileStatsMatchesSubScreen_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(Transient, DuplicateTransient)
	class UAthenaProfileStatBox*                 ListProfileStatBox;                                // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonListView*                       MatchList;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaProfileStatBox*                 MatchProfileStatBox;                               // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlacementStatRowWidget_C*             PlacementStatRowWidget;                            // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreStatRowWidget_C*                 ScoreStatRowWidget;                                // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USmallStatRowWidget_C*                 Stat1;                                             // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopWeaponStatRow_C*                   TopWeaponStatRow;                                  // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BackAction;                                        // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProfileStatsMatchesSubScreen_C");
		return Clss;
	}

	void SetMatches(TArray<class UObject*>& InDataProvider);
	void HandleBack(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void HandleStatViewChanged(class UAthenaBaseStatView* StatView);
	void OnActivated();
	void BndEvt__MatchList_K2Node_ComponentBoundEvent_47_OnListViewItemClicked__DelegateSignature(class UObject* Item, bool bIsHovered);
	void BndEvt__MatchList_K2Node_ComponentBoundEvent_326_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void ExecuteUbergraph_ProfileStatsMatchesSubScreen(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UAthenaMatchStatView* K2Node_DynamicCast_AsAthena_Match_Stat_View, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UAthenaBaseStatView* K2Node_CustomEvent_StatView, class UAthenaMatchSetStatView* K2Node_DynamicCast_AsAthena_Match_Set_Stat_View, bool K2Node_DynamicCast_bSuccess1, TArray<class UAthenaMatchStatView*>& CallFunc_GetBestMatchViews_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, class UAthenaMatchStatView* K2Node_DynamicCast_AsAthena_Match_Stat_View1, bool K2Node_DynamicCast_bSuccess2, class UObject* K2Node_ComponentBoundEvent_Item1, bool K2Node_ComponentBoundEvent_bIsHovered);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
