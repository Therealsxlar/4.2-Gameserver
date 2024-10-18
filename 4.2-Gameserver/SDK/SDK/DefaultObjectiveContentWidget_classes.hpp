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

// 0x21 (0x231 - 0x210)
// WidgetBlueprintGeneratedClass DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C
class UDefaultObjectiveContentWidget_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UMissionObjectiveProgressBarsManager_C* MissionObjectiveProgressBarsManager;               // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            RichTextSlot;                                      // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortObjectiveBase*                    TrackedObjective;                                  // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bConfigureAsHUD;                                   // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DefaultObjectiveContentWidget_C");
		return Clss;
	}

	void GetHeightEstimate(float* Height, float HeightEstimate, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetHeightEstimate_Height, float CallFunc_Add_FloatFloat_ReturnValue, class UMissionRichText_C* CallFunc_GetRichTextBlock_MissionRichTextBlock, bool CallFunc_IsValid_ReturnValue1, float CallFunc_GetMissionHUDTextLineHeightEstimate_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1);
	void HandleTimerComponentUpdated(class UFortMissionTimerComponent* InTimerComponent);
	void CreateRichTextBlock(class FText Text, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMissionRichText_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void GetRichTextBlock(class UMissionRichText_C** MissionRichTextBlock, class UMissionRichText_C* FoundTextBlock, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UMissionRichText_C* K2Node_DynamicCast_AsMission_Rich_Text, bool K2Node_DynamicCast_bSuccess);
	void Update(class FText TimerText, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetEmptyText_ReturnValue, class UFortMissionTimerComponent* CallFunc_GetTimerComponent_ReturnValue, class UMissionRichText_C* CallFunc_GetRichTextBlock_MissionRichTextBlock, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class FText CallFunc_GetTimeText_ReturnValue, bool CallFunc_IsTimerVisible_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, float CallFunc_GetMissionTimerTimeRemaining_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_FloatFloat_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetObjectiveDisplayString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1);
	void Setup(class AFortObjectiveBase* Objective, bool bInConfigureAsHUD);
	void HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, enum class EFortObjectiveStatus NewStatus);
	void HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool bNewVisibility);
	void HandleUpdate(class AFortMissionState* MissionState);
	void ExecuteUbergraph_DefaultObjectiveContentWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortObjectiveBase* K2Node_Event_Objective, bool K2Node_Event_bInConfigureAsHUD, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AFortObjectiveBase* K2Node_CustomEvent_Objective1, enum class EFortObjectiveStatus K2Node_CustomEvent_NewStatus, class AFortObjectiveBase* K2Node_CustomEvent_Objective, bool K2Node_CustomEvent_bNewVisibility, class AFortMissionState* K2Node_CustomEvent_MissionState, class UFortMissionTimerComponent* CallFunc_GetTimerComponent_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
