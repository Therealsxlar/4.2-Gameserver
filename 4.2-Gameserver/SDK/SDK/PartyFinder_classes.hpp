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

// 0x12A (0x452 - 0x328)
// WidgetBlueprintGeneratedClass PartyFinder.PartyFinder_C
class UPartyFinder_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         CB_PartyDegradationWarning;                        // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CloseButton;                                       // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     IgnoreButton;                                      // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     InviteButton;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       InviteIgnoreSwitcher;                              // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     JoinButton;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyFinder_LFG_C*                    PartyFinder_LFG;                                   // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTreeView*                       SocialTreeView;                                    // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         TouchToCloseZone;                                  // 0x380(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ViewProfileButton;                                 // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonVisibilityWidget*               ViewProfileVisibility;                             // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           LeaveConfirmationIcon;                             // 0x398(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  LeaveConfirmationTitle;                            // 0x420(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  LeaveConfirmationDescription;                      // 0x438(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         BIsLFGEnabled;                                     // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bFoundFirstItem;                                   // 0x451(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyFinder_C");
		return Clss;
	}

	struct FEventReply TouchToClose(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetupInitialSelection(class UFortPartyContext* CallFunc_GetContext_ReturnValue, TArray<class UFortSocialItem*>& CallFunc_GetSocialItemCategories_OutSocialCategoryItems, int32 CallFunc_Array_Length_ReturnValue, class UFortSocialItem* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue);
	void CheckLFGStatusAndUpdateDisplay(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_GetEnableLFG_ReturnValue);
	void OnPartyServicesDegredationChanged(bool bAreServicesDegredated, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void Handle_Nav_left(enum class EUINavigation Navigation, class UWidget** Widget, class UCommonTreeView* Temp_object_Variable, class UCommonTreeView* Temp_object_Variable1, class UCommonTreeView* Temp_object_Variable2, class UCommonTreeView* Temp_object_Variable3, class UCommonTreeView* Temp_object_Variable4, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EUINavigation Temp_byte_Variable, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UCommonTreeView* K2Node_Select_Default, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Handle_Nav_right(enum class EUINavigation Navigation, class UWidget** Widget, bool Temp_bool_Variable, class UPartyFinder_LFG_C* Temp_object_Variable, enum class EUINavigation Temp_byte_Variable, class UPartyFinder_LFG_C* Temp_object_Variable1, class UPartyFinder_LFG_C* Temp_object_Variable2, class UPartyFinder_LFG_C* Temp_object_Variable3, class UPartyFinder_LFG_C* Temp_object_Variable4, class UPartyFinder_LFG_C* Temp_object_Variable5, class UPartyFinder_LFG_C* K2Node_Select_Default, class UPartyFinder_LFG_C* K2Node_Select1_Default);
	void UnbindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortPartyContext* CallFunc_GetContext_ReturnValue);
	void UpdateDetailsEmpty(enum class EFortSocialItemType SocialItemType, class UFortSocialItem* LocalPartyFinderItem);
	void HandleFriendPresenceUpdated(struct FUniqueNetIdRepl& FriendId, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	TArray<class UObject*> SocialTreeView_GetChildrenForCategory(class UObject* Item, const TArray<class UFortSocialItem*>& SocialItems, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UFortSocialItem*>& CallFunc_GetNonMcpActiveFriends_OutPlatformActiveFriends, TArray<class UFortSocialItem*>& CallFunc_GetPartyInvites_OutPartyInvites, TArray<class UFortSocialItem*>& CallFunc_GetActiveFriendsList_OutActiveFriends);
	void IgnoreInvite(class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SendInvite(class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	enum class ESlateVisibility GetFinderItemVisibility(class UFortSocialItem* PartyFinderItem, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateDetails(class UFortSocialItem* PartyFinderItem, enum class EFortSocialItemType SocialItemType, class UFortSocialItem* LocalPartyFinderItem);
	void HandleSocialListChanged(TArray<class UFortSocialItem*>& SocialItems, bool bExpandAll, bool bFirstFriendItemOrInviteFound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortSocialItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void HandlePartyTransitionStarted(enum class EFortPartyTransition Transition, bool K2Node_SwitchEnum_CmpSuccess);
	void BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortPartyContext* CallFunc_GetContext_ReturnValue);
	void BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnActivated();
	void BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void Destruct();
	void OnSocialListChanged(TArray<class UFortSocialItem*>& SocialItems);
	void BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandlePartyDataChanged(struct FPartyState& PartyData);
	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ClosePartyFinder();
	void BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_50_OnListViewItemWidgetDestroyed__DelegateSignature(class UUserWidget* Widget);
	void BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_PartyFinder(int32 EntryPoint, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class ESelectionMode Temp_byte_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, TArray<class UFortSocialItem*>& CallFunc_GetSocialItemCategories_OutSocialCategoryItems, TArray<class UFortSocialItem*>& CallFunc_GetSocialItemCategories_OutSocialCategoryItems1, class UCommonInputContext* CallFunc_GetContext_ReturnValue3, class UCommonButton* K2Node_ComponentBoundEvent_Button4, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* K2Node_ComponentBoundEvent_Widget1, enum class ESelectionMode Temp_byte_Variable1, class UPartyFinderListItem_New_C* K2Node_DynamicCast_AsParty_Finder_List_Item_New, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsBROnly_ReturnValue, TArray<class UFortSocialItem*>& K2Node_CustomEvent_SocialItems, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, const struct FPartyState& K2Node_CustomEvent_PartyData, bool Temp_bool_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button1, enum class ESelectionMode K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_ComponentBoundEvent_Widget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UPartyFinderListItem_New_C* K2Node_DynamicCast_AsParty_Finder_List_Item_New1, bool K2Node_DynamicCast_bSuccess1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_IsPartyFunctionalityDegraded_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
