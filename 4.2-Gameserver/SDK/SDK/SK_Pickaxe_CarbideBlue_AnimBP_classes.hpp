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

// 0x6D8 (0xAE8 - 0x410)
// AnimBlueprintGeneratedClass SK_Pickaxe_CarbideBlue_AnimBP.SK_Pickaxe_CarbideBlue_AnimBP_C
class USK_Pickaxe_CarbideBlue_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_B8D216BC47C52E9485A47F88F9C76D91; // 0x418(0x48)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_994860DD4F8F9D3E35DA72AE62AF25F2; // 0x460(0x590)()
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_5B916D5A4FC042BFC0D4ECB266CE1F85; // 0x9F0(0x68)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_84899BF84B2BE48F95B56AAC25D35E3F; // 0xA58(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root_CADB32404919AE1712ED6EBCE998CDDB; // 0xAA0(0x48)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Pickaxe_CarbideBlue_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_SK_Pickaxe_CarbideBlue_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
