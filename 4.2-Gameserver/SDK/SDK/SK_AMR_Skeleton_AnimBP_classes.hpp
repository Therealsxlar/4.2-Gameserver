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

// 0x494 (0x7EC - 0x358)
// AnimBlueprintGeneratedClass SK_AMR_Skeleton_AnimBP.SK_AMR_Skeleton_AnimBP_C
class USK_AMR_Skeleton_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_527F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_14E0A36B40D7CB7F8DE59DBDC13CE364; // 0x368(0x48)()
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_B6BDB3454D7292BB4130B7A8AA9DEDA7; // 0x3B0(0x180)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_DC0B2D6840E4BC0BFBE5C4B2250764FB; // 0x530(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7122483F4CB03C64C14DA7B10CFB57B2; // 0x578(0x48)()
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_12832F8745DDAA986539DB9A93020DB9; // 0x5C0(0x180)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_86E645A943788F57C7CA249A842FEE55; // 0x740(0x70)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_19EAF67347136A59BFDB76A1B0DC77DC; // 0x7B0(0x38)()
	float                                        SpringVal;                                         // 0x7E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_AMR_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_AMR_Skeleton_AnimBP_AnimGraphNode_SpringBone_B6BDB3454D7292BB4130B7A8AA9DEDA7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_AMR_Skeleton_AnimBP_AnimGraphNode_SpringBone_12832F8745DDAA986539DB9A93020DB9();
	void ExecuteUbergraph_SK_AMR_Skeleton_AnimBP(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
