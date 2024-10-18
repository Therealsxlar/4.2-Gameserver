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

// 0x410 (0x620 - 0x210)
// WidgetBlueprintGeneratedClass LobbyPlayerPadTop.LobbyPlayerPadTop_C
class ULobbyPlayerPadTop_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      On_Ready_Change_Text;                              // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                       Banner;                                            // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Platform;                                    // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LeaderImage;                                       // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Microphone;                                        // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayInputAction;                                // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PowerBox;                                          // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPowerWidget_C*                        PowerWidget;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ReadyStatusBox;                                    // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ReadyUpStatusText;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextPlayerName;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x270(0x1F8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        PlayerIndex;                                       // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHovered;                                          // 0x46C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsTalking;                                        // 0x46D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsMuted;                                          // 0x46E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F8D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           TalkingBrush;                                      // 0x470(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           MutedBrush;                                        // 0x4F8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           MicBrush;                                          // 0x580(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class EFortPartyMemberLocation>  NewVar_0;                                          // 0x608(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                NewVar_1;                                          // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyPlayerPadTop_C");
		return Clss;
	}

	void OnAthenaReadyTypeChanged(struct FUniqueNetIdRepl& MemberId, enum class EAthenaPartyMemberReadyType ReadyType, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue);
	void OnAthenaTimeSpentInMatchChanged(struct FUniqueNetIdRepl& MemberId, class FText& Minutes, class FText& Seconds, bool CallFunc_IsPartyInProgressEnabled_ReturnValue, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue);
	void OnAthenaNumAliveChanged(struct FUniqueNetIdRepl& MemberId, int32 NumAlive, bool CallFunc_IsPartyInProgressEnabled_ReturnValue, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue);
	void UpdateMicIcon();
	void HandlePlayerStoppedTalking();
	void HandlePlayerMutingChanged(const struct FUniqueNetIdRepl& UniqueId, bool IsTalking, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue);
	void HandlePlayerTalkingChanged(const struct FUniqueNetIdRepl& UniqueId, bool IsTalking, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue);
	void RefreshAthenaReadyState(const struct FUniqueNetIdRepl& MemberId, class FText ReadyVar, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetAthenaPartyMemberReadyText_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, enum class EAthenaPartyMemberReadyType CallFunc_GetAthenaPartyMemberReadyType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UClass* K2Node_Select_Default);
	void OnLobbyPlayerUnhovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Initialize(int32 PlayerIndex);
	void InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class UFortPartyContext* CallFunc_GetContext_ReturnValue4);
	void OnLobbyPlayerHovered(int32 PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_LessEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue1);
	void Refresh(bool bChatDisabled, const struct FLinearColor& Temp_struct_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class AFortLobbyBeaconClient* CallFunc_GetLobbyBeaconClient_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AFortLobbyBeaconClientRM* K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, const struct FLinearColor& Temp_struct_Variable1, enum class EFortPartyMemberLocation CallFunc_GetPartyMemberLocation_LocationOut, bool CallFunc_GetPartyMemberLocation_ReturnValue, bool K2Node_SwitchEnum1_CmpSuccess, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable2, const struct FLinearColor& K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select2_Default);
	void RefreshPlayerName(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnLobbyStarted();
	void OnUpdateLobbyPlayerPadTop(const struct FUniqueNetIdRepl& PlayerNetId, bool bIsReady);
	void OnLobbyDisconnected();
	void ExecuteUbergraph_LobbyPlayerPadTop(int32 EntryPoint, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable1, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortLobbyBeaconClient* CallFunc_GetLobbyBeaconClient_ReturnValue, class AFortLobbyBeaconClientRM* K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const class FString& Temp_string_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomInteger_ReturnValue, const class FString& Temp_string_Variable3, const struct FUniqueNetIdRepl& K2Node_CustomEvent_PlayerNetId, bool K2Node_CustomEvent_bIsReady, bool CallFunc_AreUniqueIDsIdentical_ReturnValue, int32 Temp_int_Variable, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
