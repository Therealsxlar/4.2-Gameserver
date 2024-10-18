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

// 0x11A8 (0x15B8 - 0x410)
// AnimBlueprintGeneratedClass F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C
class UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_966722F040605A529996238D427F43D4; // 0x418(0x48)()
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_706F137147C60FF00343D1942C15960B; // 0x460(0x68)()
	uint8                                        Pad_5050[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_18FA112E46ABA0D05274AA95C741D095; // 0x4D0(0x380)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6B89CDA04ED040E5B4E7049182772646; // 0x850(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2F8266E641D30F638E18F9AD63452CB2; // 0x898(0x48)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_20B56F374DE380A7E12409AE93F8D7F9; // 0x8E0(0x380)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_8B2A53064649ECCBE2C488A1BFAA1ABC; // 0xC60(0x380)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_912B846445FBAD349FA22EBCF5DB5505; // 0xFE0(0x380)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_A51E3A934B8D907BC2DA37A7CE8355D3; // 0x1360(0xE0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_E6FD1209434285325183BFB8C8B047D7; // 0x1440(0x50)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_90E87AEB4216ABCCD1A7C288696B4405; // 0x1490(0xD0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_890553D14E92A2709A57D6913EA2991E; // 0x1560(0x50)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x15B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_AnimGraphNode_BlendListByBool_90E87AEB4216ABCCD1A7C288696B4405();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
