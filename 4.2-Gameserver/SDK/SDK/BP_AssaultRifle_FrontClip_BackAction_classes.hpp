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
// AnimBlueprintGeneratedClass BP_AssaultRifle_FrontClip_BackAction.BP_AssaultRifle_FrontClip_BackAction_C
class UBP_AssaultRifle_FrontClip_BackAction_C : public UAnimInstance
{
public:
	uint8                                        Pad_2E08[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_093BD79B4AD87188F29729836AA06276; // 0x368(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_A31555D842D75C0905B639846DA94151; // 0x3B0(0x38)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_6E68D2AF43B0D536C012ED82940BED48; // 0x3E8(0x70)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_AssaultRifle_FrontClip_BackAction_C");
		return Clss;
	}

	void ExecuteUbergraph_BP_AssaultRifle_FrontClip_BackAction(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
