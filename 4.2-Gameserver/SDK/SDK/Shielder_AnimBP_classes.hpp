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

// 0x2E9C (0x31F4 - 0x358)
// AnimBlueprintGeneratedClass Shielder_AnimBP.Shielder_AnimBP_C
class UShielder_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_3BA5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1AF6CEA241B4EFABDE6DE1B3E79BC5DF; // 0x368(0x70)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4B6E921C410F994AEBB3669AA7671278; // 0x3D8(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1A9D209E4F439331743621BA64CF3C22; // 0x420(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8F7BAB22494C6652853C2DB4B78E5EB1; // 0x468(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_64F638374E3A425A40F8768292E1CBAB; // 0x4B0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_71667AB441930B4A5CBACC983713B3FD; // 0x4F8(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_C8B4D5C6407141DFC802F39076F63A71; // 0x5A8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_55A39E584D0D03C5C0ACD1B80017E348; // 0x5F0(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_E88305EF4EC8C13449A03DA51BE219BF; // 0x6A0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_DE306AB24FBA7EF1EEE74D848B32AE08; // 0x6E8(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_StateResult_F76894F5439CEE20D16AB89210FA35F3; // 0x798(0x48)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_7A492D5E4B91AF2B6783A98C61BC5C7C; // 0x7E0(0xE0)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_548804C544150F086A2D7CB13B4443D1; // 0x8C0(0x70)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_961752584D112905920E2186887B255C; // 0x930(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_092208A34ADB41F15D8DC0A003E53E8B; // 0x978(0x48)()
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_ADF7F0304EAAB0169163AF97DCCDD06E; // 0x9C0(0x240)()
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_EEB0718F4F580A8B395D5F85AC4BCDCB; // 0xC00(0x240)()
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_75A72B7542D28D85CB53C9BCDE31790B; // 0xE40(0x240)()
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_C41C4A8143AE12AD0A5C1198F72912C4; // 0x1080(0x240)()
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_4B17AFA7484A7476DE37B2AFC774735C; // 0x12C0(0x240)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5EACE9814BD7663EFF5A4EB4A6267911; // 0x1500(0xD0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_D8C7CB34497A3672AAD1C4AF984A4B5E; // 0x15D0(0xE0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_0EF986B649BA67F5530DE790ECB07E68; // 0x16B0(0x50)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6403226D4978CE414DC7BEAE5440C7A0; // 0x1700(0x50)()
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_FF2BE5334EC963253184219F8D6CEBE1; // 0x1750(0x240)()
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_91A6E94B4403D6FE7667D1AE708E00C9; // 0x1990(0x240)()
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_703B04C4479A6FF38E449CB56C0C9E32; // 0x1BD0(0x240)()
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_F8F28A2341D427DBCC3463B753C8F884; // 0x1E10(0x240)()
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_0213A6E24F644BB0F4ADE0BC240149E0; // 0x2050(0x240)()
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_E6FF7CFF4B667248BB4D0B9D80CE57C7; // 0x2290(0x240)()
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_68B98BDD43F0651856C42C88D98638D4; // 0x24D0(0x240)()
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_1EC87F2B4134D48DB470CDB984C5CB32; // 0x2710(0x240)()
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_85820324449E7A01B496868D8D42DA4B; // 0x2950(0x240)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_6416B4BA4A35340EFBA0CBA57750D945; // 0x2B90(0x118)()
	struct FAnimNode_Root                        AnimGraphNode_Root_7DE4D53242B2AD51D3E9A28151C05EA5; // 0x2CA8(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_DDCF714A4D0C8C522B47AA9887917E34; // 0x2CF0(0x128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_FF7C86A947FA9AC3BA3658951D35A3FC; // 0x2E18(0x48)()
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_557155124535AB6A09814FAB6B6628B8; // 0x2E60(0x180)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_14243BD34C51BFBCCB5ACEB4D60C2457; // 0x2FE0(0x48)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_456A1C2141841886A9C26289A75E6F54; // 0x3028(0x50)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_922D122F41AA7533D2B8F1AF7A5E2F62; // 0x3078(0x120)()
	float                                        Speed;                                             // 0x3198(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UpwardVelocity;                                    // 0x319C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMovementStyle                MovementStyle;                                     // 0x31A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Orphaned;                                          // 0x31A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BA6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShielderPawn_C*                       ShielderPawn;                                      // 0x31A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TailAimTargetLocation;                             // 0x31B0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ShielderLocation;                                  // 0x31BC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ShielderLocation_LastFrame;                        // 0x31C8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ShielderLocation_Delta;                            // 0x31D4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShielderLeanAngle_FwdBack;                         // 0x31E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShielderLeanAngle_LeftRight;                       // 0x31E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShielderLeanAngleMultiplier;                       // 0x31E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldDisableTailAim;                              // 0x31EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BA7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpringSkelControlWeight;                           // 0x31F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Shielder_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_BlendListByBool_5EACE9814BD7663EFF5A4EB4A6267911();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_FF2BE5334EC963253184219F8D6CEBE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_91A6E94B4403D6FE7667D1AE708E00C9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_703B04C4479A6FF38E449CB56C0C9E32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_F8F28A2341D427DBCC3463B753C8F884();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_0213A6E24F644BB0F4ADE0BC240149E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_E6FF7CFF4B667248BB4D0B9D80CE57C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_68B98BDD43F0651856C42C88D98638D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_1EC87F2B4134D48DB470CDB984C5CB32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_85820324449E7A01B496868D8D42DA4B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_BlendSpacePlayer_DDCF714A4D0C8C522B47AA9887917E34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_SpringBone_557155124535AB6A09814FAB6B6628B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_C41C4A8143AE12AD0A5C1198F72912C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_75A72B7542D28D85CB53C9BCDE31790B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_EEB0718F4F580A8B395D5F85AC4BCDCB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_ADF7F0304EAAB0169163AF97DCCDD06E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_TransitionResult_64F638374E3A425A40F8768292E1CBAB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_TransitionResult_8F7BAB22494C6652853C2DB4B78E5EB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_LookAt_4B17AFA7484A7476DE37B2AFC774735C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_TransitionResult_1A9D209E4F439331743621BA64CF3C22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_TransitionResult_4B6E921C410F994AEBB3669AA7671278();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Shielder_AnimBP(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess, enum class EFortMovementStyle CallFunc_GetMovementStyle_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsFalling_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_VSize2D_ReturnValue, class AShielderPawn_C* K2Node_DynamicCast_AsShielder_Pawn, bool K2Node_DynamicCast_bSuccess1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_InverseTransformDirection_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue1, float CallFunc_GetWorldDeltaSeconds_ReturnValue2, float CallFunc_GetWorldDeltaSeconds_ReturnValue3, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FInterpTo_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
