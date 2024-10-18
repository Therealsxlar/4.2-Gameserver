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

// 0x100 (0x458 - 0x358)
// AnimBlueprintGeneratedClass BP_Pistol_Grip_Clip_TopAction.BP_Pistol_Grip_Clip_TopAction_C
class UBP_Pistol_Grip_Clip_TopAction_C : public UAnimInstance
{
public:
	uint8                                        Pad_5416[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_6047A5F5443C843C1EB16F90E772A9EC; // 0x368(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1C444D924AC74067230DFA9A23E9CEE2; // 0x3B0(0x70)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_FE7CFCE944C6521565A6F7AC0C7064A1; // 0x420(0x38)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Pistol_Grip_Clip_TopAction_C");
		return Clss;
	}

	void ExecuteUbergraph_BP_Pistol_Grip_Clip_TopAction(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
