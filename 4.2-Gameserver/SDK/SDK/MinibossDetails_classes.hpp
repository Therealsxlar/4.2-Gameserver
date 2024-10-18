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

// 0x50 (0x2A8 - 0x258)
// WidgetBlueprintGeneratedClass MinibossDetails.MinibossDetails_C
class UMinibossDetails_C : public UFortHUDTargetUnderReticleWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Kill_Animation;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Outro_Animation;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro_Animation;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasicProgressBar_C*                   BasicProgressBar;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImagePortrait;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxShell;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextModifiers;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextName;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextUpgradeName;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MinibossDetails_C");
		return Clss;
	}

	void StopIntroAnimation(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnIntroAnimationFinished(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void StopOutroAnimation(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnOutroAnimationFinished(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void StopKillAnimation(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnKillAnimationFinished(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Kill(bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsVisible_ReturnValue);
	void Outro(bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsVisible_ReturnValue);
	void Intro(bool CallFunc_IsAnimationPlaying_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsAnimationPlaying_ReturnValue1);
	void Update_Health(float InPercent);
	void PopulateModifiers(TArray<class FText>& InModifiersArray, class FText Temp_text_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetEmptyText_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue1, class FText CallFunc_GetText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void InitializeMiniBossDetails(TArray<class FText>& InModifiers, class FText InName, class FText InUpgradeName, float InHealthPercent, bool ShowName, bool ShowPortrait, class UClass* NameStyle, class UClass* ModifiersStyle, enum class ETextJustify Name_Alignment, enum class ETextJustify Modifiers_Alignment, float Health_Bar_Width, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_TextIsEmpty_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default);
	void OnTargetChanged();
	void OnTargetHealthChanged();
	void OnTargetDied();
	void OnTargetDestroyed();
	void ExecuteUbergraph_MinibossDetails(int32 EntryPoint, float CallFunc_GetHUDTargetHealthPercentage_ReturnValue, float CallFunc_GetHUDTargetHealthPercentage_ReturnValue1, class FText CallFunc_GetHUDTargetUpgradeDisplayName_ReturnValue, class FText CallFunc_GetHUDTargetDisplayName_ReturnValue, TArray<class FText>& CallFunc_GetHUDTargetDisplayModifiers_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsVisible_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
