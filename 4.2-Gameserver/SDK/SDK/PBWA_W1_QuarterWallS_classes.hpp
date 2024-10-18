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

// 0x8 (0xC50 - 0xC48)
// BlueprintGeneratedClass PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C
class APBWA_W1_QuarterWallS_C : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC48(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PBWA_W1_QuarterWallS_C");
		return Clss;
	}

	void UserConstructionScript();
	void GameplayCue_Abilities_Activation_Generic_BannerWallBuff1(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_BannerWallBuff2(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_PBWA_W1_QuarterWallS(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType1, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters1, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
