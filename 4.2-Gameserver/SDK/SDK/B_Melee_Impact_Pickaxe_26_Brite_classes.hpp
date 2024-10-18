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

// 0x34 (0xBEC - 0xBB8)
// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C
class AB_Melee_Impact_Pickaxe_26_Brite_C : public AB_Melee_Impact_Pickaxe_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB8(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Eye_l;                                             // 0xBC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Eye_r;                                             // 0xBC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Mid;                                               // 0xBD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KillCount;                                         // 0xBD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GlowKillThresholdMin;                              // 0xBDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GlowKillThresholdMax;                              // 0xBE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HornScaleKillThresholdMin;                         // 0xBE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HornScaleKillThresholdMax;                         // 0xBE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Melee_Impact_Pickaxe_26_Brite_C");
		return Clss;
	}

	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void K2_OnProgressiveCosmeticWatchedStatChanged(class FName StatName, int32 NewValue);
	void UpdateBasedOnKills();
	void ExecuteUbergraph_B_Melee_Impact_Pickaxe_26_Brite(int32 EntryPoint, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UANimBP_UnicornHorn_C* K2Node_DynamicCast_AsANim_BP_Unicorn_Horn, bool K2Node_DynamicCast_bSuccess, class FName K2Node_Event_StatName, int32 K2Node_Event_NewValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
