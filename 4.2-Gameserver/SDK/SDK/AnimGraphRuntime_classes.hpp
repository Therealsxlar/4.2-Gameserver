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

// 0x8 (0x360 - 0x358)
// Class AnimGraphRuntime.AnimCustomInstance
class UAnimCustomInstance : public UAnimInstance
{
public:
	uint8                                        Pad_377[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimCustomInstance");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	class FName                                  NotifyName;                                        // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotify_PlayMontageNotify");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	class FName                                  NotifyName;                                        // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotify_PlayMontageNotifyWindow");
		return Clss;
	}

};

// 0x0 (0x360 - 0x360)
// Class AnimGraphRuntime.AnimSequencerInstance
class UAnimSequencerInstance : public UAnimCustomInstance
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimSequencerInstance");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.KismetAnimationLibrary
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KismetAnimationLibrary");
		return Clss;
	}

	void K2_TwoBoneIK(struct FVector& RootPos, struct FVector& JointPos, struct FVector& EndPos, struct FVector& JointTarget, struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
	struct FTransform K2_LookAt(struct FTransform& CurrentTransform, struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree);
};

// 0x80 (0xA8 - 0x28)
// Class AnimGraphRuntime.PlayMontageCallbackProxy
class UPlayMontageCallbackProxy : public UObject
{
public:
	UMulticastDelegateProperty_                  OnCompleted;                                       // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnBlendOut;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInterrupted;                                     // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnNotifyBegin;                                     // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnNotifyEnd;                                       // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayMontageCallbackProxy");
		return Clss;
	}

	void OnNotifyEndReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
