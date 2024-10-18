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

// 0x2C (0x28C - 0x260)
// WidgetBlueprintGeneratedClass PerkTierWidgetNew.PerkTierWidgetNew_C
class UPerkTierWidgetNew_C : public UFortPerkTierWidget_NUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          PerkList;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkWidget_C*                         PerkWidget;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkWidget_C*                         PerkWidget_0;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkWidget_C*                         PerkWidget_1;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIncludeName;                                      // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bFirstPerkDone;                                    // 0x289(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIncludeDescription;                               // 0x28A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class EFortBrushSize                    IconSize;                                          // 0x28B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PerkTierWidgetNew_C");
		return Clss;
	}

	void InitializeSettings(bool bIncludeName, bool bIncludeDescription, enum class EFortBrushSize IconSize, const struct FFortUIPerkTier& FortPerkTier);
	void Construct();
	void OnGeneratePerk(const struct FFortUIPerk& Perk, class UFortPerkWidget_NUI* PerkWidget);
	void ExecuteUbergraph_PerkTierWidgetNew(int32 EntryPoint, class UPerkDivider_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FFortUIPerk& K2Node_Event_Perk, class UFortPerkWidget_NUI* K2Node_Event_PerkWidget, class UPerkWidgetNew_C* K2Node_DynamicCast_AsPerk_Widget_New, bool K2Node_DynamicCast_bSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
