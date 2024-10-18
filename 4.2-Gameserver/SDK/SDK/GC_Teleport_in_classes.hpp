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

// 0x4 (0x84 - 0x80)
// BlueprintGeneratedClass GC_Teleport_in.GC_Teleport_In_C
class UGC_Teleport_In_C : public UFortGameplayCueNotify_Simple
{
public:
	float                                        Default_Play_Length;                               // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GC_Teleport_In_C");
		return Clss;
	}

	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool Temp_bool_Variable, bool CallFunc_OnExecute_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class APlayerPawn_Generic_Parent_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float K2Node_Select_Default, class ADuplicateResOutMesh_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
