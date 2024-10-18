#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.SetupShadowMeshAssetsAndMaterials
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortCustomPartType     PartType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Shadow_Mesh_Component                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  Character_Body_Part_MID_Array                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UMaterialInstanceDynamic*>Empty_Translucent_Shadow_Stance_Output_MID_Array                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               Set                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Set_                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Ninja_C::SetupShadowMeshAssetsAndMaterials(enum class EFortCustomPartType PartType, class USkeletalMeshComponent*& Shadow_Mesh_Component, TArray<class UMaterialInterface*>& Character_Body_Part_MID_Array, TArray<class UMaterialInstanceDynamic*>& Empty_Translucent_Shadow_Stance_Output_MID_Array, bool* Set, bool Set_, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool Temp_bool_Variable, int32 CallFunc_Array_LastIndex_ReturnValue1, int32 CallFunc_Min_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue2, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "SetupShadowMeshAssetsAndMaterials");

	Params::APlayerPawn_Ninja_C_SetupShadowMeshAssetsAndMaterials_Params Parms;
	Parms.PartType = PartType;
	Parms.Shadow_Mesh_Component = Shadow_Mesh_Component;
	Parms.Character_Body_Part_MID_Array = Character_Body_Part_MID_Array;
	Parms.Empty_Translucent_Shadow_Stance_Output_MID_Array = Empty_Translucent_Shadow_Stance_Output_MID_Array;
	Parms.Set_ = Set_;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_LastIndex_ReturnValue1 = CallFunc_Array_LastIndex_ReturnValue1;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Set != nullptr)
		*Set = Parms.Set;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.CreateAndAttachDuplicateEffectSkeletalMeshes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortCustomPartType     BodyType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      DuplicatedSkeletalMeshComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Material_To_Apply                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>Empty_MID_Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              TranslucentSortPriority                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      K2Node_Select1_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Ninja_C::CreateAndAttachDuplicateEffectSkeletalMeshes(enum class EFortCustomPartType BodyType, class USkeletalMeshComponent*& DuplicatedSkeletalMeshComponent, class UMaterialInterface* Material_To_Apply, TArray<class UMaterialInstanceDynamic*>& Empty_MID_Array, int32 TranslucentSortPriority, int32 CallFunc_Array_LastIndex_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_IsValid_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue2, int32 Temp_int_Variable, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, class USceneComponent* K2Node_Select_Default, class UMaterialInterface* CallFunc_Array_Get_Item1, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable1, bool CallFunc_LessEqual_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, bool Temp_bool_Variable1, class USkeletalMeshComponent* K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "CreateAndAttachDuplicateEffectSkeletalMeshes");

	Params::APlayerPawn_Ninja_C_CreateAndAttachDuplicateEffectSkeletalMeshes_Params Parms;
	Parms.BodyType = BodyType;
	Parms.DuplicatedSkeletalMeshComponent = DuplicatedSkeletalMeshComponent;
	Parms.Material_To_Apply = Material_To_Apply;
	Parms.Empty_MID_Array = Empty_MID_Array;
	Parms.TranslucentSortPriority = TranslucentSortPriority;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue1 = CallFunc_LessEqual_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Ninja_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "UserConstructionScript");

	Params::APlayerPawn_Ninja_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Animate Ninja ShadowStance Dissolve__FinishedFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Ninja_C::Animate_Ninja_ShadowStance_Dissolve__FinishedFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "Animate Ninja ShadowStance Dissolve__FinishedFunc");

	Params::APlayerPawn_Ninja_C_Animate_Ninja_ShadowStance_Dissolve__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Animate Ninja ShadowStance Dissolve__UpdateFunc
// (BlueprintEvent)
// Parameters:

