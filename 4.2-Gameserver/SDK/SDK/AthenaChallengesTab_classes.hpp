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

// 0x39 (0x3C9 - 0x390)
// WidgetBlueprintGeneratedClass AthenaChallengesTab.AthenaChallengesTab_C
class UAthenaChallengesTab_C : public UAthenaChallengeBundleScheduleScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(Transient, DuplicateTransient)
	class UCommonTreeView*                       ChallangeTreeView;                                 // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       OutOfSeasonSwitcher;                               // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortChallengeBundleScheduleDefinition*> UnlockableBundles;                                 // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UFortChallengeBundleScheduleItem*> ActiveBundles;                                     // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         DoInitialSelection;                                // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaChallengesTab_C");
		return Clss;
	}

	void SelectFirstBundle(class UObject* CallFunc_GetItemAt_ReturnValue, class UFortChallengeBundleCategoryInfo* K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info, bool K2Node_DynamicCast_bSuccess, TArray<class UFortChallengeBundleInfo*>& CallFunc_GetChallengeBundleInfos_ReturnValue, class UFortChallengeBundleInfo* CallFunc_Array_Get_Item);
	TArray<class UObject*> TreeViewGetChildrenForCategory(class UObject* Item, class UFortChallengeBundleCategoryInfo* K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info, bool K2Node_DynamicCast_bSuccess, TArray<class UFortChallengeBundleInfo*>& CallFunc_GetChallengeBundleInfos_ReturnValue);
	void SetupViewedItemData(class UFortItem* Item);
	void UpdateChallengeViews(bool CallFunc_IsActivated_ReturnValue, TArray<class UFortChallengeBundleCategoryInfo*>& CallFunc_GetChallengeCategoryInfos_OutCategoryInfos);
	void HandleChallengesChanged();
	void Construct();
	void OnActivated();
	void OnDeactivated();
	void BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void OnChallengesChanged();
	void ExecuteUbergraph_AthenaChallengesTab(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, class UFortChallengeBundleInfo* K2Node_DynamicCast_AsFort_Challenge_Bundle_Info, bool K2Node_DynamicCast_bSuccess, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UChallengeBundlePage_C* CallFunc_Create_ReturnValue, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_GetCurrentSeasonNumber_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsBROnly_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
