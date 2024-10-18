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

// 0xC6 (0xC4E - 0xB88)
// BlueprintGeneratedClass BP_SprayDecal.BP_SprayDecal_C
class ABP_SprayDecal_C : public AFortSprayDecalInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB88(0x8)(Transient, DuplicateTransient)
	class UBoxComponent*                         BouncyBox;                                         // 0xB90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        DecalFadeoutTime;                                  // 0xB98(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3094[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDecalComponent*                       EmissiveDecal;                                     // 0xBA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       StainDecal;                                        // 0xBA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              EmissiveDecalMID;                                  // 0xBB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DecalSize;                                         // 0xBB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3095[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    EmissiveMatSource;                                 // 0xBC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DecalDepth;                                        // 0xBC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3096[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaSprayItemDefinition*            SprayAsset;                                        // 0xBD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        LoadsOutstanding;                                  // 0xBD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3097[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             DecalTextureOverrideSoft;                          // 0xBE0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UTexture2D*                            DecalTextureOverride;                              // 0xC08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BannerPrimaryColor;                                // 0xC10(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BannerSecondaryColor;                              // 0xC20(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 SpawningPlayerController;                          // 0xC30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class AActor*>                        NearbyBuildingActors;                              // 0xC38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        SpawnStartTimeDelay;                               // 0xC48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFrontEndPreview;                                // 0xC4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bDestroyOnTrapPlaced;                              // 0xC4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_SprayDecal_C");
		return Clss;
	}

	void OnRep_DecalFadeoutTime(bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	struct FUniqueNetIdRepl GetInstigatorPlayerId(class AFortPlayerController* TestController, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue);
	void CreateDecalComponents(float CallFunc_GetRealTimeSeconds_ReturnValue, const struct FTransform& Temp_struct_Variable, class UDecalComponent* CallFunc_AddComponent_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_ShouldUseBannerAsTexture_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void UserConstructionScript();
	void OnLoaded_F8AB699B4D8DD22B5A0409B608B7D6FA(class UObject* Loaded);
	void OnLoaded_F925FF00475A018319C73E9FB1540BC6(class UObject* Loaded);
	void ReceiveBeginPlay();
	void OnSprayAssetReplicatedDown();
	void OnSprayInfoReady();
	void StartSprayFadeOutDueToNewPlacement();
	void OnNearbyWallDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnNearbyWallDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnBounceOccurs();
	void OnNearbyTrapPlaced(class ABuildingTrap* Trap, bool bDetatched);
	void ExecuteUbergraph_BP_SprayDecal(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UObject* Temp_object_Variable, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, class UObject* K2Node_CustomEvent_Loaded1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, class AActor* CallFunc_Array_Get_Item, class ABP_SprayDecal_C* K2Node_DynamicCast_AsBP_Spray_Decal, bool K2Node_DynamicCast_bSuccess1, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess2, class ABuildingSMActor* K2Node_DynamicCast_AsBuilding_SMActor, bool K2Node_DynamicCast_bSuccess3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable1, bool CallFunc_HasAuthority_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSoftObjectPtr<class UMaterialInterface> CallFunc_GetDecalMaterial_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UObject* Temp_object_Variable2, TSoftObjectPtr<class UTexture2D> CallFunc_GetDecalTexture_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess4, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_ShouldUseBannerAsTexture_ReturnValue, const struct FHomebaseBannerColor& CallFunc_GetBannerColorFromRowName_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue, const struct FLinearColor& CallFunc_GetSecondaryColor_ReturnValue, const struct FLinearColor& CallFunc_GetPrimaryColor_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, int32 Temp_int_Variable, int32 Temp_int_Variable1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Variable2, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, TArray<class AActor*>& CallFunc_BoxOverlapActors_OutActors, bool CallFunc_BoxOverlapActors_ReturnValue, class AActor* K2Node_CustomEvent_DamagedActor1, float K2Node_CustomEvent_Damage1, class AController* K2Node_CustomEvent_InstigatedBy1, class AActor* K2Node_CustomEvent_DamageCauser1, const struct FVector& K2Node_CustomEvent_HitLocation1, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent1, class FName K2Node_CustomEvent_BoneName1, const struct FVector& K2Node_CustomEvent_Momentum1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AActor* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor1, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_Less_IntInt_ReturnValue1, class ABuildingSMActor* K2Node_DynamicCast_AsBuilding_SMActor1, bool K2Node_DynamicCast_bSuccess6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, int32 K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool CallFunc_HasAuthority_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class ABuildingTrap* K2Node_CustomEvent_Trap, bool K2Node_CustomEvent_bDetatched, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
