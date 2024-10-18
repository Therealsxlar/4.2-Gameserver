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

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass AnimNotifyState_ForceHuskMontageFullBody.AnimNotifyState_ForceHuskMontageFullBody_C
class UAnimNotifyState_ForceHuskMontageFullBody_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotifyState_ForceHuskMontageFullBody_C");
		return Clss;
	}

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortHuskAnimInstance* K2Node_DynamicCast_AsFort_Husk_Anim_Instance, bool K2Node_DynamicCast_bSuccess);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortHuskAnimInstance* K2Node_DynamicCast_AsFort_Husk_Anim_Instance, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
