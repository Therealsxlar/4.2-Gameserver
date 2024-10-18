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

// 0x4F0 (0x900 - 0x410)
// AnimBlueprintGeneratedClass SK_M_MED_Carbide_Body_Export_Skeleton_AnimBlueprint.SK_M_MED_Carbide_Body_Export_Skeleton_AnimBlueprint_C
class USK_M_MED_Carbide_Body_Export_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_CD3FD5FC4B217C2B7E3388B1A9955939; // 0x418(0x48)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_A11F9A3D4BDECF0A25F0808ED8175445; // 0x460(0xE8)(ContainsInstancedReference)
	struct FAnimNode_BoneDrivenController        AnimGraphNode_BoneDrivenController_3B521BC8433B06301EB0A8984F735F75; // 0x548(0x190)()
	struct FAnimNode_BoneDrivenController        AnimGraphNode_BoneDrivenController_6B90D6E64C97E109BF68D58983173FEB; // 0x6D8(0x190)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_CA53B3054CF061525EFBB7916C809615; // 0x868(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7E7EF067443AAAFD298C7BA2435C88AD; // 0x8B0(0x48)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x8F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_M_MED_Carbide_Body_Export_Skeleton_AnimBlueprint_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_MED_Carbide_Body_Export_Skeleton_AnimBlueprint_AnimGraphNode_CopyPoseFromMesh_A11F9A3D4BDECF0A25F0808ED8175445();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_M_MED_Carbide_Body_Export_Skeleton_AnimBlueprint(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
