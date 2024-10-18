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

// 0x18 (0x358 - 0x340)
// BlueprintGeneratedClass Frontend_Lobby.Frontend_Lobby_C
class AFrontend_Lobby_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(Transient, DuplicateTransient)
	class FName                                  CurrentBackgroundLevelName;                        // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NewBackgroundLevelName;                            // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Frontend_Lobby_C");
		return Clss;
	}

	void OnBackgroundChanged();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Frontend_Lobby(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class FName CallFunc_GetLobbyBackgroundLevelName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
