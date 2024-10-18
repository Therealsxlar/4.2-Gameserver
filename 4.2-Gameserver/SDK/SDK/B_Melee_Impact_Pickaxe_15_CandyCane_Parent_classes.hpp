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

// 0x20 (0xBD8 - 0xBB8)
// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C
class AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C : public AB_Melee_Impact_Pickaxe_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB8(0x8)(Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*              MeshMID;                                           // 0xBC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Kills;                                             // 0xBC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5426[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       JingleTimeFX;                                      // 0xBD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C");
		return Clss;
	}

	void TurnOnLights(float Kills);
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void UpdateBasedOnKills();
	void K2_OnProgressiveCosmeticWatchedStatChanged(class FName StatName, int32 NewValue);
	void ExecuteUbergraph_B_Melee_Impact_Pickaxe_15_CandyCane_Parent(int32 EntryPoint, float CallFunc_K2_GetScalarParameterValue_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, class FName K2Node_Event_StatName, int32 K2Node_Event_NewValue, float CallFunc_Conv_IntToFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
