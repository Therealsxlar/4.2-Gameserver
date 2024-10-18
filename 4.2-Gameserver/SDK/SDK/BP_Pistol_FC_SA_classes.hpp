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
// AnimBlueprintGeneratedClass BP_Pistol_FC_SA.BP_Pistol_FC_SA_C
class UBP_Pistol_FC_SA_C : public UAnimInstance
{
public:
	uint8                                        Pad_5415[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_59F2F7924C02FD42668752B6AD5C5D7D; // 0x368(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3C404E374989FC3E37A4538744D810DA; // 0x3B0(0x70)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_16F5A0174D756BCD3A56E2A54C593E88; // 0x420(0x38)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Pistol_FC_SA_C");
		return Clss;
	}

	void ExecuteUbergraph_BP_Pistol_FC_SA(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
