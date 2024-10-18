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

// 0xB0 (0x2C0 - 0x210)
// WidgetBlueprintGeneratedClass RewardsIcon.RewardsIcon_C
class URewardsIcon_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      MaterializeAnimation;                              // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      DisperseAnimation;                                 // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageIcon;                                         // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                      LoadGuard;                                         // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       LoadingSwitcher;                                   // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBoxIconScale;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Throbber;                                          // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnSlideAnimationFinished;                          // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnDisperseAnimationFinished;                       // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnMaterializeAnimationFinished;                    // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortRewardNotificationData*           Reward;                                            // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SlideAnimStartTime;                                // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SlideAnimStartTranslation;                         // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SlideAnimTargetTranslation;                        // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_441D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          SlideAnimHandle;                                   // 0x298(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UMaterialInstanceDynamic*              IconMaterial;                                      // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnImageClicked;                                    // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMaterialInstanceDynamic*              OriginalMaterial;                                  // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RewardsIcon_C");
		return Clss;
	}

	void PopulateFromItemCacheData(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortRewardItemCacheData* K2Node_DynamicCast_AsFort_Reward_Item_Cache_Data, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue1);
	void PopulateFromGiftBoxData(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UFortRewardGiftBoxData* K2Node_DynamicCast_AsFort_Reward_Gift_Box_Data, bool K2Node_DynamicCast_bSuccess, class UFortGiftBoxItemDefinition* CallFunc_GetGiftBoxDefinition_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1);
	void PopulateFromDifficultyIncreaseRewards(class UFortRewardDifficultyIncrease* K2Node_DynamicCast_AsFort_Reward_Difficulty_Increase, bool K2Node_DynamicCast_bSuccess);
	void PopulateFromMissionAlertRewards(class UFortRewardMissionAlertData* K2Node_DynamicCast_AsFort_Reward_Mission_Alert_Data, bool K2Node_DynamicCast_bSuccess);
	void Play_Show_Animation_Sound(enum class EFrontEndRewardType Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable1, class USoundBase* Temp_object_Variable2, class USoundBase* Temp_object_Variable3, class USoundBase* Temp_object_Variable4, class USoundBase* Temp_object_Variable5, class USoundBase* Temp_object_Variable6, class USoundBase* Temp_object_Variable7, class USoundBase* Temp_object_Variable8, class USoundBase* K2Node_Select_Default);
	void Play_Hide_Animation_Sound(enum class EFrontEndRewardType Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable1, class USoundBase* Temp_object_Variable2, class USoundBase* Temp_object_Variable3, class USoundBase* Temp_object_Variable4, class USoundBase* Temp_object_Variable5, class USoundBase* Temp_object_Variable6, class USoundBase* Temp_object_Variable7, class USoundBase* Temp_object_Variable8, class USoundBase* K2Node_Select_Default);
	void PlayShowAnimation();
	struct FEventReply On_ImageIcon_MouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void RandomizeDesignView(class UTexture2D* CallFunc_PopulateFromRandomLootLevel_Texture);
	void PopulateFromRandomLootLevel(class UTexture2D** Texture, int32 CallFunc_RandomInteger_ReturnValue, class UTexture2D* CallFunc_PopulateFromLootLevel_Texture);
	void PopulateFromCollectionBookRewards(class UFortRewardCollectionBookData* K2Node_DynamicCast_AsFort_Reward_Collection_Book_Data, bool K2Node_DynamicCast_bSuccess);
	void PopulateFromExpedition();
	void PopulateFromNewQuest();
	void PopulateFromQuestRewards();
	void PopulateFromMissionRewards(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortUIRewardReport* CallFunc_GetLastMissionRewardReport_ReturnValue, class UFortRewardMissionData* K2Node_DynamicCast_AsFort_Reward_Mission_Data, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetRewardedChestIndex_ReturnValue, class UTexture2D* CallFunc_PopulateFromLootLevel_Texture);
	void GetScale(float* Scale);
	void SetScale(float Scale);
	void PopulateFromLootLevel(int32 LootLevel, class UTexture2D** Texture, class UTexture2D* ChestTexture, bool K2Node_SwitchInteger_CmpSuccess);
	void PlaySlideAnimation(float TargetTranslation, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue);
	void TickSlideAnimation(float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void HandleSlideAnimationFinished(float TranslatedDist);
	void HandleShowAnimationFinished();
	void HandleHideAnimationFinished();
	void PopulateFromReward(class UFortRewardNotificationData* InRewardItem, const struct FLinearColor& TintColor, bool CallFunc_IsValid_ReturnValue, class UTexture2D* CallFunc_PopulateFromRandomLootLevel_Texture, bool K2Node_SwitchEnum_CmpSuccess);
	void Cleanup();
	void PlayHideAnimation(const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_IsAnimationPlaying_ReturnValue);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void WhiteFadeOut(float Percent);
	void BndEvt__LoadGuard_K2Node_ComponentBoundEvent_2_OnLoadingStateChanged__DelegateSignature(bool bIsLoading);
	void OnAssetLoaded(class UObject* Object);
	void Destruct();
	void ExecuteUbergraph_RewardsIcon(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_CustomEvent_percent, bool K2Node_ComponentBoundEvent_bIsLoading, int32 CallFunc_Conv_BoolToInt_ReturnValue, class UObject* K2Node_CustomEvent_Object, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess);
	void OnImageClicked__DelegateSignature();
	void OnMaterializeAnimationFinished__DelegateSignature(class URewardsIcon_C* Icon);
	void OnDisperseAnimationFinished__DelegateSignature(class URewardsIcon_C* Icon);
	void OnSlideAnimationFinished__DelegateSignature(class URewardsIcon_C* Icon);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
