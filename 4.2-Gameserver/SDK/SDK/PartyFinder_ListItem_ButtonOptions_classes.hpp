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

// 0xA8 (0x2B0 - 0x208)
// WidgetBlueprintGeneratedClass PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C
class UPartyFinder_ListItem_ButtonOptions_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hovered;                                           // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Athena_AcceptInviteButton;                         // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Athena_FriendItemButton;                           // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Athena_IgnoreInviteButton;                         // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     STW_InviteButton;                                  // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     STW_JoinButton;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_0;                                  // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Border;                                        // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsInviteRequest;                                  // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2102[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  AcceptPartyInvite_Clicked;                         // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  InviteToParty_Clicked;                             // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  IgnoreInvite_Clicked;                              // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  JoinParty_Clicked;                                 // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bSTW_Invite_Disabled;                              // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSTW_Join_Disabled;                                // 0x299(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2103[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  STWInvite_Clicked;                                 // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyFinder_ListItem_ButtonOptions_C");
		return Clss;
	}

	void NumPartyMembersInviteOrJoinText(int32 NumOfPartyMembers, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText K2Node_Select_Default);
	void SetEnableButtons(bool bIsEnabled);
	void SetupButtons(bool bIsInvite, bool bCanbeJoinedIfNotInvite, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable1, int32 Temp_int_Variable2, bool CallFunc_IsConsolePlatform_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, int32 K2Node_Select_Default, int32 K2Node_Select1_Default);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__FriendItemOption_K2Node_ComponentBoundEvent_989_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1145_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IgnoreInviteButton_K2Node_ComponentBoundEvent_1166_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__STW_InviteButton_K2Node_ComponentBoundEvent_633_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__STW_JoinButton_K2Node_ComponentBoundEvent_653_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Disable_STW_Invite();
	void Disable_STW_Join();
	void ExecuteUbergraph_PartyFinder_ListItem_ButtonOptions(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool K2Node_Event_IsDesignTime, class UCommonButton* K2Node_ComponentBoundEvent_Button4, int32 K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button);
	void STWInvite_Clicked__DelegateSignature(class UCommonButton* Button);
	void JoinParty_Clicked__DelegateSignature(class UCommonButton* Button);
	void IgnoreInvite_Clicked__DelegateSignature(class UCommonButton* Button);
	void InviteToParty_Clicked__DelegateSignature(class UCommonButton* Button);
	void AcceptPartyInvite_Clicked__DelegateSignature(class UCommonButton* Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
