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
// AnimBlueprintGeneratedClass BP_Shotgun_RG_BFPA.BP_Shotgun_RG_BFPA_C
class UBP_Shotgun_RG_BFPA_C : public UAnimInstance
{
public:
	uint8                                        Pad_52DB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_447289EE478D0375649725A287B7BD4C; // 0x368(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_76185EE8467A3505F3E23E89565E7CB8; // 0x3B0(0x70)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_BE887AC24A08313E787615BA25555A93; // 0x420(0x38)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Shotgun_RG_BFPA_C");
		return Clss;
	}

	void ExecuteUbergraph_BP_Shotgun_RG_BFPA(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
