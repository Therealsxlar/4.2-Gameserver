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

// 0x230 (0x440 - 0x210)
// WidgetBlueprintGeneratedClass AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C
class UAthenaLobbyPlayerPanel_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UAthenaLobbyPlayerPanelActions_C*      Actions;                                           // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLobbyPlayerPanelDetails_C*      Details;                                           // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x228(0x1F8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnGadgetsClicked;                                  // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnClosed;                                          // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLobbyPlayerPanel_C");
		return Clss;
	}

	void Cancel();
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_AreUniqueIDsIdentical_ReturnValue);
	void InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue);
	void Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_HasValidActions_bHasValidActions);
	void Refresh();
	void SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void Initialize();
	void Construct();
	void ExecuteUbergraph_AthenaLobbyPlayerPanel(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnClosed__DelegateSignature();
	void OnGadgetsClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
