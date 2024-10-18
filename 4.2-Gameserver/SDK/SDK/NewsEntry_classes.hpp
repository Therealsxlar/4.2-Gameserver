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

// 0x58 (0x268 - 0x210)
// WidgetBlueprintGeneratedClass NewsEntry.NewsEntry_C
class UNewsEntry_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     ButtonEntry;                                       // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextEntry;                                         // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  EntryText;                                         // 0x228(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	UMulticastDelegateProperty_                  HandleEntrySelected;                               // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  BodyText;                                          // 0x250(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NewsEntry_C");
		return Clss;
	}

	void SetFocus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Construct();
	void BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_NewsEntry(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button);
	void HandleEntrySelected__DelegateSignature(class FText BodyText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
