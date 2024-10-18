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

// 0x21C (0x574 - 0x358)
// AnimBlueprintGeneratedClass ANimBP_UnicornHorn.ANimBP_UnicornHorn_C
class UANimBP_UnicornHorn_C : public UAnimInstance
{
public:
	uint8                                        Pad_5136[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_5EA71789492D7AB39A717E8C785E00BE; // 0x368(0x48)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2C27563E472549F2720697AB08F83E1E; // 0x3B0(0x160)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_CA4101CC43143B5484092DAD36960EDA; // 0x510(0x48)()
	float                                        HornScale;                                         // 0x558(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MaxHornScale;                                      // 0x55C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MinHornScale;                                      // 0x568(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ANimBP_UnicornHorn_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANimBP_UnicornHorn_AnimGraphNode_ModifyBone_2C27563E472549F2720697AB08F83E1E();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ANimBP_UnicornHorn(int32 EntryPoint, float K2Node_Event_DeltaTimeX, const struct FVector& CallFunc_VLerp_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
