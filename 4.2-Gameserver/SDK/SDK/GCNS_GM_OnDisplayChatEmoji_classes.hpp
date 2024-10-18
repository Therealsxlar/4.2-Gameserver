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

// 0xC (0x8C - 0x80)
// BlueprintGeneratedClass GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C
class UGCNS_GM_OnDisplayChatEmoji_C : public UFortGameplayCueNotify_Simple
{
public:
	struct FVector                               ParticleRelativeOffset;                            // 0x80(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNS_GM_OnDisplayChatEmoji_C");
		return Clss;
	}

	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class UAthenaEmojiItemDefinition* K2Node_DynamicCast_AsAthena_Emoji_Item_Definition, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess1, class UMaterialInstance* CallFunc_GetMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
