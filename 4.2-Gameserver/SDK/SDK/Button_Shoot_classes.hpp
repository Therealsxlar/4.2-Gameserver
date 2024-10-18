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

// 0x20 (0x320 - 0x300)
// WidgetBlueprintGeneratedClass Button_Shoot.Button_Shoot_C
class UButton_Shoot_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(Transient, DuplicateTransient)
	bool                                         NewVar_0;                                          // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPaperSprite*                          ShootGunSprite;                                    // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                          PickaxeSprite;                                     // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Button_Shoot_C");
		return Clss;
	}

	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Check_For_Tag(const struct FGameplayTag& TagToCheck, bool* HasTag, bool Temp_bool_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar, int32 CallFunc_GetQuickbarFocus_OutSlot, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
	void HandleWeaponChanged(class AFortWeapon* New_Weapon, class AFortWeapon* Previous_Weapon, bool CallFunc_Check_For_Tag_HasTag, bool CallFunc_Check_For_Tag_HasTag1, bool CallFunc_Check_For_Tag_HasTag2, bool CallFunc_Check_For_Tag_HasTag3, bool CallFunc_Check_For_Tag_HasTag4, bool CallFunc_Check_For_Tag_HasTag5, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsInBuildMode_ReturnValue, class UFortAbilitySystemContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, const struct FEventReply& CallFunc_CaptureMouse_ReturnValue);
	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_ReleaseMouseCapture_ReturnValue);
	void Construct();
	void On_Build_Mode_Changed(bool bEntering);
	void ExecuteUbergraph_Button_Shoot(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool K2Node_CustomEvent_bEntering, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
