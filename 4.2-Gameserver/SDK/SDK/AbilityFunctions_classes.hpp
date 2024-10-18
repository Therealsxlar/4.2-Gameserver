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

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass AbilityFunctions.AbilityFunctions_C
class UAbilityFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityFunctions_C");
		return Clss;
	}

	void GetProjectedTeleportLocation(class AActor* Actor, float MovementDistance, class UObject* __WorldContext, struct FVector* TargetLocation, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue2, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	bool ShouldSwordHitsHealRespondToEvent(const struct FGameplayEventData& Payload, class UObject* __WorldContext, bool CallFunc_HasAllTags_ReturnValue, bool CallFunc_HasAllTags_ReturnValue1, bool CallFunc_HasAllTags_ReturnValue2, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2);
	bool ShouldHammerHitsHealRespondToEvent(const struct FGameplayEventData& Payload, class UObject* __WorldContext, bool NewLocalVar_0, bool CallFunc_HasAllTags_ReturnValue, bool CallFunc_HasAllTags_ReturnValue1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void ConvertRangeToTiles(float InRange, class UObject* __WorldContext, float* OutTile, float CallFunc_Divide_FloatFloat_ReturnValue);
	void SetArrayOfHitActors(const struct FGameplayAbilityTargetDataHandle& TargetData, TArray<class AActor*>& ArrayToSet, class UObject* __WorldContext, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void DoNOTUse_BuildArrayOfHitActors(const struct FGameplayAbilityTargetDataHandle& TargetData, class UObject* __WorldContext, TArray<class AActor*>* HitActors, const TArray<class AActor*>& LocalHitActors, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
