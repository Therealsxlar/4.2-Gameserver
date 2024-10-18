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

// 0x35 (0xBED - 0xBB8)
// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_Athena_Keg.B_Melee_Impact_Pickaxe_Athena_Keg_C
class AB_Melee_Impact_Pickaxe_Athena_Keg_C : public AB_Melee_Impact_Pickaxe_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB8(0x8)(Transient, DuplicateTransient)
	float                                        Splat_Decal_Size__Min_;                            // 0xBC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Splat_Decal_Size__Max_;                            // 0xBC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Decal_Height;                                      // 0xBC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Decal_Lifespan;                                    // 0xBCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Decal_Fadeout_Hold;                                // 0xBD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DecalPosition;                                     // 0xBD4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Decal_Size;                                        // 0xBE0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnDecal_;                                       // 0xBEC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Melee_Impact_Pickaxe_Athena_Keg_C");
		return Clss;
	}

	void SpawnDecalCheck(const struct FVector& Hit_Location, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue3, bool CallFunc_Less_FloatFloat_ReturnValue4, bool CallFunc_Greater_FloatFloat_ReturnValue4, bool CallFunc_Less_FloatFloat_ReturnValue5, bool CallFunc_Greater_FloatFloat_ReturnValue5);
	void UserConstructionScript();
	void OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, class UParticleSystemComponent* SpawnedPSC);
	void ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg(int32 EntryPoint, const struct FHitResult& K2Node_Event_HitResult, enum class EPhysicalSurface K2Node_Event_ImpactPhysicalSurface, class UParticleSystemComponent* K2Node_Event_SpawnedPSC);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
