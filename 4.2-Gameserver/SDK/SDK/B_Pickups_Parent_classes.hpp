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

// 0x1E9 (0x561 - 0x378)
// BlueprintGeneratedClass B_Pickups_Parent.B_Pickups_Parent_C
class AB_Pickups_Parent_C : public AFortPickupEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       Root;                                              // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        MobileSelectedTL_LerpInteactoIcon_FF208F9641BE589B76EF698B94309EA7; // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MobileSelectedTL_LerpObject_FF208F9641BE589B76EF698B94309EA7; // 0x38C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                MobileSelectedTL__Direction_FF208F9641BE589B76EF698B94309EA7; // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CCB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    MobileSelectedTL;                                  // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Pivot_Offset;                                      // 0x3A0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FRotator                              Rotation_Bias;                                     // 0x3AC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	class UStaticMeshComponent*                  Static_Mesh_Pickup;                                // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Skeletal_Mesh_Pickup;                              // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSkeletalMesh;                                    // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                         Is_a_Backpack;                                     // 0x3C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CCC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   SkeletalOrStaticMeshAssetPrimitive;                // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentElementIndex;                               // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_2CCD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInstanceDynamic*>      MidArray;                                          // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	TArray<class UMaterialInterface*>            CurrentMaterial;                                   // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	TArray<class UMaterialInterface*>            CurrentParentMaterial;                             // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	bool                                         Tossed;                                            // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                         Activate_Rarity_Particle_Systems;                  // 0x411(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	uint8                                        Pad_2CCE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Rarity_Color;                                      // 0x414(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                        Rarity_Level;                                      // 0x424(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<float>                                Sweep_Brightness;                                  // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	TArray<float>                                Sweep_Speed;                                       // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	float                                        Component_Radius__Scaled_;                         // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                        Component_Radius_Multiplier;                       // 0x44C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  Outline_Rarity_Colors;                             // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	float                                        Component_Radius;                                  // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                        Picked_Up_Delay_Before_Glow;                       // 0x464(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                        Picked_Up_Fade_In_Time;                            // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                        Picked_Up_Hold_Time;                               // 0x46C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                        Picked_Up_Fade_Out_Time;                           // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                        Picked_Up_Sweep_Speed;                             // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         IsBluglo;                                          // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CCF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       Picked_Up_Trail_PS;                                // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                Sparkle_Spawn_Rate__Picked_Up_;                    // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	TArray<float>                                Lifetime__Picked_Up_;                              // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	bool                                         IsLootGiftForOthers;                               // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CD0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UForceFeedbackEffect*                  PickupForceFeedback;                               // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Violentium;                                     // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                MIDsNeedingRelease;                                // 0x4C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	TArray<class FString>                        Names_of_Materials_And_Parents_Exempt_from_Repartening; // 0x4D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	float                                        Max_Draw_Distance_Save_the_World;                  // 0x4E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Max_Draw_Distance_Athena;                          // 0x4E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Max_Draw_Distance_Bacchus;                         // 0x4E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasUniqueMaterialIds;                              // 0x4EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	uint8                                        Pad_2CD2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                Sweep_Brightness_Test;                             // 0x4F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	class UParticleSystemComponent*              BackgroundParticleSystem;                          // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  BackgroundRarityColors;                            // 0x508(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	float                                        ViewDistance;                                      // 0x518(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                        Random_Rotation;                                   // 0x51C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                               MobileSelectedOffset;                              // 0x520(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                               MobileSelectedScale;                               // 0x52C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UStaticMeshComponent*                  MobileInteractIcon;                                // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MobileInteractIconLocation;                        // 0x540(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                               MobileInteractIconScale;                           // 0x54C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UMaterialInterface*                    MobileInteractionMaterial;                         // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         PickedUp;                                          // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Pickups_Parent_C");
		return Clss;
	}

	void Initial_Parenting_Setup(const struct FRotator& CallFunc_SelectRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult);
	void Mobile_Interation_Icon_Setup(int32 Temp_int_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, class UMaterialInterface* Temp_object_Variable2, class UMaterialInterface* Temp_object_Variable3, class UMaterialInterface* Temp_object_Variable4, class UMaterialInterface* K2Node_Select_Default);
	void Randomize_Mesh_Rotation_for_BR(const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Set_Draw_Distance(float Temp_float_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, float CallFunc_GetNumericCVar_OutValue, bool CallFunc_GetNumericCVar_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, bool Temp_bool_Variable2, float K2Node_Select_Default, float K2Node_Select1_Default, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select2_Default);
	void SetVisibleMobileInteractIcon(bool Visible, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue);
	void SetActiveBackgroundParticleSystem(bool Active, bool Reset, bool CallFunc_IsValid_ReturnValue);
	void SetInitialHologramParams(class UMaterialInstanceDynamic* Mid, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item1);
	void Unique_Material_MIDs(const TArray<class UMaterialInterface*>& AppendedMaterialsArray, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetupStretchMIDs(const struct FGameplayTagContainer& NewLocalVar_0, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInterface* Temp_object_Variable, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_GetPickupStretchMIDFromPool_bNeedsToBeInitialized, class UMaterialInstanceDynamic* CallFunc_GetPickupStretchMIDFromPool_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item1, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item4, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item5, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetupBaseMIDs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterial* CallFunc_GetBaseMaterial_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetHiddenBackgroundVisualComponents(bool Hidden);
	void DestroyBackgroundVisualComponents();
	void ReleaseStretchMIDs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ScaleHologramTimingsForPvP(float PVP_TimeScale, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue4);
	void SetHologramPickedUpParams(bool Tier_0, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Fraction_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1, float CallFunc_Fraction_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue3);
	void SpawnPickedUpTrailPS(class UParticleSystemComponent* TrailPS, float CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item1, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
	void SetRarityColor(bool CallFunc_IsValid_ReturnValue, enum class EFortRarity Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, int32 Temp_int_Variable4, int32 Temp_int_Variable5, int32 Temp_int_Variable6, int32 Temp_int_Variable7, int32 Temp_int_Variable8, int32 Temp_int_Variable9, const struct FLinearColor& CallFunc_Array_Get_Item, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item1, enum class EFortRarity CallFunc_GetRarity_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, int32 K2Node_Select_Default, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue);
	void UserConstructionScript(const struct FTransform& Temp_struct_Variable, const struct FTransform& Temp_struct_Variable1, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue1, bool Temp_bool_Variable, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, float CallFunc_Multiply_FloatFloat_ReturnValue, class UPrimitiveComponent* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void MobileSelectedTL__FinishedFunc();
	void MobileSelectedTL__UpdateFunc();
	void ReceiveBeginPlay();
	void OnPickedUp();
	void OnAboutToEnterBackpack(class AFortPawn* PickupTarget);
	void ReceiveTick(float DeltaSeconds);
	void OnTossed();
	void ReceiveDestroyed();
	void EnableBacchusHighlight();
	void DisableBacchusHighlight();
	void ExecuteUbergraph_B_Pickups_Parent(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortIngredientItemDefinition* K2Node_DynamicCast_AsFort_Ingredient_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UFortResourceItemDefinition* K2Node_DynamicCast_AsFort_Resource_Item_Definition, bool K2Node_DynamicCast_bSuccess1, class AFortPawn* K2Node_Event_PickupTarget, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess2, float K2Node_Event_DeltaSeconds, bool CallFunc_IsDedicatedServer_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, float Temp_float_Variable, float Temp_float_Variable1, float Temp_float_Variable2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum1_CmpSuccess, enum class ESubGame CallFunc_GetSubGame_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float Temp_float_Variable3, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, int32 Temp_int_Variable, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESubGame Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue1, float K2Node_Select_Default, enum class ESubGame CallFunc_GetSubGame_ReturnValue2, bool K2Node_SwitchEnum2_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
