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

// 0x21 (0x2C1 - 0x2A0)
// WidgetBlueprintGeneratedClass QuickbarSlotCooldown.QuickbarSlotCooldown_C
class UQuickbarSlotCooldown_C : public UFortItemCooldownWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(Transient, DuplicateTransient)
	class UImage*                                ImageRadialOpacityLayer;                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageRectangularOpacityLayer;                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherOpacityOverlay;                            // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EItemDisplayStyle                 ItemDisplayStyle;                                  // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuickbarSlotCooldown_C");
		return Clss;
	}

	void Initialize(enum class EItemDisplayStyle QuickbarItemDisplayStyle, TArray<enum class EFortItemCooldownType>& DesiredCooldownTypesSupported, enum class EItemDisplayStyle Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, class UMaterialInterface* Temp_object_Variable2, class UMaterialInterface* Temp_object_Variable3, class UMaterialInterface* Temp_object_Variable4, class UMaterialInterface* Temp_object_Variable5, class UMaterialInterface* Temp_object_Variable6, class UMaterialInterface* K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Show_Countdown(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void OnCooldownStarted(enum class EFortItemCooldownType CooldownType);
	void OnCooldownStopped(enum class EFortItemCooldownType CooldownType);
	void ExecuteUbergraph_QuickbarSlotCooldown(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortItemCooldownType K2Node_Event_CooldownType, bool K2Node_SwitchEnum1_CmpSuccess, bool K2Node_SwitchEnum2_CmpSuccess, bool K2Node_SwitchEnum3_CmpSuccess, enum class EFortItemCooldownType K2Node_Event_CooldownType1, bool K2Node_SwitchEnum4_CmpSuccess, bool K2Node_SwitchEnum5_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
