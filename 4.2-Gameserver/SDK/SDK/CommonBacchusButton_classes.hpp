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

// 0x30 (0x300 - 0x2D0)
// WidgetBlueprintGeneratedClass CommonBacchusButton.CommonBacchusButton_C
class UCommonBacchusButton_C : public UBacchusButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      TapAnim;                                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ButtonSizeBox;                                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Icon;                                        // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ImageSizeBox;                                      // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPaperSprite*                          DefaultIcon;                                       // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonBacchusButton_C");
		return Clss;
	}

	void PreConstruct(bool IsDesignTime);
	void SetButtonSprite(class UPaperSprite* NewSprite);
	void SetButtonSize(float NewButtonSize);
	void SetButtonDisplayScale(float NewDisplayScale);
	void ExecuteUbergraph_CommonBacchusButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UPaperSprite* K2Node_Event_NewSprite, bool CallFunc_IsValid_ReturnValue, UInterfaceProperty_ CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput, float K2Node_Event_NewButtonSize, float K2Node_Event_NewDisplayScale, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
