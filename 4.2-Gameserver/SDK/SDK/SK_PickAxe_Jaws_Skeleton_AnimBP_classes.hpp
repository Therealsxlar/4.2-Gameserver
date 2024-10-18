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

// 0x6E8 (0xAF8 - 0x410)
// AnimBlueprintGeneratedClass SK_PickAxe_Jaws_Skeleton_AnimBP.SK_PickAxe_Jaws_Skeleton_AnimBP_C
class USK_PickAxe_Jaws_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_6B147D6642EFDBB249D21998BE4ED15C; // 0x418(0x68)()
	struct FAnimNode_Root                        AnimGraphNode_Root_85E18924481875C844C3A3A7EA0A5DAF; // 0x480(0x48)()
	uint8                                        Pad_525F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_E40FC2B6491B2E41E87B22BE74EFDBED; // 0x4D0(0x590)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_D00AF4E743A94A1AD17B36A5F9F03EEA; // 0xA60(0x48)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_DB4BDBBD424FBEF62E5517A65A3B4597; // 0xAA8(0x48)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0xAF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_PickAxe_Jaws_Skeleton_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_SK_PickAxe_Jaws_Skeleton_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
