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

// 0x27C (0x69C - 0x420)
// BlueprintGeneratedClass B_SoundIndicator_01.B_SoundIndicator_01_C
class AB_SoundIndicator_01_C : public AFortSoundCameraLensEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(Transient, DuplicateTransient)
	bool                                         Chest;                                             // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FootSteps;                                         // 0x429(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Gunshot;                                           // 0x42A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Generic;                                           // 0x42B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B85[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Gunshot_Falloff_Long_Range;                        // 0x430(0x78)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Chest_Falloff;                                     // 0x4A8(0x78)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Footsteps_Falloff;                                 // 0x520(0x78)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Gunshot_Falloff_Mid_Range;                         // 0x598(0x78)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Gunshot_Falloff_Melee;                             // 0x610(0x78)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        OppositeFacingGunshotStrength;                     // 0x688(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FacingGunshotExponentNear;                         // 0x68C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ForwardFacingGunshotStrength;                      // 0x690(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FacingGunshotExponentFar;                          // 0x694(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistanceDivisor;                                   // 0x698(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_SoundIndicator_01_C");
		return Clss;
	}

	void CalculateFiringAngle(float* DotResult, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortWeaponRanged* K2Node_DynamicCast_AsFort_Weapon_Ranged, bool K2Node_DynamicCast_bSuccess1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue1, float CallFunc_Lerp_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue1);
	struct FRuntimeFloatCurve GetWeaponCurve(bool Temp_bool_Variable, bool Temp_bool_Variable1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FRuntimeFloatCurve& K2Node_Select_Default, const struct FRuntimeFloatCurve& K2Node_Select1_Default);
	void UpdateEmitterStates(float CallFunc_CalculateFiringAngle_DotResult);
	void UserConstructionScript();
	void OnEffectActivated();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_SoundIndicator_01(int32 EntryPoint, const struct FRuntimeFloatCurve& CallFunc_GetWeaponCurve_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
