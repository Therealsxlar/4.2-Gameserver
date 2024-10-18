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

// 0x78 (0x388 - 0x310)
// WidgetBlueprintGeneratedClass ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C
class UItemInspectAlterationModOptInScreen_C : public UFortAlterationModOptinScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowConf;                                          // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Shrink_Intro;                                      // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectionItemExtraDetailsHostPanel_C* AlerationsExtraDetailsPanel;                       // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FrameConnector;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HeaderGrid;                                        // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectionMainItemDetailsHostPanel_C* ItemInspectionMainItemDetailsHostPanel;            // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationsWidget_C*                  LegacyAlterations;                                 // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationsWidget_C*                  NewAlterations;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkSystemOptInHelpScreen_C*          PerkSystemOptInHelpScreen;                         // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkSystemOptInHelpScreen_C*          PerkSystemOptInHelpScreenConfirmation;             // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TriangleMaterial;                                  // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              RarityBorderMID;                                   // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Triangles_Material;                                // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemInspectAlterationModOptInScreen_C");
		return Clss;
	}

	void BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4);
	void Reset_To_Show_Confirmation();
	void Reset_To_Show_Help(float CallFunc_GetEndTime_ReturnValue);
	void Update_Colors(enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue);
	void SetupTriangles(const struct FFortRarityItemData& RarityData, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Set_Up_Header_Colors(const struct FFortRarityItemData& RarityData, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetupScreen();
	void OnSetupItem();
	void Construct();
	void Handle_Continue(class UCommonButton* Button);
	void OnActivated();
	void Handle_Cancel();
	void Handle_Accept();
	void Handle_OptIn_Accept(class UCommonButton* Button);
	void Handle_OptIn_Cancel(class UCommonButton* Button);
	void Handle_Help_Button(class UCommonButton* Button);
	void Handle_Cancel_Preview(class UCommonButton* Button);
	void Destruct();
	void ExecuteUbergraph_ItemInspectAlterationModOptInScreen(int32 EntryPoint, class UCommonButton* K2Node_CustomEvent_Button4, class UCommonButton* K2Node_CustomEvent_Button3, class UCommonButton* K2Node_CustomEvent_Button2, float CallFunc_PauseAnimation_ReturnValue, class UCommonButton* K2Node_CustomEvent_Button1, class UCommonButton* K2Node_CustomEvent_Button, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_GetHidePerkRecombobulatorHelp_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
