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
// AnimBlueprintGeneratedClass Pistol_Revolver_SideAction_AnimBP.Pistol_Revolver_SideAction_AnimBP_C
class UPistol_Revolver_SideAction_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_4E49[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_4B9C316E43FA08653813BBBCA2D3C1CC; // 0x368(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_7B68B15D437D89F24C3E878507F22BD7; // 0x3B0(0x70)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13AC6DBF4FB71657F72EF3BFDFE4EBE8; // 0x420(0xB0)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Pistol_Revolver_SideAction_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
