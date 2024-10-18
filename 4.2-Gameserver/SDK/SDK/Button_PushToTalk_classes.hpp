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
// WidgetBlueprintGeneratedClass Button_PushToTalk.Button_PushToTalk_C
class UButton_PushToTalk_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Button_PushToTalk_C");
		return Clss;
	}

	void Update_Visibility(enum class EPTTState PTT_State, class UPaperSprite* Temp_object_Variable, class UPaperSprite* Temp_object_Variable1, class UPaperSprite* Temp_object_Variable2, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_GetCanPTT_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EPTTState Temp_byte_Variable, bool CallFunc_BooleanAND_ReturnValue1, class UPaperSprite* K2Node_Select_Default);
	void OnClicked();
	void Construct();
	void OnHUDStateUpdate(struct FFortHUDState& NewState);
	void On_Can_PTT();
	void ExecuteUbergraph_Button_PushToTalk(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, enum class EPTTState Temp_byte_Variable, enum class EPTTState CallFunc_GetPTTState_ReturnValue, enum class EPTTState Temp_byte_Variable1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue2, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue3, enum class EPTTState CallFunc_GetPTTState_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue4, enum class EPTTState Temp_byte_Variable2, enum class EPTTState CallFunc_GetPTTState_ReturnValue2, enum class EPTTState Temp_byte_Variable3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class EPTTState K2Node_Select_Default, const struct FFortHUDState& K2Node_Event_NewState);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
