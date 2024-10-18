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
// AnimBlueprintGeneratedClass BP_Auto_Shotgun_Drum_Side_Action.BP_Auto_Shotgun_Drum_Side_Action_C
class UBP_Auto_Shotgun_Drum_Side_Action_C : public UAnimInstance
{
public:
	uint8                                        Pad_52DC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_7EA7D37645F443897F10498323E528F7; // 0x368(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_64A40914450FCFA8B6BB00AA8DAB6F04; // 0x3B0(0x70)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_9AFCD47E4FA0ED23378DEABB5751407C; // 0x420(0x38)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Auto_Shotgun_Drum_Side_Action_C");
		return Clss;
	}

	void ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
