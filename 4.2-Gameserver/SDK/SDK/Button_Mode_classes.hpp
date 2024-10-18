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
// WidgetBlueprintGeneratedClass Button_Mode.Button_Mode_C
class UButton_Mode_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Button_Mode_C");
		return Clss;
	}

	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue);
	void OnBuildModeChanged_Event_0(bool bEntering);
	void Construct();
	void ExecuteUbergraph_Button_Mode(int32 EntryPoint, bool Temp_bool_Variable, class UPaperSprite* Temp_object_Variable, class UPaperSprite* Temp_object_Variable1, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool K2Node_CustomEvent_bEntering, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPaperSprite* K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
