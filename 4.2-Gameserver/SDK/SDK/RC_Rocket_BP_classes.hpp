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
// AnimBlueprintGeneratedClass RC_Rocket_BP.RC_Rocket_BP_C
class URC_Rocket_BP_C : public UAnimInstance
{
public:
	uint8                                        Pad_5282[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_08FAFFB0444865FC64D0C0BFEBA059B9; // 0x368(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_956D7C7B47E114589BA5ADB878BAB261; // 0x3B0(0xB0)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_02FBD1D3400F785868D3B9AD8C664EA4; // 0x460(0x70)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RC_Rocket_BP_C");
		return Clss;
	}

	void ExecuteUbergraph_RC_Rocket_BP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
