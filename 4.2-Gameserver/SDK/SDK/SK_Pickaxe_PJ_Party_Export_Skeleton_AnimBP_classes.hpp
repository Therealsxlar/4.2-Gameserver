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

// 0xF58 (0x1368 - 0x410)
// AnimBlueprintGeneratedClass SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP.SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C
class USK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_421E159244147BBC5C47379496FAAE1B; // 0x418(0x68)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_5744159B4EE1D73C7D8EF0B371B2684F; // 0x480(0x590)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_225561ED45DE5C2DECEDCB9D8F3CBF98; // 0xA10(0xD0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_25E7BF754A4B2C7227E146B4F8D02C1E; // 0xAE0(0xE0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_69A32A59489AD57DEF9F04A8666505D8; // 0xBC0(0x50)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_F05A53DA4C4A7B3876B951A736CB45AA; // 0xC10(0x48)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_463A848D4E661E918E46149071B8A38C; // 0xC58(0x50)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_232C9E2D4CD7AFB441AC03B53C09A131; // 0xCA8(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_79529D1E4DD2609CC3183FB4F38B72DA; // 0xCF0(0x48)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_16A065814A83DB639FB5688BC44C9734; // 0xD38(0x48)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_B4FE9C064848B634CAB4D3B16F5105FE; // 0xD80(0x590)()
	struct FAnimNode_Root                        AnimGraphNode_Root_BE2E74B94CD2DD95BE92B49C366772FE; // 0x1310(0x48)()
	struct FVector                               ExtVel;                                            // 0x1358(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ForceScale;                                        // 0x1364(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_225561ED45DE5C2DECEDCB9D8F3CBF98();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Event_DeltaTimeX, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
