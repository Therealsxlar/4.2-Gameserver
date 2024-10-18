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

// 0x38 (0x290 - 0x258)
// WidgetBlueprintGeneratedClass TabAccessibilityOptions.TabAccessibilityOptions_C
class UTabAccessibilityOptions_C : public UFortGameOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	class URotatorSelector_C*                    ColorBlindMode;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                  ColorBlindStrength;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    HearingImpairedMode;                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          HearingSection;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    IgnoreGamepadInput;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MotorControlSection;                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabAccessibilityOptions_C");
		return Clss;
	}

	void Initialize_Data(class FText CallFunc_MakeLiteralText_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, class FText CallFunc_MakeLiteralText_ReturnValue1, TArray<class FText>& K2Node_MakeArray_Array1, TArray<class FText>& K2Node_MakeArray_Array2);
	void Update_Data(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, enum class EColorBlindMode Temp_byte_Variable, int32 Temp_int_Variable2, int32 Temp_int_Variable3, int32 Temp_int_Variable4, int32 Temp_int_Variable5, bool Temp_bool_Variable1, int32 Temp_int_Variable6, int32 Temp_int_Variable7, bool CallFunc_GetIgnoreGamepadInput_ReturnValue, enum class EColorBlindMode CallFunc_GetColorBlindMode_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select1_Default, float CallFunc_GetColorBlindStrength_ReturnValue, bool CallFunc_GetHearingImpairedMode_ReturnValue, int32 K2Node_Select2_Default);
	void Construct();
	void UpdateOptionsTab();
	void CenterOnTab();
	void BndEvt__OptionsMenuSlider_K2Node_ComponentBoundEvent_10_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__ColorBlindMode_K2Node_ComponentBoundEvent_11_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__HearingImpairedMode_K2Node_ComponentBoundEvent_13_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__IgnoreGamepadInput_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void ExecuteUbergraph_TabAccessibilityOptions(int32 EntryPoint, int32 Temp_int_Variable, enum class EColorBlindMode Temp_byte_Variable, enum class EColorBlindMode Temp_byte_Variable1, enum class EColorBlindMode Temp_byte_Variable2, enum class EColorBlindMode Temp_byte_Variable3, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, float K2Node_ComponentBoundEvent_Slider_Value, int32 K2Node_ComponentBoundEvent_Selected_Index2, int32 K2Node_ComponentBoundEvent_Selected_Index1, enum class EColorBlindMode K2Node_Select_Default, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_IsHearingImpairedFeatureAvailable_ReturnValue, bool CallFunc_CanIgnoreGamepadInput_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select2_Default, int32 K2Node_ComponentBoundEvent_Selected_Index, bool CallFunc_Conv_IntToBool_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
