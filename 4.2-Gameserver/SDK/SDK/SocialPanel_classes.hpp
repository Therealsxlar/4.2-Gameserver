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

// 0x20 (0x360 - 0x340)
// WidgetBlueprintGeneratedClass SocialPanel.SocialPanel_C
class USocialPanel_C : public UFortSocialMenuPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(Transient, DuplicateTransient)
	class USafeZone*                             SafeZone_0;                                        // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InputClose;                                        // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialPanel_C");
		return Clss;
	}

	void HandleAction_Close(bool* Passthrough, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue);
	void InitializeInput(bool CallFunc_IsMobileGame_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Construct();
	void OnActivated();
	void OnDeactivated();
	void OnBeginIntro();
	void ExecuteUbergraph_SocialPanel(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
