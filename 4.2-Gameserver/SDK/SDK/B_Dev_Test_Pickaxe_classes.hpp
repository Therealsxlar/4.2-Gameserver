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

// 0x28 (0xBE0 - 0xBB8)
// BlueprintGeneratedClass B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C
class AB_Dev_Test_Pickaxe_C : public AB_Melee_Impact_Pickaxe_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB8(0x8)(Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*              Mid;                                               // 0xBC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Kill;                                              // 0xBC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxKills;                                          // 0xBCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KillGlowThreshold;                                 // 0xBD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KillHornThreshold;                                 // 0xBD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     NewVar_0;                                          // 0xBD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Dev_Test_Pickaxe_C");
		return Clss;
	}

	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void K2_OnProgressiveCosmeticWatchedStatChanged(class FName StatName, int32 NewValue);
	void ExecuteUbergraph_B_Dev_Test_Pickaxe(int32 EntryPoint, class FName K2Node_Event_StatName, int32 K2Node_Event_NewValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
