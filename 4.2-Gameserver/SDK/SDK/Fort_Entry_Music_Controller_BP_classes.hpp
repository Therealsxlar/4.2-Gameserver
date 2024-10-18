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

// 0x58 (0x380 - 0x328)
// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
class AFort_Entry_Music_Controller_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class UAudioComponent*                       MenuMusic_B;                                       // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MenuMusic_A;                                       // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Hexmap_Music;                                      // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Homebase_Music;                                    // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       OverView_Music;                                    // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       LobbyMusic;                                        // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       LlamaVO;                                           // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       LoginMusic;                                        // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutTime;                                       // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4192[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            CurrentMusic;                                      // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Fort_Entry_Music_Controller_BP_C");
		return Clss;
	}

	void UserConstructionScript();
	void Music_Login_FadeIn();
	void Music_Store_FadeIn();
	void Music_Lobby_FadeIn();
	void Music_WorldOverview_FadeIn();
	void Music_HomeBase_FadeIn();
	void Music_Hexmap_FadeIn();
	void Music_Heroes_FadeIn();
	void Music_Vault_FadeIn();
	void Music_Store_CardIntro_Fadein();
	void Store_Transition_To_Purchase();
	void Store_Llama_HangingOut();
	void Store_CardpackSummaryOpenAndLoop();
	void Store_HitLlamaAndLoop();
	void Store_Intro_Loop();
	void VBucks_Menu_Enter();
	void ReceiveBeginPlay();
	void On_Sub_Game_Changed(enum class ESubGame SubGame);
	void Music_Lobby_Athena_FadeIn();
	void Change_Music(class USoundBase* New_Music);
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable1, bool CallFunc_Not_PreBool_ReturnValue1, enum class ESubGame K2Node_CustomEvent_SubGame, bool K2Node_SwitchEnum_CmpSuccess, class USoundBase* K2Node_CustomEvent_New_Music, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
