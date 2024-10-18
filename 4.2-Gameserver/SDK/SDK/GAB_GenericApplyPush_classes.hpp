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

// 0x28 (0x930 - 0x908)
// BlueprintGeneratedClass GAB_GenericApplyPush.GAB_GenericApplyPush_C
class UGAB_GenericApplyPush_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x908(0x8)(Transient, DuplicateTransient)
	class UAnimMontage*                          PushedMontage;                                     // 0x910(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          PushAsideTag;                                      // 0x918(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Time;                                              // 0x920(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UGA_Constructor_BullRush_C*            GA_BullRush;                                       // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_GenericApplyPush_C");
		return Clss;
	}

	void OnCancelled_569FFD0446FBE214B15C2B8019481F5F();
	void OnInterrupted_569FFD0446FBE214B15C2B8019481F5F();
	void OnBlendOut_569FFD0446FBE214B15C2B8019481F5F();
	void OnCompleted_569FFD0446FBE214B15C2B8019481F5F();
	void EventReceived_7764EAC14FD514E952F78BA2A0CF9ABE(const struct FGameplayEventData& Payload);
	void OnCancelled_8D429E634F6B70CB0A894484CBF629F1();
	void OnInterrupted_8D429E634F6B70CB0A894484CBF629F1();
	void OnBlendOut_8D429E634F6B70CB0A894484CBF629F1();
	void OnCompleted_8D429E634F6B70CB0A894484CBF629F1();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_GenericApplyPush(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayEventData& K2Node_CustomEvent_Payload, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FGameplayEventData& K2Node_Event_EventData, float CallFunc_FClamp_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class UGA_Constructor_BullRush_C* K2Node_DynamicCast_AsGA_Constructor_Bull_Rush, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess1, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, bool CallFunc_IsValid_ReturnValue1, class FName CallFunc_GetAnimationNameForHusk_AnimName, bool CallFunc_IsValid_ReturnValue2, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue1, bool CallFunc_IsValid_ReturnValue3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
