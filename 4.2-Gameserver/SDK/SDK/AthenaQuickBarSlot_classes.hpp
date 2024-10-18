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

// 0x9 (0x378 - 0x36F)
// WidgetBlueprintGeneratedClass AthenaQuickBarSlot.AthenaQuickBarSlot_C
class UAthenaQuickBarSlot_C : public UQuickbarSlot_C
{
public:
	uint8                                        Pad_4B02[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaQuickBarSlot_C");
		return Clss;
	}

	void UpdateJetpackFuelGaugeVisiblity(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ShowJetpackFuelGauge();
	void HideJetpackFuelGauge();
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_IsBROnly_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnRefreshItem();
	void ExecuteUbergraph_AthenaQuickBarSlot(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
