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

// 0x212 (0x422 - 0x210)
// WidgetBlueprintGeneratedClass LobbyPlayerPadBottom.LobbyPlayerPadBottom_C
class ULobbyPlayerPadBottom_C : public UCommonUserWidget
{
public:
	class UImage*                                BattlePassBadge;                                   // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BattlePassBoostActiveIcon;                         // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BattlePassSelfXpGainLine;                          // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   Team_Member_Info;                                  // 0x228(0x1F8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         Is_Local_Player;                                   // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_Friend;                                         // 0x421(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyPlayerPadBottom_C");
		return Clss;
	}

	void Refresh(bool CallFunc_IsValidNetID_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_NotEqual_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Format_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsTeamMemberFriend_ReturnValue, bool CallFunc_IsLocalPlayersUniqueID_ReturnValue);
	void Set_Team_Member_Info(const struct FFortTeamMemberInfo& New_Team_Member_Info);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
