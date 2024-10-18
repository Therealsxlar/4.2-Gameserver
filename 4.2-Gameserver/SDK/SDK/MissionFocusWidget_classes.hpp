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

// 0x34 (0x244 - 0x210)
// WidgetBlueprintGeneratedClass MissionFocusWidget.MissionFocusWidget_C
class UMissionFocusWidget_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      HeaderText;                                        // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          KillPointsBar;                                     // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TimerText;                                         // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMissionTimerComponent*            SavedTimerComponent;                               // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortMission*                          CurrentFocusedMission;                             // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KillBarPercentage;                                 // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionFocusWidget_C");
		return Clss;
	}

	void UpdateVisibility(bool KillBarVisible, bool TimerVisible, bool HeaderVisible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select1_Default, enum class ESlateVisibility Temp_byte_Variable4, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select2_Default, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_GetText_ReturnValue1, bool CallFunc_TextIsEmpty_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_IsValid_ReturnValue);
	void HandleFocusedMission(class AFortMission* FocusedMission, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2);
	void HandleTimerComponentChanged(class UFortMissionTimerComponent* TimerComponent);
	void UpdateTimer(bool KillBarPercentageChanged, float NewKillBarPercentage, bool HeaderTextChanged, bool TimerTextChanged, class FText NewHeaderText, class FText NewTimerText, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, class FText CallFunc_GetText_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetCurrentFocusPercentage_ReturnValue, class FText CallFunc_GetCurrentFocusDisplayText_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class FText CallFunc_GetText_ReturnValue1, bool CallFunc_NotEqual_TextText_ReturnValue1, bool CallFunc_IsMissionTimerSet_ReturnValue, bool CallFunc_IsTimerVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetTimeText_ReturnValue);
	void Construct();
	void ExecuteUbergraph_MissionFocusWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class AFortMission* CallFunc_GetFocusedMission_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
