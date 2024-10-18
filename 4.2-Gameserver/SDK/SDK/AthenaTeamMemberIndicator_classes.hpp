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

// 0x1C (0x294 - 0x278)
// WidgetBlueprintGeneratedClass AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C
class UAthenaTeamMemberIndicator_C : public UAthenaPlayerIndicatorBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(Transient, DuplicateTransient)
	class UAthenaTeamMemberDBNOState_C*          DBNOIndicator;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerName;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Team_Member_Index;                                 // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaTeamMemberIndicator_C");
		return Clss;
	}

	void DBNOStateChanged(bool bDBNO);
	void TalkingStateChanged(bool bTalking);
	void BeingRevivedStateChanged(bool bReviving);
	void PlayerNameChanged(const class FString& PlayerName);
	void ExecuteUbergraph_AthenaTeamMemberIndicator(int32 EntryPoint, const class FString& K2Node_Event_PlayerName, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_Event_bDBNO, bool K2Node_Event_bTalking, float CallFunc_SelectFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, bool K2Node_Event_bReviving);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
