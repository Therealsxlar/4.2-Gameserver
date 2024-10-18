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

// 0x108 (0x400 - 0x2F8)
// WidgetBlueprintGeneratedClass AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C
class UAthenaSeasonLevelConfirmationScreen_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(Transient, DuplicateTransient)
	class UAthenaDirectAcquisitonDetails_RefundDisclaimer_C* AthenaDirectAcquisitonDetails_RefundDisclaimer;    // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              BulkMessageAlertSB;                                // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BulkTierMessage;                                   // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ConfirmState;                                      // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        DecreasePurchaseTier;                              // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HeaderText;                                        // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        IncreasePurchaseTier;                              // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ItemRewardsSB;                                     // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     PurchaseBtn;                                       // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PurchasingState;                                   // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 StateSwitcher;                                     // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TierTitle;                                         // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                VBuckIcon;                                         // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      VBuckPurchasePrice;                                // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<int32, class UFortSeasonPassLevelInfo*> AllBattlePassLevels;                               // 0x370(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortSeasonPassLevelInfo*              BaseLevel;                                         // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BuyExtraLevels;                                    // 0x3C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxBattlePassLevel;                                // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                BuyTierOfferID;                                    // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        MaxExtraLevelsYouCanBuyInOneGo;                    // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_409C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaSeasonReward_C*                 FirstWidget;                                       // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Handle_BackAction;                                 // 0x3F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSeasonLevelConfirmationScreen_C");
		return Clss;
	}

	void SelectReward(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAthenaSeasonReward_C* K2Node_DynamicCast_AsAthena_Season_Reward, bool K2Node_DynamicCast_bSuccess);
	void HandleBack(bool* bPassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void ModifyNumberOfTiersToBuy(int32 Delta, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void GenerateItemWidgets(bool FirstItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UFortItem*>& CallFunc_GetRewards_Output_Get, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortItem* CallFunc_Array_Get_Item, class UAthenaSeasonReward_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess);
	int32 GetNumberOfTiersBuying(int32 CallFunc_Add_IntInt_ReturnValue);
	class FText GetVBuckPrice(int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void GetRewards(TArray<class UFortItem*>* Output_Get, const TArray<class UFortItem*>& Rewards, int32 Temp_int_Variable, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UFortSeasonPassLevelInfo* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class UFortItem*>& CallFunc_GetRewardItems_ReturnValue, TArray<class UFortItem*>& CallFunc_GetRewardItems_ReturnValue1);
	void GetHeaderText(class FText* Result, int32* TierPurchaseNumber, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_GetLevel_ReturnValue1, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1, class FText K2Node_Select_Default);
	void Setup(class UFortSeasonPassLevelInfo* Level, TMap<int32, class UFortSeasonPassLevelInfo*>& AllLevels, int32 MaxLevel);
	void InitWidgets(class UFortStoreContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_StoreHasStarsForSale_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, const struct FFortPrivateAccountInfo& CallFunc_GetLocalAccountInfo_Result, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, enum class EOfferPurchaseError CallFunc_CanPurchaseOffer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue1, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue1, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue3, bool CallFunc_LessEqual_IntInt_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetVBuckPrice_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, class FText CallFunc_GetHeaderText_Result, int32 CallFunc_GetHeaderText_TierPurchaseNumber, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void BndEvt__PurchaseBtn_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnPurchaseFinished(bool bSuccess);
	void BndEvt__IncreasePurchaseTier_K2Node_ComponentBoundEvent_396_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IncreasePurchaseTier_K2Node_ComponentBoundEvent_409_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__DecreasePurchaseTier_K2Node_ComponentBoundEvent_429_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__DecreasePurchaseTier_K2Node_ComponentBoundEvent_450_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnActivated();
	void ExecuteUbergraph_AthenaSeasonLevelConfirmationScreen(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetBattleBookPurchaseLimit_MaxNumLevelsPossibleToPurchase, int32 CallFunc_GetBattleBookPurchaseLimit_BonusLevelsGranted, bool K2Node_CustomEvent_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, int32 CallFunc_GetNumberOfTiersBuying_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetNumberOfTiersBuying_ReturnValue1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, enum class EOfferPurchaseError CallFunc_CanPurchaseOffer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortMcpContext* CallFunc_GetContext_ReturnValue3, enum class EOfferPurchaseError CallFunc_PurchaseOffer_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
