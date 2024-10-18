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

// 0x190 (0x3D8 - 0x248)
// WidgetBlueprintGeneratedClass MissionTrackerSubEntry.MissionTrackerSubEntry_C
class UMissionTrackerSubEntry_C : public UFortMissionTrackerSubEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      NewObjectiveCreation;                              // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      DrawAttentionAnimation;                            // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      CompletionFlashAnimation;                          // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      QuestionMarkAnimation;                             // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      CrossMarkAnimation;                                // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      CheckmarkAnimation;                                // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BorderFlash;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BulletImage;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CheckMark;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CrossMark;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            ObjectiveContentSlot;                              // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Questionmark;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortObjectiveBase*                    ObjectiveActor;                                    // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  WidgetVisibilityChanged;                           // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateBrush                           DefaultBulletBrush;                                // 0x2C8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           DefaultNonHUDBulletBrush;                          // 0x350(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionTrackerSubEntry_C");
		return Clss;
	}

	float GetHeightEstimate(class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHeightEstimate_Height, bool CallFunc_IsValid_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void CreateCompletionAnnouncement(bool CallFunc_IsVisible_ReturnValue, const struct FFortClientAnnouncementData_Basic& K2Node_MakeStruct_FortClientAnnouncementData_Basic, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, class AFortClientAnnouncement_Basic* CallFunc_FinishSpawningActor_ReturnValue);
	void HandleMissionUIEvent(class AFortMissionState* MissionElement, struct FGameplayTagContainer& EventTags, class AFortObjectiveBase* K2Node_DynamicCast_AsFort_Objective_Base, bool K2Node_DynamicCast_bSuccess, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, bool CallFunc_HasAllTags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void DrawAttention();
	void Update(UInterfaceProperty_ K2Node_DynamicCast_AsMission_Objective_Widget_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, const struct FSlateBrush& CallFunc_GetObjectiveBulletIcon_BulletIcon, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void HideObjectiveCompletionIcon();
	void ShowObjectiveWidget(bool bIsAlreadyVisible, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_IsVisible_ReturnValue);
	void HanldeObjectiveVisiblityOverrideChanged(class AFortObjectiveBase* Objective, enum class EFortMissionVisibilityOverride New_Visibility_Override, bool K2Node_SwitchEnum_CmpSuccess);
	void CreateObjectiveContentWidget(class UWidget* CallFunc_GetChildAt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDefaultObjectiveContentWidget_C* CallFunc_Create_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsMission_Objective_Content_Widget_Interface, bool K2Node_DynamicCast_bSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue);
	void StartEndingAnimations(class UWidgetAnimation* Animation, bool CallFunc_IsVisible_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue);
	void HideObjectiveWidget(bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void HandleUpdate(class AFortMissionState* Objective);
	void HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool NewVisibility);
	void HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, enum class EFortObjectiveStatus NewStatus, class UWidgetAnimation* Temp_object_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UWidgetAnimation* Temp_object_Variable1, class UWidgetAnimation* Temp_object_Variable2, enum class EFortObjectiveStatus Temp_byte_Variable, class UWidgetAnimation* K2Node_Select_Default);
	void Setup(class AFortObjectiveBase* Objective, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4);
	void OnObjectiveSet();
	void OnHiddenByHeightConstraintChanged();
	void ExecuteUbergraph_MissionTrackerSubEntry(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void WidgetVisibilityChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
