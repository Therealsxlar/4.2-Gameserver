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

// 0x280 (0x4A8 - 0x228)
// WidgetBlueprintGeneratedClass AthenaHitPointBar.AthenaHitPointBar_C
class UAthenaHitPointBar_C : public UAthenaPlayerHitPointBarBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(Transient, DuplicateTransient)
	class USizeBox*                              BarSizeBox;                                        // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CurrentValue;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MaxValue;                                          // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleMaterialProgressBar_C*          ProgressBarDelta;                                  // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleMaterialProgressBar_C*          ProgressBarFill;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TextArea;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                            Fill_Texture;                                      // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Gloss_Texture;                                     // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Critical_Color_A;                                  // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Critical_Color_B;                                  // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Critical_Color_C;                                  // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortMultiSizeFont                    MultiFont;                                         // 0x2A8(0x1E0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                            Baseplate_Texture;                                 // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DBNOStateCache;                                    // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DD9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPaperSprite*                          HealthIcon;                                        // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                          ShieldIcon;                                        // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaHitPointBar_C");
		return Clss;
	}

	void SetSize(bool UseLargeSize, float TallHeight, float NormalHeight, bool Temp_bool_Variable, float K2Node_Select_Default, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void UpdateDBNOState(bool bIsDBNO, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_BoolBool_ReturnValue);
	void UpdateHealthType(class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDBNO_ReturnValue);
	void Update_Delta_Bar(float CallFunc_GetLastValuePercentage_ReturnValue);
	void Initialize_Bar(enum class EHealthBarType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, const struct FLinearColor& Temp_struct_Variable2, enum class EHealthBarType Temp_byte_Variable1, const struct FLinearColor& Temp_struct_Variable3, const struct FLinearColor& Temp_struct_Variable4, const struct FLinearColor& Temp_struct_Variable5, enum class EHealthBarType Temp_byte_Variable2, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UClass* Temp_class_Variable2, enum class EHealthBarType Temp_byte_Variable3, const struct FLinearColor& Temp_struct_Variable6, const struct FLinearColor& Temp_struct_Variable7, const struct FLinearColor& Temp_struct_Variable8, enum class EHealthBarType Temp_byte_Variable4, const struct FLinearColor& Temp_struct_Variable9, const struct FLinearColor& Temp_struct_Variable10, const struct FLinearColor& Temp_struct_Variable11, UInterfaceProperty_ Temp_interface_Variable, enum class EHealthBarType Temp_byte_Variable5, UInterfaceProperty_ K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, class UClass* K2Node_Select2_Default, const struct FLinearColor& K2Node_Select3_Default, const struct FLinearColor& K2Node_Select4_Default, const struct FLinearColor& K2Node_Select5_Default, const struct FMargin& K2Node_MakeStruct_Margin, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
	void Update_Fill_Bar(float CallFunc_GetCurrentValuePercentage_ReturnValue);
	void UpdateCurrentValue(class FText CallFunc_Conv_FloatToText_ReturnValue);
	void UpdateMaxValue(class FText CallFunc_Conv_FloatToText_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void OnMaxValueChanged(float Value);
	void OnValueChangedWithReason(float Value, enum class EFortHitPointModificationReason Reason);
	void OnDBNOStateChanged(bool IsDBNO);
	void OnDeltaChanged();
	void ExecuteUbergraph_AthenaHitPointBar(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float K2Node_Event_Value1, float K2Node_Event_Value, enum class EFortHitPointModificationReason K2Node_Event_Reason, bool K2Node_Event_IsDBNO);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
