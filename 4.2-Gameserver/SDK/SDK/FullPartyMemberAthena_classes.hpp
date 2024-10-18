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

// 0x10 (0x998 - 0x988)
// WidgetBlueprintGeneratedClass FullPartyMemberAthena.FullPartyMemberAthena_C
class UFullPartyMemberAthena_C : public UAthenaPartyMemberBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x988(0x8)(Transient, DuplicateTransient)
	class UPlayerBanner_C*                       PlayerBanner;                                      // 0x990(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FullPartyMemberAthena_C");
		return Clss;
	}

	void SetBannerIconAndColor(const class FString& IconId, const class FString& ColorId);
	void OpenPartyFinder();
	void ExecuteUbergraph_FullPartyMemberAthena(int32 EntryPoint, class UPartyFinder_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, const class FString& K2Node_Event_IconId, const class FString& K2Node_Event_ColorId, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue1, bool CallFunc_IsTencentBuild_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
