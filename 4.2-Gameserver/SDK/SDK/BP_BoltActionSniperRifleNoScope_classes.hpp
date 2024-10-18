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
// AnimBlueprintGeneratedClass BP_BoltActionSniperRifleNoScope.BP_BoltActionSniperRifleNoScope_C
class UBP_BoltActionSniperRifleNoScope_C : public UAnimInstance
{
public:
	uint8                                        Pad_3688[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_80F88762449D5790C18126A73190A30A; // 0x368(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3F9AE2D64A1081980E00CE94E79DD708; // 0x3B0(0x70)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_F813E2B842B7262277782F9EC5A3917A; // 0x420(0xB0)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_BoltActionSniperRifleNoScope_C");
		return Clss;
	}

	void ExecuteUbergraph_BP_BoltActionSniperRifleNoScope(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
