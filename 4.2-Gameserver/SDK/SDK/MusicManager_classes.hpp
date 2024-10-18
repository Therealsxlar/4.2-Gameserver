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

// 0x87 (0x40F - 0x388)
// BlueprintGeneratedClass MusicManager.MusicManager_C
class AMusicManager_C : public AFortMusicManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(Transient, DuplicateTransient)
	float                                        Gameplay_Music_Fader_Volume_869161D741AED71C8F0239859977BB00; // 0x390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Gameplay_Music_Fader__Direction_869161D741AED71C8F0239859977BB00; // 0x394(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CB0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Gameplay_Music_Fader;                              // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            MusicFrontend;                                     // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            MusicLobby;                                        // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            StingerReturningToAmbientMusic;                    // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CB1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GameMode_Current;                                  // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  GameMode_Lobby;                                    // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  GameMode_Frontend;                                 // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  GameMode_InGame;                                   // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayStingerWhenReturningToAmbientMusic;            // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingAmbientMusic;                               // 0x3E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingThreatMusic;                                // 0x3E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingNearbyEnemiesMusic;                         // 0x3E3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingHuskLowMusic;                               // 0x3E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingHuskHighMusic;                              // 0x3E5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingLargeEnemyMusic;                            // 0x3E6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CB2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LastTimeMusicWasStartedOrContinued;                // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentMusicIntensityLevel;                        // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CurrentDayPhase;                                   // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CB3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MusicLogicUpdateTickTime;                          // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinDurationBeforeMusicCanIncreaseIntensity;        // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntensityIncreaseFadeTime;                         // 0x3FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMusicFadeStyles                  IntensityIncreaseFadeStyle;                        // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CB4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinDurationBeforeMusicCanDecreaseInIntensity;      // 0x404(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntensityDecreaseFadeTime;                         // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMusicFadeStyles                  IntensityDecreaseFadeStyle;                        // 0x40C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MusicShouldStop;                                   // 0x40D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingStingerMusic;                               // 0x40E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MusicManager_C");
		return Clss;
	}

	void ResetMusicBools();
	void UserConstructionScript(class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End1, bool K2Node_DynamicCast_bSuccess1);
	void Gameplay_Music_Fader__FinishedFunc();
	void Gameplay_Music_Fader__UpdateFunc();
	void OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void OnUpdateMusic();
	void PlayAmbientMusic();
	void ReceiveBeginPlay();
	void On_Music_Tick();
	void PlayStinger(class UFortMusicAsset* NewMusicAsset);
	void Music_Fade_In(float Time);
	void Music_Fade_Out(float Time);
	void On_Stinger_Completed(class UFortMusicVoice* Voice);
	void ExecuteUbergraph_MusicManager(int32 EntryPoint, float CallFunc_GetEventHeatPercent_ReturnValue, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue3, float CallFunc_GetGameTimeInSeconds_ReturnValue4, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue5, bool CallFunc_Greater_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue3, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue1, int32 CallFunc_Conv_ByteToInt_ReturnValue1, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue1, int32 CallFunc_MakeLiteralInt_ReturnValue1, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue6, float CallFunc_Subtract_FloatFloat_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_FloatFloat_ReturnValue4, bool CallFunc_NotEqual_IntInt_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, int32 CallFunc_Conv_ByteToInt_ReturnValue2, int32 CallFunc_MakeLiteralInt_ReturnValue2, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue2, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue2, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue7, float CallFunc_GetGameTimeInSeconds_ReturnValue8, float CallFunc_Subtract_FloatFloat_ReturnValue5, float CallFunc_GetGameTimeInSeconds_ReturnValue9, bool CallFunc_Greater_FloatFloat_ReturnValue5, float CallFunc_Subtract_FloatFloat_ReturnValue6, bool CallFunc_Greater_FloatFloat_ReturnValue6, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue3, bool CallFunc_EqualEqual_NameName_ReturnValue4, bool CallFunc_EqualEqual_NameName_ReturnValue5, enum class EFortDayPhase K2Node_Event_CurrentDayPhase, enum class EFortDayPhase K2Node_Event_PreviousDayPhase, bool K2Node_Event_bAtCreation, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetEventHeatPercent_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue7, float CallFunc_GetEventHeatPercent_ReturnValue2, float CallFunc_GetEventHeatPercent_ReturnValue3, float CallFunc_GetGameTimeInSeconds_ReturnValue10, bool CallFunc_IsNearActiveEncounters_ReturnValue, float CallFunc_GetEventHeatPercent_ReturnValue4, bool CallFunc_Not_PreBool_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue8, float CallFunc_GetEventHeatPercent_ReturnValue5, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue11, float CallFunc_Subtract_FloatFloat_ReturnValue7, bool CallFunc_Greater_FloatFloat_ReturnValue9, bool CallFunc_NotEqual_IntInt_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, int32 CallFunc_Conv_ByteToInt_ReturnValue3, int32 CallFunc_MakeLiteralInt_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue3, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue4, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue3, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue3, class UFortMusicAsset* CallFunc_GetAssetFromDayPhase_ReturnValue, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue4, class UFortMusicAsset* K2Node_Event_NewMusicAsset, class UFortMusicVoice* CallFunc_PlayMusicVoice_ReturnValue, float K2Node_CustomEvent_Time1, float K2Node_CustomEvent_Time, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, class UFortMusicVoice* K2Node_CustomEvent_Voice, float CallFunc_GetEventHeatPercent_ReturnValue6, float CallFunc_GetEventHeatPercent_ReturnValue7, float CallFunc_GetEventHeatPercent_ReturnValue8, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue4, bool CallFunc_Less_FloatFloat_ReturnValue2, bool CallFunc_Less_FloatFloat_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue10, bool CallFunc_Greater_FloatFloat_ReturnValue11);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
