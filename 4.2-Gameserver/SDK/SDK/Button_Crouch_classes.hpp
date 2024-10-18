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

// 0x8 (0x308 - 0x300)
// WidgetBlueprintGeneratedClass Button_Crouch.Button_Crouch_C
class UButton_Crouch_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Button_Crouch_C");
		return Clss;
	}

	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue);
	void OnHUDStateUpdate(struct FFortHUDState& NewState);
	void ExecuteUbergraph_Button_Crouch(int32 EntryPoint, const struct FFortHUDState& K2Node_Event_NewState);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
