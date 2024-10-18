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

// 0x20F0 (0x24F8 - 0x408)
// AnimBlueprintGeneratedClass SmasherVimBlueprint.SmasherVimBlueprint_C
class USmasherVimBlueprint_C : public UFortAIAnimInstance
{
public:
	uint8                                        Pad_37A3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_FBAC1AEB479405046F3E4AB17CDECB34; // 0x418(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_36707A12499C230B89B08282F69A2E71; // 0x460(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_D06D743D425B7D3C8406EFBD08A68E63; // 0x4A8(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_57C1753D42DBAD4187C85AAE4603F95B; // 0x4F0(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2C0EA83E4DB1BC60C7AC4B90DFE6D5B6; // 0x538(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_854F7DBB41A386B898E3D9B5031F823F; // 0x580(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9CEC73804ACDA2E1261690879C9C187C; // 0x5C8(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6FC4F6E34980671B8CA4B4B2CD6FD910; // 0x610(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_B689746C43A09BADCA561E824233D6DB; // 0x658(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_564BC95D4976A04334CA6396B63076C9; // 0x6A0(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_43B115994B9593AA0CA46F8CE8D234A4; // 0x750(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_888AB38A4E443EF568F16BBB7062FC5A; // 0x798(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_39EEE9BB454180F0E2D6C3B5CD1E70F1; // 0x848(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_2F62B99A4BAA1EF83667A18D506D29F8; // 0x890(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_FCE49AD64EB4DF949728BFA35B4E5EE3; // 0x8D8(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_52BFE79F437D30059F178C9E15A5C4CC; // 0x988(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_99C31F56427E8F457E63C2AF44A426B1; // 0x9D0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_FE4195FC43F5F9BCAAF69885D08B8652; // 0xA18(0xB0)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_745C2C5440AF055F81539AB5B7188E58; // 0xAC8(0xE0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_55B330D54A9EB1F611FA37934D427BCA; // 0xBA8(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_13FCB8264963D347E5912E86DC90A470; // 0xC58(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_7A978E3A445354F73A1E51A3CCB88471; // 0xCA0(0x128)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_C87CEEF34F96245643EBF2BE420575E1; // 0xDC8(0x48)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_FE11925047A7523852B87280347D5FD0; // 0xE10(0xE0)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_9587DA7E45E2B3F31B460E8B58F6B403; // 0xEF0(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_Root_D2C6F6F94C255FCE32E7B0861950FE5F; // 0xF60(0x48)()
	uint8                                        Pad_37A4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_48047F004CB41222F5B4388F9DCC593F; // 0xFB0(0x270)()
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_B813041441B0CFB17DFBB4A757025061; // 0x1220(0x270)()
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_C820F2EB423F7CC747F140B43E22DD3E; // 0x1490(0x270)()
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_2CDDA8BE415F026814E029BBE0EF5B83; // 0x1700(0x270)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_C1D86F134D5174CDF7CFE281E4BE1882; // 0x1970(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4355AED64A7A2B7EDEDCFA9763CB0B7B; // 0x19B8(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_811A1186477A26E7364FC39749563CCF; // 0x1A00(0x70)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6541859B4F3F177972FEC79707830329; // 0x1A70(0xE0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_24F4699C428EF73E5EB86584CBF00FC3; // 0x1B50(0x50)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_314C61944499EBE5A40767A25D1A0DC3; // 0x1BA0(0x120)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_FD1871E2448FCC5998774E8206444D18; // 0x1CC0(0x50)()
	struct FAnimNode_SubInstance                 AnimGraphNode_SubInstance_A10779BC4890311C376A58878C655281; // 0x1D10(0xC8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_F61AFB1741EEE8E404EFB7A121F8D2E7; // 0x1DD8(0xE0)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_44CA33F44D1BFA86AD3745BC5E17198B; // 0x1EB8(0xE0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_61AB20214AFA59094F1ECBBC9788DE75; // 0x1F98(0x50)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_659DB89649A23682279A8999ACF6EA45; // 0x1FE8(0x70)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2DCFF1834E04B60148E4A2BC78812DFE; // 0x2058(0x50)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_ABD899E4436A06324E298FBF07E6E243; // 0x20A8(0x200)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_87421D7242560831341F28888ADD8173; // 0x22A8(0xE0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5E472A5745CC8120724032898728ACA4; // 0x2388(0x50)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2FF18F9B4CC62155607B06805B323120; // 0x23D8(0x50)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_94E77D9E46EF25EEFD76A89B797C291C; // 0x2428(0xD0)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SmasherVimBlueprint_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_D06D743D425B7D3C8406EFBD08A68E63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_57C1753D42DBAD4187C85AAE4603F95B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_36707A12499C230B89B08282F69A2E71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_2C0EA83E4DB1BC60C7AC4B90DFE6D5B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_854F7DBB41A386B898E3D9B5031F823F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_9CEC73804ACDA2E1261690879C9C187C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_6FC4F6E34980671B8CA4B4B2CD6FD910();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_B689746C43A09BADCA561E824233D6DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_FBAC1AEB479405046F3E4AB17CDECB34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_SequencePlayer_55B330D54A9EB1F611FA37934D427BCA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_BlendSpacePlayer_7A978E3A445354F73A1E51A3CCB88471();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_LayeredBoneBlend_44CA33F44D1BFA86AD3745BC5E17198B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_ABD899E4436A06324E298FBF07E6E243();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_BlendListByBool_94E77D9E46EF25EEFD76A89B797C291C();
	void AnimNotify_SleepingFullyBlended();
	void ExecuteUbergraph_SmasherVimBlueprint(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue5, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue6, bool CallFunc_BooleanOR_ReturnValue7, bool CallFunc_BooleanOR_ReturnValue8, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue9, bool CallFunc_BooleanOR_ReturnValue10, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue4, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue5, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue6, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue11, bool CallFunc_BooleanAND_ReturnValue5, bool CallFunc_Not_PreBool_ReturnValue7, bool CallFunc_BooleanOR_ReturnValue12, bool CallFunc_EqualEqual_ByteByte_ReturnValue5, bool CallFunc_BooleanOR_ReturnValue13, bool CallFunc_BooleanAND_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue7, bool CallFunc_EqualEqual_ByteByte_ReturnValue6, bool CallFunc_Not_PreBool_ReturnValue8);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