void APlayerPawn_Ninja_C::Animate_Ninja_ShadowStance_Dissolve__UpdateFunc()
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "Animate Ninja ShadowStance Dissolve__UpdateFunc");

	Params::APlayerPawn_Ninja_C_Animate_Ninja_ShadowStance_Dissolve__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Ninja.ShadowStance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void APlayerPawn_Ninja_C::GameplayCue_Abilities_Activation_Ninja_ShadowStance(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "GameplayCue.Abilities.Activation.Ninja.ShadowStance");

	Params::APlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Ninja_ShadowStance_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.DimMak.ActiveFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void APlayerPawn_Ninja_C::GameplayCue_Ninja_DimMak_ActiveFX(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "GameplayCue.Ninja.DimMak.ActiveFX");

	Params::APlayerPawn_Ninja_C_GameplayCue_Ninja_DimMak_ActiveFX_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnWeaponEquipped
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortWeapon*                 NewWeapon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 PrevWeapon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Ninja_C::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "OnWeaponEquipped");

	Params::APlayerPawn_Ninja_C_OnWeaponEquipped_Params Parms;
	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.UpdateWeaponShadowStance
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Ninja_C::UpdateWeaponShadowStance()
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "UpdateWeaponShadowStance");

	Params::APlayerPawn_Ninja_C_UpdateWeaponShadowStance_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.DragonSlashActivatedOrDeactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Ninja_C::DragonSlashActivatedOrDeactivated(bool Active_)
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "DragonSlashActivatedOrDeactivated");

	Params::APlayerPawn_Ninja_C_DragonSlashActivatedOrDeactivated_Params Parms;
	Parms.Active_ = Active_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APlayerPawn_Ninja_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "ReceiveBeginPlay");

	Params::APlayerPawn_Ninja_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Toggle Shadow Stance
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Ninja_C::Toggle_Shadow_Stance()
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "Toggle Shadow Stance");

	Params::APlayerPawn_Ninja_C_Toggle_Shadow_Stance_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnCharacterPartsReinitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void APlayerPawn_Ninja_C::OnCharacterPartsReinitialized()
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "OnCharacterPartsReinitialized");

	Params::APlayerPawn_Ninja_C_OnCharacterPartsReinitialized_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void APlayerPawn_Ninja_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	Params::APlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void APlayerPawn_Ninja_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	Params::APlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.SetMenuScreenClassName
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Ninja_C::SetMenuScreenClassName()
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "SetMenuScreenClassName");

	Params::APlayerPawn_Ninja_C_SetMenuScreenClassName_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.NinjaStarTrails_On
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Ninja_C::NinjaStarTrails_On()
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "NinjaStarTrails_On");

	Params::APlayerPawn_Ninja_C_NinjaStarTrails_On_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.NinjaStarTrails_Off
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Ninja_C::NinjaStarTrails_Off()
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "NinjaStarTrails_Off");

	Params::APlayerPawn_Ninja_C_NinjaStarTrails_Off_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.SetPiercingForFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewPierceValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APlayerPawn_Ninja_C::SetPiercingForFX(bool NewPierceValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "SetPiercingForFX");

	Params::APlayerPawn_Ninja_C_SetPiercingForFX_Params Parms;
	Parms.NewPierceValue = NewPierceValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnLanded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APlayerPawn_Ninja_C::OnLanded(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "OnLanded");

	Params::APlayerPawn_Ninja_C_OnLanded_Params Parms;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.StopEmittingNewSplines
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Ninja_C::StopEmittingNewSplines()
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "StopEmittingNewSplines");

	Params::APlayerPawn_Ninja_C_StopEmittingNewSplines_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnTeleportedClient
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Ninja_C::OnTeleportedClient()
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "OnTeleportedClient");

	Params::APlayerPawn_Ninja_C_OnTeleportedClient_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TailOfDragonEnd
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Ninja_C::TailOfDragonEnd()
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "TailOfDragonEnd");

	Params::APlayerPawn_Ninja_C_TailOfDragonEnd_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TailOfDragonStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AoeCloudTimeToLive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MontageLength                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Ninja_C::TailOfDragonStart(float AoeCloudTimeToLive, float MontageLength)
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "TailOfDragonStart");

	Params::APlayerPawn_Ninja_C_TailOfDragonStart_Params Parms;
	Parms.AoeCloudTimeToLive = AoeCloudTimeToLive;
	Parms.MontageLength = MontageLength;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ExecuteUbergraph_PlayerPawn_Ninja
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInstanceDynamic*>K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_BooleanOR_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue6              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue7              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue8              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue9              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue10             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue3                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue11             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>K2Node_MakeArray_Array4                                          (ZeroConstructor, ReferenceParm)
// class UMaterialInterface*          CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue4                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue5                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue13                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue14                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue7                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Min_ReturnValue6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue13             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue6                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue15                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue7                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue8                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue23                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue24                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue25                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue16                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue17                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue9                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue26                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue27                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue18                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue19                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue20                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue21                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue22                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>K2Node_MakeArray_Array5                                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_LastIndex_ReturnValue23                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue8                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Min_ReturnValue11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue24                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue25                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue10                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue11                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue28                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue29                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue30                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue26                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue31                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue27                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue14             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue13                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue32                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue33                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue15             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue9                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>K2Node_MakeArray_Array6                                          (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue12                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue34                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue16             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue35                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>K2Node_MakeArray_Array7                                          (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue10                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue36                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue37                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue17             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue38                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue39                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue18             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue11                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item6                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable10                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue40                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_Array_Get_Item7                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue41                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select7_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select8_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue6                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue5                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue6                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select9_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue7                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_Array_Get_Item8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue8                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue18                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue19                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable14                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item9                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue9                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue20                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable15                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters3                              (ContainsInstancedReference)
// int32                              K2Node_Select10_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue10                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters2                              (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWeapon*                 K2Node_Event_NewWeapon                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 K2Node_Event_PrevWeapon                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue42                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue43                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item10                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnSameTeam_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Active_                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select11_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue19             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item11                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue21                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item12                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item13                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable16                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue11                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters1                              (ContainsInstancedReference)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters                               (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum3_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item14                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item15                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item16                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue28                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue14                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue12                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue20             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortnite_M_Avg_Player_MenusScreen_AnimBP_C*K2Node_DynamicCast_AsFortnite_M_Avg_Player_Menus_Screen_Anim_BP  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue21             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue22             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue23             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue24             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue25             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue26             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue27             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue28             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue29                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue30                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue29             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGender_IsMale                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetGender_IsFemale                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue31                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue44                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue45                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_NewPierceValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable14                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item17                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue13                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue22                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetupShadowMeshAssetsAndMaterials_Set                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetupShadowMeshAssetsAndMaterials_Set1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetupShadowMeshAssetsAndMaterials_Set2                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetupShadowMeshAssetsAndMaterials_Set3                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetupShadowMeshAssetsAndMaterials_Set4                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetupShadowMeshAssetsAndMaterials_Set5                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item18                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item19                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select13_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item20                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue13                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select14_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue14                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              Temp_int_Variable15                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item21                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue15                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue23                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue46                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable16                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item22                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue47                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue16                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue24                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue48                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SplineVolumeTrail_v1b_C* CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_AoeCloudTimeToLive                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_MontageLength                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Ninja_C::ExecuteUbergraph_PlayerPawn_Ninja(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array, bool CallFunc_BooleanOR_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue1, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array1, bool CallFunc_BooleanOR_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4, int32 Temp_int_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue5, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_IsValid_ReturnValue6, int32 CallFunc_Array_LastIndex_ReturnValue1, bool CallFunc_IsValid_ReturnValue7, bool CallFunc_BooleanOR_ReturnValue3, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue4, int32 Temp_int_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Variable3, int32 CallFunc_Add_IntInt_ReturnValue3, int32 Temp_int_Variable4, int32 Temp_int_Variable5, int32 CallFunc_Add_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue5, bool Temp_bool_Variable, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array2, bool CallFunc_BooleanOR_ReturnValue5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue6, int32 CallFunc_Array_Add_ReturnValue4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue9, int32 CallFunc_Array_Add_ReturnValue5, int32 Temp_int_Variable6, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array3, int32 CallFunc_Add_IntInt_ReturnValue6, bool CallFunc_BooleanOR_ReturnValue6, int32 Temp_int_Variable7, int32 CallFunc_Add_IntInt_ReturnValue7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue10, int32 CallFunc_Array_Add_ReturnValue6, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue1, bool CallFunc_IsValid_ReturnValue8, bool CallFunc_IsValid_ReturnValue9, bool CallFunc_IsValid_ReturnValue10, bool CallFunc_IsValid_ReturnValue11, int32 CallFunc_Array_LastIndex_ReturnValue2, int32 CallFunc_Array_LastIndex_ReturnValue3, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue2, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue3, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsValid_ReturnValue13, bool CallFunc_IsValid_ReturnValue14, bool CallFunc_IsValid_ReturnValue15, int32 CallFunc_Array_LastIndex_ReturnValue4, int32 CallFunc_Array_LastIndex_ReturnValue5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue11, int32 CallFunc_Array_Add_ReturnValue7, int32 CallFunc_Array_LastIndex_ReturnValue6, int32 CallFunc_Array_LastIndex_ReturnValue7, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Min_ReturnValue1, int32 CallFunc_Array_LastIndex_ReturnValue8, int32 CallFunc_Array_LastIndex_ReturnValue9, int32 CallFunc_Min_ReturnValue2, int32 CallFunc_Min_ReturnValue3, int32 CallFunc_Array_LastIndex_ReturnValue10, int32 CallFunc_Min_ReturnValue4, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue11, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array4, class UMaterialInterface* CallFunc_Array_Get_Item1, int32 CallFunc_Array_LastIndex_ReturnValue12, bool Temp_bool_Variable1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue4, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue5, bool CallFunc_IsValid_ReturnValue16, bool CallFunc_IsValid_ReturnValue17, int32 CallFunc_Array_LastIndex_ReturnValue13, int32 CallFunc_Min_ReturnValue5, bool CallFunc_IsValid_ReturnValue18, bool CallFunc_IsValid_ReturnValue19, int32 CallFunc_Array_LastIndex_ReturnValue14, bool CallFunc_BooleanOR_ReturnValue7, int32 CallFunc_Min_ReturnValue6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue8, int32 CallFunc_Add_IntInt_ReturnValue8, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue13, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Array_Add_ReturnValue9, int32 CallFunc_Add_IntInt_ReturnValue9, int32 Temp_int_Array_Index_Variable1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue6, bool CallFunc_IsValid_ReturnValue20, bool CallFunc_IsValid_ReturnValue21, int32 CallFunc_Array_LastIndex_ReturnValue15, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue7, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue8, bool CallFunc_IsValid_ReturnValue22, bool CallFunc_IsValid_ReturnValue23, bool CallFunc_IsValid_ReturnValue24, bool CallFunc_IsValid_ReturnValue25, int32 CallFunc_Array_LastIndex_ReturnValue16, int32 CallFunc_Array_LastIndex_ReturnValue17, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue9, int32 Temp_int_Variable8, bool CallFunc_IsValid_ReturnValue26, class UMaterialInterface* CallFunc_Array_Get_Item2, int32 CallFunc_Add_IntInt_ReturnValue10, bool CallFunc_IsValid_ReturnValue27, int32 CallFunc_Array_LastIndex_ReturnValue18, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item3, class UMaterialInterface* CallFunc_Array_Get_Item4, int32 CallFunc_Array_LastIndex_ReturnValue19, int32 CallFunc_Array_LastIndex_ReturnValue20, int32 CallFunc_Min_ReturnValue7, int32 CallFunc_Min_ReturnValue8, int32 CallFunc_Array_LastIndex_ReturnValue21, int32 CallFunc_Array_LastIndex_ReturnValue22, int32 CallFunc_Min_ReturnValue9, int32 CallFunc_Min_ReturnValue10, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array5, int32 CallFunc_Array_LastIndex_ReturnValue23, bool CallFunc_BooleanOR_ReturnValue8, int32 CallFunc_Min_ReturnValue11, int32 CallFunc_Array_LastIndex_ReturnValue24, class UMaterialInterface* CallFunc_Array_Get_Item5, int32 CallFunc_Array_LastIndex_ReturnValue25, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue10, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue11, bool CallFunc_IsValid_ReturnValue28, bool CallFunc_IsValid_ReturnValue29, bool CallFunc_IsValid_ReturnValue30, int32 CallFunc_Array_LastIndex_ReturnValue26, int32 CallFunc_Min_ReturnValue12, bool CallFunc_IsValid_ReturnValue31, int32 CallFunc_Array_LastIndex_ReturnValue27, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue14, int32 CallFunc_Min_ReturnValue13, int32 CallFunc_Array_Add_ReturnValue10, bool Temp_bool_Variable3, bool CallFunc_IsValid_ReturnValue32, bool CallFunc_IsValid_ReturnValue33, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue15, int32 CallFunc_Array_Add_ReturnValue11, bool CallFunc_BooleanOR_ReturnValue9, float CallFunc_MakeLiteralFloat_ReturnValue, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array6, bool CallFunc_IsDedicatedServer_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue12, bool CallFunc_IsValid_ReturnValue34, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue16, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue12, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue13, int32 CallFunc_Array_Add_ReturnValue14, int32 CallFunc_GetNumMaterials_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_IsValid_ReturnValue35, bool CallFunc_LessEqual_IntInt_ReturnValue1, bool Temp_bool_Variable4, int32 Temp_int_Loop_Counter_Variable2, int32 K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue11, int32 Temp_int_Array_Index_Variable2, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array7, int32 Temp_int_Loop_Counter_Variable3, int32 CallFunc_Add_IntInt_ReturnValue12, int32 Temp_int_Array_Index_Variable3, bool CallFunc_BooleanOR_ReturnValue10, bool Temp_bool_Variable5, int32 K2Node_Select1_Default, bool CallFunc_IsValid_ReturnValue36, bool CallFunc_LessEqual_IntInt_ReturnValue2, bool Temp_bool_Variable6, bool CallFunc_IsValid_ReturnValue37, int32 K2Node_Select2_Default, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue17, bool CallFunc_LessEqual_IntInt_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue15, bool Temp_bool_Variable7, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue38, bool CallFunc_IsValid_ReturnValue39, bool Temp_bool_Variable8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue18, int32 K2Node_Select3_Default, int32 CallFunc_Array_Add_ReturnValue16, bool CallFunc_BooleanOR_ReturnValue11, int32 Temp_int_Loop_Counter_Variable4, int32 CallFunc_Add_IntInt_ReturnValue13, int32 K2Node_Select4_Default, int32 Temp_int_Array_Index_Variable4, int32 Temp_int_Variable9, bool Temp_bool_Variable9, int32 K2Node_Select5_Default, class UMaterialInterface* CallFunc_Array_Get_Item6, int32 CallFunc_Add_IntInt_ReturnValue14, int32 Temp_int_Variable10, bool CallFunc_IsValid_ReturnValue40, class UMaterialInterface* CallFunc_Array_Get_Item7, bool CallFunc_LessEqual_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue15, int32 Temp_int_Loop_Counter_Variable5, bool CallFunc_IsValid_ReturnValue41, int32 CallFunc_Add_IntInt_ReturnValue16, int32 Temp_int_Array_Index_Variable5, bool Temp_bool_Variable10, int32 K2Node_Select6_Default, bool CallFunc_IsDedicatedServer_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue3, bool Temp_bool_Variable11, bool CallFunc_IsDedicatedServer_ReturnValue4, int32 K2Node_Select7_Default, bool CallFunc_LessEqual_IntInt_ReturnValue5, bool Temp_bool_Variable12, int32 K2Node_Select8_Default, bool CallFunc_LessEqual_IntInt_ReturnValue6, bool CallFunc_IsDedicatedServer_ReturnValue5, bool CallFunc_IsDedicatedServer_ReturnValue6, bool Temp_bool_Variable13, int32 Temp_int_Variable11, int32 K2Node_Select9_Default, bool CallFunc_LessEqual_IntInt_ReturnValue7, class UMaterialInterface* CallFunc_Array_Get_Item8, bool CallFunc_LessEqual_IntInt_ReturnValue8, int32 CallFunc_Add_IntInt_ReturnValue17, int32 Temp_int_Loop_Counter_Variable6, int32 CallFunc_Add_IntInt_ReturnValue18, int32 Temp_int_Array_Index_Variable6, int32 Temp_int_Loop_Counter_Variable7, int32 CallFunc_Add_IntInt_ReturnValue19, int32 Temp_int_Array_Index_Variable7, bool Temp_bool_Variable14, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Variable12, class UMaterialInterface* CallFunc_Array_Get_Item9, bool CallFunc_LessEqual_IntInt_ReturnValue9, int32 CallFunc_Add_IntInt_ReturnValue20, bool Temp_bool_Variable15, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType3, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters3, int32 K2Node_Select10_Default, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue10, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType2, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters2, bool K2Node_SwitchEnum1_CmpSuccess, class AFortWeapon* K2Node_Event_NewWeapon, class AFortWeapon* K2Node_Event_PrevWeapon, int32 CallFunc_Array_Add_ReturnValue17, bool CallFunc_IsValid_ReturnValue42, int32 CallFunc_GetNumMaterials_ReturnValue2, bool CallFunc_IsValid_ReturnValue43, int32 CallFunc_Subtract_IntInt_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue18, int32 CallFunc_Array_Add_ReturnValue19, int32 CallFunc_Array_Add_ReturnValue20, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item10, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_OnSameTeam_ReturnValue, bool K2Node_CustomEvent_Active_, class UMaterialInterface* K2Node_Select11_Default, bool CallFunc_Not_PreBool_ReturnValue1, int32 Temp_int_Variable13, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue19, class UMaterialInterface* CallFunc_Array_Get_Item11, int32 CallFunc_Add_IntInt_ReturnValue21, class UMaterialInterface* CallFunc_Array_Get_Item12, class UMaterialInterface* CallFunc_Array_Get_Item13, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue2, bool Temp_bool_Variable16, int32 K2Node_Select12_Default, bool CallFunc_LessEqual_IntInt_ReturnValue11, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType1, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters1, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum2_CmpSuccess, bool K2Node_SwitchEnum3_CmpSuccess, class FName Temp_name_Variable, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item14, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item15, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_Less_IntInt_ReturnValue4, int32 CallFunc_Array_Add_ReturnValue21, class UMaterialInterface* CallFunc_Array_Get_Item16, int32 CallFunc_Array_LastIndex_ReturnValue28, int32 CallFunc_Min_ReturnValue14, bool CallFunc_LessEqual_IntInt_ReturnValue12, int32 CallFunc_Array_Length_ReturnValue5, bool CallFunc_Greater_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue20, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue22, class UFortnite_M_Avg_Player_MenusScreen_AnimBP_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Menus_Screen_Anim_BP, bool K2Node_DynamicCast_bSuccess1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue21, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue22, int32 CallFunc_Array_Add_ReturnValue23, int32 CallFunc_Array_Add_ReturnValue24, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue23, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue24, int32 CallFunc_Array_Add_ReturnValue25, int32 CallFunc_Array_Add_ReturnValue26, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue25, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue26, int32 CallFunc_Array_Add_ReturnValue27, int32 CallFunc_Array_Add_ReturnValue28, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue27, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue28, int32 CallFunc_Array_Add_ReturnValue29, int32 CallFunc_Array_Add_ReturnValue30, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue29, bool CallFunc_GetGender_IsMale, bool CallFunc_GetGender_IsFemale, int32 CallFunc_Array_Add_ReturnValue31, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, bool CallFunc_IsValid_ReturnValue44, bool CallFunc_IsValid_ReturnValue45, bool K2Node_CustomEvent_NewPierceValue, int32 Temp_int_Variable14, class UMaterialInterface* CallFunc_Array_Get_Item17, bool CallFunc_LessEqual_IntInt_ReturnValue13, int32 CallFunc_Add_IntInt_ReturnValue22, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_SetupShadowMeshAssetsAndMaterials_Set, bool CallFunc_SetupShadowMeshAssetsAndMaterials_Set1, bool CallFunc_SetupShadowMeshAssetsAndMaterials_Set2, bool CallFunc_SetupShadowMeshAssetsAndMaterials_Set3, bool CallFunc_SetupShadowMeshAssetsAndMaterials_Set4, bool CallFunc_SetupShadowMeshAssetsAndMaterials_Set5, class USkeletalMeshComponent* CallFunc_Array_Get_Item18, int32 CallFunc_Array_Length_ReturnValue6, bool CallFunc_Less_IntInt_ReturnValue5, bool CallFunc_BooleanOR_ReturnValue12, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item19, int32 K2Node_Select13_Default, int32 CallFunc_Array_Length_ReturnValue7, bool CallFunc_Less_IntInt_ReturnValue6, class USkeletalMeshComponent* CallFunc_Array_Get_Item20, int32 CallFunc_Array_Length_ReturnValue8, bool CallFunc_Less_IntInt_ReturnValue7, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue13, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 K2Node_Select14_Default, bool CallFunc_LessEqual_IntInt_ReturnValue14, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, const struct FHitResult& K2Node_Event_Hit, int32 Temp_int_Variable15, class UMaterialInterface* CallFunc_Array_Get_Item21, bool CallFunc_LessEqual_IntInt_ReturnValue15, int32 CallFunc_Add_IntInt_ReturnValue23, bool CallFunc_IsValid_ReturnValue46, int32 Temp_int_Variable16, class UMaterialInterface* CallFunc_Array_Get_Item22, bool CallFunc_IsValid_ReturnValue47, bool CallFunc_LessEqual_IntInt_ReturnValue16, int32 CallFunc_Add_IntInt_ReturnValue24, bool CallFunc_IsValid_ReturnValue48, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_SplineVolumeTrail_v1b_C* CallFunc_FinishSpawningActor_ReturnValue, float K2Node_CustomEvent_AoeCloudTimeToLive, float K2Node_CustomEvent_MontageLength, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerPawn_Ninja_C", "ExecuteUbergraph_PlayerPawn_Ninja");

	Params::APlayerPawn_Ninja_C_ExecuteUbergraph_PlayerPawn_Ninja_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue4;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue5 = CallFunc_CreateDynamicMaterialInstance_ReturnValue5;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_Array_LastIndex_ReturnValue1 = CallFunc_Array_LastIndex_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue4;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.CallFunc_Add_IntInt_ReturnValue5 = CallFunc_Add_IntInt_ReturnValue5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_BooleanOR_ReturnValue5 = CallFunc_BooleanOR_ReturnValue5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue6 = CallFunc_CreateDynamicMaterialInstance_ReturnValue6;
	Parms.CallFunc_Array_Add_ReturnValue4 = CallFunc_Array_Add_ReturnValue4;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue7 = CallFunc_CreateDynamicMaterialInstance_ReturnValue7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue8 = CallFunc_CreateDynamicMaterialInstance_ReturnValue8;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue9 = CallFunc_CreateDynamicMaterialInstance_ReturnValue9;
	Parms.CallFunc_Array_Add_ReturnValue5 = CallFunc_Array_Add_ReturnValue5;
	Parms.Temp_int_Variable6 = Temp_int_Variable6;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.CallFunc_Add_IntInt_ReturnValue6 = CallFunc_Add_IntInt_ReturnValue6;
	Parms.CallFunc_BooleanOR_ReturnValue6 = CallFunc_BooleanOR_ReturnValue6;
	Parms.Temp_int_Variable7 = Temp_int_Variable7;
	Parms.CallFunc_Add_IntInt_ReturnValue7 = CallFunc_Add_IntInt_ReturnValue7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue10 = CallFunc_CreateDynamicMaterialInstance_ReturnValue10;
	Parms.CallFunc_Array_Add_ReturnValue6 = CallFunc_Array_Add_ReturnValue6;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue1 = CallFunc_GetSkeletalMeshForPartType_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;
	Parms.CallFunc_IsValid_ReturnValue9 = CallFunc_IsValid_ReturnValue9;
	Parms.CallFunc_IsValid_ReturnValue10 = CallFunc_IsValid_ReturnValue10;
	Parms.CallFunc_IsValid_ReturnValue11 = CallFunc_IsValid_ReturnValue11;
	Parms.CallFunc_Array_LastIndex_ReturnValue2 = CallFunc_Array_LastIndex_ReturnValue2;
	Parms.CallFunc_Array_LastIndex_ReturnValue3 = CallFunc_Array_LastIndex_ReturnValue3;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue2 = CallFunc_GetSkeletalMeshForPartType_ReturnValue2;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue3 = CallFunc_GetSkeletalMeshForPartType_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;
	Parms.CallFunc_IsValid_ReturnValue13 = CallFunc_IsValid_ReturnValue13;
	Parms.CallFunc_IsValid_ReturnValue14 = CallFunc_IsValid_ReturnValue14;
	Parms.CallFunc_IsValid_ReturnValue15 = CallFunc_IsValid_ReturnValue15;
	Parms.CallFunc_Array_LastIndex_ReturnValue4 = CallFunc_Array_LastIndex_ReturnValue4;
	Parms.CallFunc_Array_LastIndex_ReturnValue5 = CallFunc_Array_LastIndex_ReturnValue5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue11 = CallFunc_CreateDynamicMaterialInstance_ReturnValue11;
	Parms.CallFunc_Array_Add_ReturnValue7 = CallFunc_Array_Add_ReturnValue7;
	Parms.CallFunc_Array_LastIndex_ReturnValue6 = CallFunc_Array_LastIndex_ReturnValue6;
	Parms.CallFunc_Array_LastIndex_ReturnValue7 = CallFunc_Array_LastIndex_ReturnValue7;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Min_ReturnValue1 = CallFunc_Min_ReturnValue1;
	Parms.CallFunc_Array_LastIndex_ReturnValue8 = CallFunc_Array_LastIndex_ReturnValue8;
	Parms.CallFunc_Array_LastIndex_ReturnValue9 = CallFunc_Array_LastIndex_ReturnValue9;
	Parms.CallFunc_Min_ReturnValue2 = CallFunc_Min_ReturnValue2;
	Parms.CallFunc_Min_ReturnValue3 = CallFunc_Min_ReturnValue3;
	Parms.CallFunc_Array_LastIndex_ReturnValue10 = CallFunc_Array_LastIndex_ReturnValue10;
	Parms.CallFunc_Min_ReturnValue4 = CallFunc_Min_ReturnValue4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_LastIndex_ReturnValue11 = CallFunc_Array_LastIndex_ReturnValue11;
	Parms.K2Node_MakeArray_Array4 = K2Node_MakeArray_Array4;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_LastIndex_ReturnValue12 = CallFunc_Array_LastIndex_ReturnValue12;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue4 = CallFunc_GetSkeletalMeshForPartType_ReturnValue4;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue5 = CallFunc_GetSkeletalMeshForPartType_ReturnValue5;
	Parms.CallFunc_IsValid_ReturnValue16 = CallFunc_IsValid_ReturnValue16;
	Parms.CallFunc_IsValid_ReturnValue17 = CallFunc_IsValid_ReturnValue17;
	Parms.CallFunc_Array_LastIndex_ReturnValue13 = CallFunc_Array_LastIndex_ReturnValue13;
	Parms.CallFunc_Min_ReturnValue5 = CallFunc_Min_ReturnValue5;
	Parms.CallFunc_IsValid_ReturnValue18 = CallFunc_IsValid_ReturnValue18;
	Parms.CallFunc_IsValid_ReturnValue19 = CallFunc_IsValid_ReturnValue19;
	Parms.CallFunc_Array_LastIndex_ReturnValue14 = CallFunc_Array_LastIndex_ReturnValue14;
	Parms.CallFunc_BooleanOR_ReturnValue7 = CallFunc_BooleanOR_ReturnValue7;
	Parms.CallFunc_Min_ReturnValue6 = CallFunc_Min_ReturnValue6;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Add_ReturnValue8 = CallFunc_Array_Add_ReturnValue8;
	Parms.CallFunc_Add_IntInt_ReturnValue8 = CallFunc_Add_IntInt_ReturnValue8;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue13 = CallFunc_CreateDynamicMaterialInstance_ReturnValue13;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Array_Add_ReturnValue9 = CallFunc_Array_Add_ReturnValue9;
	Parms.CallFunc_Add_IntInt_ReturnValue9 = CallFunc_Add_IntInt_ReturnValue9;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue6 = CallFunc_GetSkeletalMeshForPartType_ReturnValue6;
	Parms.CallFunc_IsValid_ReturnValue20 = CallFunc_IsValid_ReturnValue20;
	Parms.CallFunc_IsValid_ReturnValue21 = CallFunc_IsValid_ReturnValue21;
	Parms.CallFunc_Array_LastIndex_ReturnValue15 = CallFunc_Array_LastIndex_ReturnValue15;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue7 = CallFunc_GetSkeletalMeshForPartType_ReturnValue7;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue8 = CallFunc_GetSkeletalMeshForPartType_ReturnValue8;
	Parms.CallFunc_IsValid_ReturnValue22 = CallFunc_IsValid_ReturnValue22;
	Parms.CallFunc_IsValid_ReturnValue23 = CallFunc_IsValid_ReturnValue23;
	Parms.CallFunc_IsValid_ReturnValue24 = CallFunc_IsValid_ReturnValue24;
	Parms.CallFunc_IsValid_ReturnValue25 = CallFunc_IsValid_ReturnValue25;
	Parms.CallFunc_Array_LastIndex_ReturnValue16 = CallFunc_Array_LastIndex_ReturnValue16;
	Parms.CallFunc_Array_LastIndex_ReturnValue17 = CallFunc_Array_LastIndex_ReturnValue17;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue9 = CallFunc_GetSkeletalMeshForPartType_ReturnValue9;
	Parms.Temp_int_Variable8 = Temp_int_Variable8;
	Parms.CallFunc_IsValid_ReturnValue26 = CallFunc_IsValid_ReturnValue26;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Add_IntInt_ReturnValue10 = CallFunc_Add_IntInt_ReturnValue10;
	Parms.CallFunc_IsValid_ReturnValue27 = CallFunc_IsValid_ReturnValue27;
	Parms.CallFunc_Array_LastIndex_ReturnValue18 = CallFunc_Array_LastIndex_ReturnValue18;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_Array_LastIndex_ReturnValue19 = CallFunc_Array_LastIndex_ReturnValue19;
	Parms.CallFunc_Array_LastIndex_ReturnValue20 = CallFunc_Array_LastIndex_ReturnValue20;
	Parms.CallFunc_Min_ReturnValue7 = CallFunc_Min_ReturnValue7;
	Parms.CallFunc_Min_ReturnValue8 = CallFunc_Min_ReturnValue8;
	Parms.CallFunc_Array_LastIndex_ReturnValue21 = CallFunc_Array_LastIndex_ReturnValue21;
	Parms.CallFunc_Array_LastIndex_ReturnValue22 = CallFunc_Array_LastIndex_ReturnValue22;
	Parms.CallFunc_Min_ReturnValue9 = CallFunc_Min_ReturnValue9;
	Parms.CallFunc_Min_ReturnValue10 = CallFunc_Min_ReturnValue10;
	Parms.K2Node_MakeArray_Array5 = K2Node_MakeArray_Array5;
	Parms.CallFunc_Array_LastIndex_ReturnValue23 = CallFunc_Array_LastIndex_ReturnValue23;
	Parms.CallFunc_BooleanOR_ReturnValue8 = CallFunc_BooleanOR_ReturnValue8;
	Parms.CallFunc_Min_ReturnValue11 = CallFunc_Min_ReturnValue11;
	Parms.CallFunc_Array_LastIndex_ReturnValue24 = CallFunc_Array_LastIndex_ReturnValue24;
	Parms.CallFunc_Array_Get_Item5 = CallFunc_Array_Get_Item5;
	Parms.CallFunc_Array_LastIndex_ReturnValue25 = CallFunc_Array_LastIndex_ReturnValue25;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue10 = CallFunc_GetSkeletalMeshForPartType_ReturnValue10;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue11 = CallFunc_GetSkeletalMeshForPartType_ReturnValue11;
	Parms.CallFunc_IsValid_ReturnValue28 = CallFunc_IsValid_ReturnValue28;
	Parms.CallFunc_IsValid_ReturnValue29 = CallFunc_IsValid_ReturnValue29;
	Parms.CallFunc_IsValid_ReturnValue30 = CallFunc_IsValid_ReturnValue30;
	Parms.CallFunc_Array_LastIndex_ReturnValue26 = CallFunc_Array_LastIndex_ReturnValue26;
	Parms.CallFunc_Min_ReturnValue12 = CallFunc_Min_ReturnValue12;
	Parms.CallFunc_IsValid_ReturnValue31 = CallFunc_IsValid_ReturnValue31;
	Parms.CallFunc_Array_LastIndex_ReturnValue27 = CallFunc_Array_LastIndex_ReturnValue27;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue14 = CallFunc_CreateDynamicMaterialInstance_ReturnValue14;
	Parms.CallFunc_Min_ReturnValue13 = CallFunc_Min_ReturnValue13;
	Parms.CallFunc_Array_Add_ReturnValue10 = CallFunc_Array_Add_ReturnValue10;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_IsValid_ReturnValue32 = CallFunc_IsValid_ReturnValue32;
	Parms.CallFunc_IsValid_ReturnValue33 = CallFunc_IsValid_ReturnValue33;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue15 = CallFunc_CreateDynamicMaterialInstance_ReturnValue15;
	Parms.CallFunc_Array_Add_ReturnValue11 = CallFunc_Array_Add_ReturnValue11;
	Parms.CallFunc_BooleanOR_ReturnValue9 = CallFunc_BooleanOR_ReturnValue9;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array6 = K2Node_MakeArray_Array6;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue12 = CallFunc_GetSkeletalMeshForPartType_ReturnValue12;
	Parms.CallFunc_IsValid_ReturnValue34 = CallFunc_IsValid_ReturnValue34;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue16 = CallFunc_CreateDynamicMaterialInstance_ReturnValue16;
	Parms.CallFunc_GetMaterial_ReturnValue1 = CallFunc_GetMaterial_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue12 = CallFunc_Array_Add_ReturnValue12;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue13 = CallFunc_Array_Add_ReturnValue13;
	Parms.CallFunc_Array_Add_ReturnValue14 = CallFunc_Array_Add_ReturnValue14;
	Parms.CallFunc_GetNumMaterials_ReturnValue1 = CallFunc_GetNumMaterials_ReturnValue1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue1 = CallFunc_Subtract_IntInt_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue35 = CallFunc_IsValid_ReturnValue35;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue1 = CallFunc_LessEqual_IntInt_ReturnValue1;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue11 = CallFunc_Add_IntInt_ReturnValue11;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.K2Node_MakeArray_Array7 = K2Node_MakeArray_Array7;
	Parms.Temp_int_Loop_Counter_Variable3 = Temp_int_Loop_Counter_Variable3;
	Parms.CallFunc_Add_IntInt_ReturnValue12 = CallFunc_Add_IntInt_ReturnValue12;
	Parms.Temp_int_Array_Index_Variable3 = Temp_int_Array_Index_Variable3;
	Parms.CallFunc_BooleanOR_ReturnValue10 = CallFunc_BooleanOR_ReturnValue10;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_IsValid_ReturnValue36 = CallFunc_IsValid_ReturnValue36;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.CallFunc_IsValid_ReturnValue37 = CallFunc_IsValid_ReturnValue37;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue17 = CallFunc_CreateDynamicMaterialInstance_ReturnValue17;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue3 = CallFunc_LessEqual_IntInt_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue15 = CallFunc_Array_Add_ReturnValue15;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue38 = CallFunc_IsValid_ReturnValue38;
	Parms.CallFunc_IsValid_ReturnValue39 = CallFunc_IsValid_ReturnValue39;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue18 = CallFunc_CreateDynamicMaterialInstance_ReturnValue18;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_Array_Add_ReturnValue16 = CallFunc_Array_Add_ReturnValue16;
	Parms.CallFunc_BooleanOR_ReturnValue11 = CallFunc_BooleanOR_ReturnValue11;
	Parms.Temp_int_Loop_Counter_Variable4 = Temp_int_Loop_Counter_Variable4;
	Parms.CallFunc_Add_IntInt_ReturnValue13 = CallFunc_Add_IntInt_ReturnValue13;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.Temp_int_Array_Index_Variable4 = Temp_int_Array_Index_Variable4;
	Parms.Temp_int_Variable9 = Temp_int_Variable9;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.CallFunc_Array_Get_Item6 = CallFunc_Array_Get_Item6;
	Parms.CallFunc_Add_IntInt_ReturnValue14 = CallFunc_Add_IntInt_ReturnValue14;
	Parms.Temp_int_Variable10 = Temp_int_Variable10;
	Parms.CallFunc_IsValid_ReturnValue40 = CallFunc_IsValid_ReturnValue40;
	Parms.CallFunc_Array_Get_Item7 = CallFunc_Array_Get_Item7;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue4 = CallFunc_LessEqual_IntInt_ReturnValue4;
	Parms.CallFunc_Add_IntInt_ReturnValue15 = CallFunc_Add_IntInt_ReturnValue15;
	Parms.Temp_int_Loop_Counter_Variable5 = Temp_int_Loop_Counter_Variable5;
	Parms.CallFunc_IsValid_ReturnValue41 = CallFunc_IsValid_ReturnValue41;
	Parms.CallFunc_Add_IntInt_ReturnValue16 = CallFunc_Add_IntInt_ReturnValue16;
	Parms.Temp_int_Array_Index_Variable5 = Temp_int_Array_Index_Variable5;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.CallFunc_IsDedicatedServer_ReturnValue1 = CallFunc_IsDedicatedServer_ReturnValue1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue2 = CallFunc_IsDedicatedServer_ReturnValue2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue3 = CallFunc_IsDedicatedServer_ReturnValue3;
	Parms.Temp_bool_Variable11 = Temp_bool_Variable11;
	Parms.CallFunc_IsDedicatedServer_ReturnValue4 = CallFunc_IsDedicatedServer_ReturnValue4;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue5 = CallFunc_LessEqual_IntInt_ReturnValue5;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue6 = CallFunc_LessEqual_IntInt_ReturnValue6;
	Parms.CallFunc_IsDedicatedServer_ReturnValue5 = CallFunc_IsDedicatedServer_ReturnValue5;
	Parms.CallFunc_IsDedicatedServer_ReturnValue6 = CallFunc_IsDedicatedServer_ReturnValue6;
	Parms.Temp_bool_Variable13 = Temp_bool_Variable13;
	Parms.Temp_int_Variable11 = Temp_int_Variable11;
	Parms.K2Node_Select9_Default = K2Node_Select9_Default;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue7 = CallFunc_LessEqual_IntInt_ReturnValue7;
	Parms.CallFunc_Array_Get_Item8 = CallFunc_Array_Get_Item8;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue8 = CallFunc_LessEqual_IntInt_ReturnValue8;
	Parms.CallFunc_Add_IntInt_ReturnValue17 = CallFunc_Add_IntInt_ReturnValue17;
	Parms.Temp_int_Loop_Counter_Variable6 = Temp_int_Loop_Counter_Variable6;
	Parms.CallFunc_Add_IntInt_ReturnValue18 = CallFunc_Add_IntInt_ReturnValue18;
	Parms.Temp_int_Array_Index_Variable6 = Temp_int_Array_Index_Variable6;
	Parms.Temp_int_Loop_Counter_Variable7 = Temp_int_Loop_Counter_Variable7;
	Parms.CallFunc_Add_IntInt_ReturnValue19 = CallFunc_Add_IntInt_ReturnValue19;
	Parms.Temp_int_Array_Index_Variable7 = Temp_int_Array_Index_Variable7;
	Parms.Temp_bool_Variable14 = Temp_bool_Variable14;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Variable12 = Temp_int_Variable12;
	Parms.CallFunc_Array_Get_Item9 = CallFunc_Array_Get_Item9;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue9 = CallFunc_LessEqual_IntInt_ReturnValue9;
	Parms.CallFunc_Add_IntInt_ReturnValue20 = CallFunc_Add_IntInt_ReturnValue20;
	Parms.Temp_bool_Variable15 = Temp_bool_Variable15;
	Parms.K2Node_GameplayCueEvent_EventType3 = K2Node_GameplayCueEvent_EventType3;
	Parms.K2Node_GameplayCueEvent_Parameters3 = K2Node_GameplayCueEvent_Parameters3;
	Parms.K2Node_Select10_Default = K2Node_Select10_Default;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue10 = CallFunc_LessEqual_IntInt_ReturnValue10;
	Parms.K2Node_GameplayCueEvent_EventType2 = K2Node_GameplayCueEvent_EventType2;
	Parms.K2Node_GameplayCueEvent_Parameters2 = K2Node_GameplayCueEvent_Parameters2;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.K2Node_Event_NewWeapon = K2Node_Event_NewWeapon;
	Parms.K2Node_Event_PrevWeapon = K2Node_Event_PrevWeapon;
	Parms.CallFunc_Array_Add_ReturnValue17 = CallFunc_Array_Add_ReturnValue17;
	Parms.CallFunc_IsValid_ReturnValue42 = CallFunc_IsValid_ReturnValue42;
	Parms.CallFunc_GetNumMaterials_ReturnValue2 = CallFunc_GetNumMaterials_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue43 = CallFunc_IsValid_ReturnValue43;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue18 = CallFunc_Array_Add_ReturnValue18;
	Parms.CallFunc_Array_Add_ReturnValue19 = CallFunc_Array_Add_ReturnValue19;
	Parms.CallFunc_Array_Add_ReturnValue20 = CallFunc_Array_Add_ReturnValue20;
	Parms.CallFunc_Array_Get_Item10 = CallFunc_Array_Get_Item10;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_OnSameTeam_ReturnValue = CallFunc_OnSameTeam_ReturnValue;
	Parms.K2Node_CustomEvent_Active_ = K2Node_CustomEvent_Active_;
	Parms.K2Node_Select11_Default = K2Node_Select11_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.Temp_int_Variable13 = Temp_int_Variable13;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue19 = CallFunc_CreateDynamicMaterialInstance_ReturnValue19;
	Parms.CallFunc_Array_Get_Item11 = CallFunc_Array_Get_Item11;
	Parms.CallFunc_Add_IntInt_ReturnValue21 = CallFunc_Add_IntInt_ReturnValue21;
	Parms.CallFunc_Array_Get_Item12 = CallFunc_Array_Get_Item12;
	Parms.CallFunc_Array_Get_Item13 = CallFunc_Array_Get_Item13;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.Temp_bool_Variable16 = Temp_bool_Variable16;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue11 = CallFunc_LessEqual_IntInt_ReturnValue11;
	Parms.K2Node_GameplayCueEvent_EventType1 = K2Node_GameplayCueEvent_EventType1;
	Parms.K2Node_GameplayCueEvent_Parameters1 = K2Node_GameplayCueEvent_Parameters1;
	Parms.K2Node_GameplayCueEvent_EventType = K2Node_GameplayCueEvent_EventType;
	Parms.K2Node_GameplayCueEvent_Parameters = K2Node_GameplayCueEvent_Parameters;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.K2Node_SwitchEnum3_CmpSuccess = K2Node_SwitchEnum3_CmpSuccess;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Array_Get_Item14 = CallFunc_Array_Get_Item14;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_Less_IntInt_ReturnValue3 = CallFunc_Less_IntInt_ReturnValue3;
	Parms.CallFunc_Array_Get_Item15 = CallFunc_Array_Get_Item15;
	Parms.CallFunc_Array_Length_ReturnValue4 = CallFunc_Array_Length_ReturnValue4;
	Parms.CallFunc_Less_IntInt_ReturnValue4 = CallFunc_Less_IntInt_ReturnValue4;
	Parms.CallFunc_Array_Add_ReturnValue21 = CallFunc_Array_Add_ReturnValue21;
	Parms.CallFunc_Array_Get_Item16 = CallFunc_Array_Get_Item16;
	Parms.CallFunc_Array_LastIndex_ReturnValue28 = CallFunc_Array_LastIndex_ReturnValue28;
	Parms.CallFunc_Min_ReturnValue14 = CallFunc_Min_ReturnValue14;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue12 = CallFunc_LessEqual_IntInt_ReturnValue12;
	Parms.CallFunc_Array_Length_ReturnValue5 = CallFunc_Array_Length_ReturnValue5;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue20 = CallFunc_CreateDynamicMaterialInstance_ReturnValue20;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue22 = CallFunc_Array_Add_ReturnValue22;
	Parms.K2Node_DynamicCast_AsFortnite_M_Avg_Player_Menus_Screen_Anim_BP = K2Node_DynamicCast_AsFortnite_M_Avg_Player_Menus_Screen_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue21 = CallFunc_CreateDynamicMaterialInstance_ReturnValue21;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue22 = CallFunc_CreateDynamicMaterialInstance_ReturnValue22;
	Parms.CallFunc_Array_Add_ReturnValue23 = CallFunc_Array_Add_ReturnValue23;
	Parms.CallFunc_Array_Add_ReturnValue24 = CallFunc_Array_Add_ReturnValue24;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue23 = CallFunc_CreateDynamicMaterialInstance_ReturnValue23;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue24 = CallFunc_CreateDynamicMaterialInstance_ReturnValue24;
	Parms.CallFunc_Array_Add_ReturnValue25 = CallFunc_Array_Add_ReturnValue25;
	Parms.CallFunc_Array_Add_ReturnValue26 = CallFunc_Array_Add_ReturnValue26;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue25 = CallFunc_CreateDynamicMaterialInstance_ReturnValue25;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue26 = CallFunc_CreateDynamicMaterialInstance_ReturnValue26;
	Parms.CallFunc_Array_Add_ReturnValue27 = CallFunc_Array_Add_ReturnValue27;
	Parms.CallFunc_Array_Add_ReturnValue28 = CallFunc_Array_Add_ReturnValue28;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue27 = CallFunc_CreateDynamicMaterialInstance_ReturnValue27;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue28 = CallFunc_CreateDynamicMaterialInstance_ReturnValue28;
	Parms.CallFunc_Array_Add_ReturnValue29 = CallFunc_Array_Add_ReturnValue29;
	Parms.CallFunc_Array_Add_ReturnValue30 = CallFunc_Array_Add_ReturnValue30;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue29 = CallFunc_CreateDynamicMaterialInstance_ReturnValue29;
	Parms.CallFunc_GetGender_IsMale = CallFunc_GetGender_IsMale;
	Parms.CallFunc_GetGender_IsFemale = CallFunc_GetGender_IsFemale;
	Parms.CallFunc_Array_Add_ReturnValue31 = CallFunc_Array_Add_ReturnValue31;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue44 = CallFunc_IsValid_ReturnValue44;
	Parms.CallFunc_IsValid_ReturnValue45 = CallFunc_IsValid_ReturnValue45;
	Parms.K2Node_CustomEvent_NewPierceValue = K2Node_CustomEvent_NewPierceValue;
	Parms.Temp_int_Variable14 = Temp_int_Variable14;
	Parms.CallFunc_Array_Get_Item17 = CallFunc_Array_Get_Item17;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue13 = CallFunc_LessEqual_IntInt_ReturnValue13;
	Parms.CallFunc_Add_IntInt_ReturnValue22 = CallFunc_Add_IntInt_ReturnValue22;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_SetupShadowMeshAssetsAndMaterials_Set = CallFunc_SetupShadowMeshAssetsAndMaterials_Set;
	Parms.CallFunc_SetupShadowMeshAssetsAndMaterials_Set1 = CallFunc_SetupShadowMeshAssetsAndMaterials_Set1;
	Parms.CallFunc_SetupShadowMeshAssetsAndMaterials_Set2 = CallFunc_SetupShadowMeshAssetsAndMaterials_Set2;
	Parms.CallFunc_SetupShadowMeshAssetsAndMaterials_Set3 = CallFunc_SetupShadowMeshAssetsAndMaterials_Set3;
	Parms.CallFunc_SetupShadowMeshAssetsAndMaterials_Set4 = CallFunc_SetupShadowMeshAssetsAndMaterials_Set4;
	Parms.CallFunc_SetupShadowMeshAssetsAndMaterials_Set5 = CallFunc_SetupShadowMeshAssetsAndMaterials_Set5;
	Parms.CallFunc_Array_Get_Item18 = CallFunc_Array_Get_Item18;
	Parms.CallFunc_Array_Length_ReturnValue6 = CallFunc_Array_Length_ReturnValue6;
	Parms.CallFunc_Less_IntInt_ReturnValue5 = CallFunc_Less_IntInt_ReturnValue5;
	Parms.CallFunc_BooleanOR_ReturnValue12 = CallFunc_BooleanOR_ReturnValue12;
	Parms.CallFunc_Array_Get_Item19 = CallFunc_Array_Get_Item19;
	Parms.K2Node_Select13_Default = K2Node_Select13_Default;
	Parms.CallFunc_Array_Length_ReturnValue7 = CallFunc_Array_Length_ReturnValue7;
	Parms.CallFunc_Less_IntInt_ReturnValue6 = CallFunc_Less_IntInt_ReturnValue6;
	Parms.CallFunc_Array_Get_Item20 = CallFunc_Array_Get_Item20;
	Parms.CallFunc_Array_Length_ReturnValue8 = CallFunc_Array_Length_ReturnValue8;
	Parms.CallFunc_Less_IntInt_ReturnValue7 = CallFunc_Less_IntInt_ReturnValue7;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue13 = CallFunc_BooleanOR_ReturnValue13;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_Select14_Default = K2Node_Select14_Default;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue14 = CallFunc_LessEqual_IntInt_ReturnValue14;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.Temp_int_Variable15 = Temp_int_Variable15;
	Parms.CallFunc_Array_Get_Item21 = CallFunc_Array_Get_Item21;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue15 = CallFunc_LessEqual_IntInt_ReturnValue15;
	Parms.CallFunc_Add_IntInt_ReturnValue23 = CallFunc_Add_IntInt_ReturnValue23;
	Parms.CallFunc_IsValid_ReturnValue46 = CallFunc_IsValid_ReturnValue46;
	Parms.Temp_int_Variable16 = Temp_int_Variable16;
	Parms.CallFunc_Array_Get_Item22 = CallFunc_Array_Get_Item22;
	Parms.CallFunc_IsValid_ReturnValue47 = CallFunc_IsValid_ReturnValue47;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue16 = CallFunc_LessEqual_IntInt_ReturnValue16;
	Parms.CallFunc_Add_IntInt_ReturnValue24 = CallFunc_Add_IntInt_ReturnValue24;
	Parms.CallFunc_IsValid_ReturnValue48 = CallFunc_IsValid_ReturnValue48;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_CustomEvent_AoeCloudTimeToLive = K2Node_CustomEvent_AoeCloudTimeToLive;
	Parms.K2Node_CustomEvent_MontageLength = K2Node_CustomEvent_MontageLength;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
