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

// 0x178 (0x4D0 - 0x358)
// AnimBlueprintGeneratedClass Crossbow_BP.Crossbow_BP_C
class UCrossbow_BP_C : public UAnimInstance
{
public:
	uint8                                        Pad_5283[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_C2CE56F348B7595774725785CADC3973; // 0x368(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_Root_F1B1D70144C41EE177919293C033515D; // 0x3D8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_DB6FD6CD480FD66D7D67B3BB318137F7; // 0x420(0xB0)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Crossbow_BP_C");
		return Clss;
	}

	void ExecuteUbergraph_Crossbow_BP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
