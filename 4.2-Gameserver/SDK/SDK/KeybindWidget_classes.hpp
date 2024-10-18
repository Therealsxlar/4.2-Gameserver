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

// 0x578 (0x7E0 - 0x268)
// WidgetBlueprintGeneratedClass KeybindWidget.KeybindWidget_C
class UKeybindWidget_C : public UFortKeybindWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(Transient, DuplicateTransient)
	class UImage*                                _Image__Keybind;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                _Image__Shadow;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderFrame;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              HoldOverlay;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              InnerRoot;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              KeyTextOverlay;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxBackplate;                                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher;                                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextKeybind;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              TextSizeMinBox;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortBrushSize                    Brush_Size;                                        // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2AF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMultiSizeBrush                   Frame_MultiBrush;                                  // 0x2D0(0x330)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeFont                    MultiFont;                                         // 0x600(0x1E0)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KeybindWidget_C");
		return Clss;
	}

	void ShowHoldBackPlate(enum class EFortBrushSize Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable1, float Temp_float_Variable2, float Temp_float_Variable3, float Temp_float_Variable4, float Temp_float_Variable5, bool Temp_bool_Variable, float Temp_float_Variable6, float Temp_float_Variable7, bool CallFunc_IsHoldKeybind_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, float K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select1_Default, float CallFunc_Add_FloatFloat_ReturnValue1);
	void Get_Bound_Action(class FName* Action);
	void Set_Brush_Size(enum class EFortBrushSize Brush_Size);
	void Get_Brush_Size(enum class EFortBrushSize* Brush_Size);
	void UpdateFrameSize();
	void Update();
	void Destruct();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_KeybindWidget(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable1, float Temp_float_Variable2, float Temp_float_Variable3, float Temp_float_Variable4, float Temp_float_Variable5, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortBrushSize Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class FText CallFunc_GetKeyTextForAction_ButtonActionType, class FText CallFunc_GetKeyTextForAction_ReturnValue, int32 Temp_int_Variable, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_Multiply_FloatFloat_ReturnValue1, int32 Temp_int_Variable1, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, const struct FSlateBrush& CallFunc_GetBrushForKey_Brush, bool CallFunc_GetBrushForKey_ReturnValue, bool Temp_bool_Variable1, class FText CallFunc_GetText_ReturnValue, int32 K2Node_Select1_Default, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, bool CallFunc_Key_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
