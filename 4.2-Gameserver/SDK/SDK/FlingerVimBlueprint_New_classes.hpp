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

// 0xE30 (0x1238 - 0x408)
// AnimBlueprintGeneratedClass FlingerVimBlueprint_New.FlingerVimBlueprint_New_C
class UFlingerVimBlueprint_New_C : public UFortAIAnimInstance
{
public:
	uint8                                        Pad_368E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_C02B41E84C1D1B2E2F8EC1A98D330FF5; // 0x418(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_7C48D53B435A541611F7A589DD3A3C70; // 0x460(0x70)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_8F8829F54FD9DC3777837686B8E6717E; // 0x4D0(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2A7BFDB941BD6352ED00A5993CA37132; // 0x518(0x48)()
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_CC3BA7AB46B7CC1F2BFC05B3DB295E1C; // 0x560(0x270)()
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_AB38B6944E22B7240140AF80D483AAA6; // 0x7D0(0x270)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_9E5DA9C044857B2A8F820DA78BCAC25F; // 0xA40(0x70)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_109D7760470C81BBF70161ACF75AF044; // 0xAB0(0xE0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_FE2A28F348DC1163DCB6AAB228B9E688; // 0xB90(0x50)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_ACC0EBF5482B72F28EA8E191503CC1E8; // 0xBE0(0x120)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_933455CA495348A9642A6283295597A2; // 0xD00(0x50)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34B2EF3C44F6A8F2821520B6BCACB7E1; // 0xD50(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_F34AB0D3442DF52EAAD037B323003D7A; // 0xD98(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8D03D3734EFC15D0357B44B30E132708; // 0xDE0(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5172BD5646FEC28D140562B89BD907AA; // 0xE28(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_FAE54917452C122F3E3C4A9EF6F4AD3F; // 0xE70(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_0DA2AB9841F1BA317CA40B8524C1BCE9; // 0xF20(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5CFBFACA475DC146C45DCD95CC4931F3; // 0xF68(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_E683C892495D3A9760E77EA3CB427761; // 0x1018(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_AFD3E84B47A5C4EC9AF0128360906FC1; // 0x1060(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_7E668416496F661D7DBA4486B32AC045; // 0x1110(0x48)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1E9EAC684ED004AB258FF6827B2B404F; // 0x1158(0xE0)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FlingerVimBlueprint_New_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlingerVimBlueprint_New_AnimGraphNode_TransitionResult_5172BD5646FEC28D140562B89BD907AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlingerVimBlueprint_New_AnimGraphNode_TransitionResult_8D03D3734EFC15D0357B44B30E132708();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlingerVimBlueprint_New_AnimGraphNode_SequencePlayer_FAE54917452C122F3E3C4A9EF6F4AD3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlingerVimBlueprint_New_AnimGraphNode_TransitionResult_F34AB0D3442DF52EAAD037B323003D7A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlingerVimBlueprint_New_AnimGraphNode_TransitionResult_34B2EF3C44F6A8F2821520B6BCACB7E1();
	void ExecuteUbergraph_FlingerVimBlueprint_New(int32 EntryPoint, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
