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

// 0x340 (0x588 - 0x248)
// WidgetBlueprintGeneratedClass AthenaTeamMemberInfo.AthenaTeamMemberInfo_C
class UAthenaTeamMemberInfo_C : public UAthenaPlayerInfoBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      FriendRequestSent;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      DisplayAddFriend;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        AddFriendButton;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaTeamMemberDBNOState_C*          DBNOState;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DeadIndicator;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DisconnectedIndicator;                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_SocialContainer;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_CrossplayPlatform;                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageDBNOBar;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageHealthbar;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageShieldbar;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Marker;                                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Speaker;                                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      T_AddFriendLabel;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextPlayerName;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShowingHealth;                                     // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowingShield;                                     // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34CD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Player0;                                           // 0x2D0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           Player1;                                           // 0x358(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           Player2;                                           // 0x3E0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           Player3;                                           // 0x468(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Talking;                                           // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Muted;                                             // 0x4F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayerDisconnected;                                // 0x4F2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFortFriendRequestStatus          FriendRequestStatus;                               // 0x4F3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AddFriendRolloutDelay;                             // 0x4F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      McpUniqueNetID;                                    // 0x4F8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MicMID;                                            // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            MutedTexture;                                      // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            TalkingTexture;                                    // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            NotTalkingTexture;                                 // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    MicMaterial;                                       // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      ConsoleUniqueNetId;                                // 0x548(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bIsDisplayAddFriend;                               // 0x570(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PingThrottleSeconds;                               // 0x574(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PingFrequencyCounter;                              // 0x578(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          PingTimerHandle;                                   // 0x580(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaTeamMemberInfo_C");
		return Clss;
	}

	void MapPingTimeOut();
	void Mapping(class AFortGameStateAthena* AthenaGameState, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_VSize2DSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void InitSpeakerMaterial(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void UpdateUniqueID(const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetPlatformUniqueNetId_ReturnValue);
	void SendFriendInvite(const struct FUniqueNetIdRepl& UniqueNetIdToUse, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsTencentBuild_ReturnValue, bool CallFunc_IsConsolePlatform_ReturnValue, bool CallFunc_CanFriend_CanFriend);
	void CanFriend(bool* CanFriend, bool bUseConsoleId, const struct FUniqueNetIdRepl& NetIdToUse, bool Temp_bool_Variable, enum class EFortFriendRequestStatus Temp_byte_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool K2Node_Select_Default, bool CallFunc_IsPlayerOnPC_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EFortFriendRequestStatus CallFunc_GetConsoleFriendRequestStatusForPlayer_ReturnValue, enum class EFortFriendRequestStatus CallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsValid_UniqueNetIdRepl_ReturnValue, bool Temp_bool_Variable5, enum class EFortFriendRequestStatus K2Node_Select1_Default, bool CallFunc_IsValidNetID_ReturnValue, const struct FUniqueNetIdRepl& K2Node_Select2_Default, bool CallFunc_IsConsolePlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena, bool K2Node_DynamicCast_bSuccess1, const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue, bool CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue);
	void SetPlayerDisconnected(const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void SetTalking(bool NewTalking);
	void UpdateMicIcon();
	void SetMuted(bool NewMuted);
	void SetReviving(bool Reviving);
	void SetDBNO(bool DBNO);
	void SetDead(bool Dead, bool Temp_bool_Variable, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, const struct FSlateColor& K2Node_Select1_Default);
	void SetShield(float Value, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetHealth(float Value, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue1);
	void DisplayAddFriendIfApplicable();
	void BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void DisplayAddFriend_NoAnim();
	void TalkingStateChanged(bool bTalking);
	void DBNOStateChanged(bool bDBNO);
	void BeingRevivedStateChanged(bool bReviving);
	void PlayerNameChanged(const class FString& PlayerName);
	void HitPointsChanged(float HealthPercent, float ShieldPercent);
	void MutedStateChanged(bool Muted);
	void DeadStateChanged(bool DeadStateChanged);
	void DisconnectedStateChanged(bool Disconnected);
	void PlayerPlatformChanged(const class FString& CurrentPlatform);
	void MapIndicatorPositionChanged();
	void ExecuteUbergraph_AthenaTeamMemberInfo(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue, const struct FSlateBrush& K2Node_Select_Default, bool CallFunc_CanFriend_CanFriend, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_CanFriend_CanFriend1, bool K2Node_Event_bTalking, bool K2Node_Event_bDBNO, bool K2Node_Event_bReviving, const class FString& K2Node_Event_PlayerName, class FText CallFunc_Conv_StringToText_ReturnValue, float K2Node_Event_HealthPercent, float K2Node_Event_ShieldPercent, bool K2Node_Event_Muted, bool K2Node_Event_DeadStateChanged, bool K2Node_Event_Disconnected, const class FString& K2Node_Event_CurrentPlatform);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
