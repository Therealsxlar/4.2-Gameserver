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
// AnimBlueprintGeneratedClass BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C
class UBP_AssaultRifle_FrontClip_SideAction_C : public UAnimInstance
{
public:
	uint8                                        Pad_53E6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_BA9A03134DBA089D49100DBE71EF86F5; // 0x368(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4E27AC5C48BE291AEB818BA0DAEA04EB; // 0x3B0(0x70)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_B63DE5144515FA5CE71B26B8581D7149; // 0x420(0x38)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_AssaultRifle_FrontClip_SideAction_C");
		return Clss;
	}

	void ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
