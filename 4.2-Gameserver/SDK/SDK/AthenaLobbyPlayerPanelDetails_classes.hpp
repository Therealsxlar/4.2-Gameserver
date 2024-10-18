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

// 0x258 (0x468 - 0x210)
// WidgetBlueprintGeneratedClass AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C
class UAthenaLobbyPlayerPanelDetails_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UImage*                                BattlePassBoostActiveIcon;                         // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BattlePassOwnerLine;                               // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        BattlePassRow;                                     // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BattlePassSelfXpGainLine;                          // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BattlePassSharedXpGainLine;                        // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Platform;                                    // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LineRule;                                          // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                       PlayerBanner;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SeasonPassIcon;                                    // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextInviteSent;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextPlayerName;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x270(0x1F8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLobbyPlayerPanelDetails_C");
		return Clss;
	}

	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& ChangedTeamMemberInfo, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue);
	void RefreshBattlePass(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_NotEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class ESlateVisibility K2Node_Select_Default, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, class FText CallFunc_Conv_IntToText_ReturnValue2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText CallFunc_Format_ReturnValue1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2);
	void RefreshBanner(class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue1);
	void SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue);
	void InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1);
	void OnActiveFriendsCountUpdated(int32 ActiveFriendsCount);
	void OnPartyInvitesCountChanged(int32 InvitesCount);
	void Initialize();
	void IsInvitationPending(bool* bIsInvitationPending, const struct FUniqueNetIdRepl& PlayerUniqueId, bool Temp_bool_Variable, bool Temp_bool_Variable1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortFriendRequestStatus Temp_byte_Variable, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, bool Temp_bool_Variable8, const struct FUniqueNetIdRepl& CallFunc_GetFriendRequestStatusForTeamMember_UniqueIdUsed, bool CallFunc_GetFriendRequestStatusForTeamMember_bIsMcpId, enum class EFortFriendRequestStatus CallFunc_GetFriendRequestStatusForTeamMember_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue, bool K2Node_Select_Default, bool CallFunc_HasPendingMcpPartyInvitation_ReturnValue, bool K2Node_Select1_Default, bool K2Node_Select2_Default, bool CallFunc_BooleanOR_ReturnValue);
	void RefreshPendingInvite(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_IsInvitationPending_bIsInvitationPending, enum class ESlateVisibility K2Node_Select_Default);
	void RefreshPlayerName(class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue);
	void Refresh();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaLobbyPlayerPanelDetails(int32 EntryPoint, int32 CallFunc_RandomInteger_ReturnValue, int32 Temp_int_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable1, const class FString& Temp_string_Variable2, const class FString& Temp_string_Variable3, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Variable1, const class FString& Temp_string_Variable4, const class FString& Temp_string_Variable5, const class FString& Temp_string_Variable6, const class FString& Temp_string_Variable7, bool K2Node_Event_IsDesignTime, const class FString& K2Node_Select_Default, int32 CallFunc_RandomInteger_ReturnValue1, const class FString& K2Node_Select1_Default, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
