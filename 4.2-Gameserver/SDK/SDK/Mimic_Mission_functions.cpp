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


// Function Mimic_Mission.Mimic_Mission_C.OnMimicSpawned
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHuskPawn_Mimic_C*           MimicPawn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGuid                       CallFunc_GetMissionGuid_ReturnValue                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RegisterForMissionEvents_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGuid                       CallFunc_GetMissionGuid_ReturnValue1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetMissionGuid_ReturnValue2                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMimic_Mission_C::OnMimicSpawned(class AHuskPawn_Mimic_C* MimicPawn, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FGuid& CallFunc_GetMissionGuid_ReturnValue, bool CallFunc_RegisterForMissionEvents_ReturnValue, const struct FGuid& CallFunc_GetMissionGuid_ReturnValue1, const struct FGuid& CallFunc_GetMissionGuid_ReturnValue2, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static auto Func = Class->GetFunction("Mimic_Mission_C", "OnMimicSpawned");

	Params::AMimic_Mission_C_OnMimicSpawned_Params Parms;
	Parms.MimicPawn = MimicPawn;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_GetMissionGuid_ReturnValue = CallFunc_GetMissionGuid_ReturnValue;
	Parms.CallFunc_RegisterForMissionEvents_ReturnValue = CallFunc_RegisterForMissionEvents_ReturnValue;
	Parms.CallFunc_GetMissionGuid_ReturnValue1 = CallFunc_GetMissionGuid_ReturnValue1;
	Parms.CallFunc_GetMissionGuid_ReturnValue2 = CallFunc_GetMissionGuid_ReturnValue2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mimic_Mission.Mimic_Mission_C.OnChestInteract
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<enum class EFortEncounterDirection>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<class AActor*>              K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortEncounterSettings      K2Node_MakeStruct_FortEncounterSettings                          ()
// class UFortAIEncounterInfo*        CallFunc_StartMissionAIEncounterFromGeneratedProfile_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMimic_Mission_C::OnChestInteract(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<enum class EFortEncounterDirection>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array1, bool CallFunc_IsValid_ReturnValue, const struct FFortEncounterSettings& K2Node_MakeStruct_FortEncounterSettings, class UFortAIEncounterInfo* CallFunc_StartMissionAIEncounterFromGeneratedProfile_ReturnValue)
{
	static auto Func = Class->GetFunction("Mimic_Mission_C", "OnChestInteract");

	Params::AMimic_Mission_C_OnChestInteract_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_FortEncounterSettings = K2Node_MakeStruct_FortEncounterSettings;
	Parms.CallFunc_StartMissionAIEncounterFromGeneratedProfile_ReturnValue = CallFunc_StartMissionAIEncounterFromGeneratedProfile_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mimic_Mission.Mimic_Mission_C.HideFoundMimicText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*          CallFunc_GetObjectiveByHandle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMimic_Mission_C::HideFoundMimicText(class AFortObjectiveBase* CallFunc_GetObjectiveByHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("Mimic_Mission_C", "HideFoundMimicText");

	Params::AMimic_Mission_C_HideFoundMimicText_Params Parms;
	Parms.CallFunc_GetObjectiveByHandle_ReturnValue = CallFunc_GetObjectiveByHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mimic_Mission.Mimic_Mission_C.InitializeMimicChest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMimic_Chest_C*              MimicChest                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWakeOnDamage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetMissionGuid_ReturnValue                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMimic_Mission_C::InitializeMimicChest(class AMimic_Chest_C* MimicChest, bool bWakeOnDamage, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FGuid& CallFunc_GetMissionGuid_ReturnValue)
{
	static auto Func = Class->GetFunction("Mimic_Mission_C", "InitializeMimicChest");

	Params::AMimic_Mission_C_InitializeMimicChest_Params Parms;
	Parms.MimicChest = MimicChest;
	Parms.bWakeOnDamage = bWakeOnDamage;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetMissionGuid_ReturnValue = CallFunc_GetMissionGuid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mimic_Mission.Mimic_Mission_C.TryGiveRewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPawnDamageLootTier_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetMissionGuid_ReturnValue                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>CallFunc_GetAllFortPlayerControllers_ReturnValue                 (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMimic_Mission_C::TryGiveRewards(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_GetPawnDamageLootTier_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FGuid& CallFunc_GetMissionGuid_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("Mimic_Mission_C", "TryGiveRewards");

	Params::AMimic_Mission_C_TryGiveRewards_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetPawnDamageLootTier_ReturnValue = CallFunc_GetPawnDamageLootTier_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetMissionGuid_ReturnValue = CallFunc_GetMissionGuid_ReturnValue;
	Parms.CallFunc_GetAllFortPlayerControllers_ReturnValue = CallFunc_GetAllFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mimic_Mission.Mimic_Mission_C.RestartDormantChest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       CallFunc_GetMissionGuid_ReturnValue                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetMissionGuid_ReturnValue1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class ABuildingActor*              CallFunc_SpawnBuildingActorAtTransform_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMimic_Chest_C*              K2Node_DynamicCast_AsMimic_Chest                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMimic_Mission_C::RestartDormantChest(const struct FGuid& CallFunc_GetMissionGuid_ReturnValue, const struct FGuid& CallFunc_GetMissionGuid_ReturnValue1, float CallFunc_GetHealth_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ABuildingActor* CallFunc_SpawnBuildingActorAtTransform_ReturnValue, class AMimic_Chest_C* K2Node_DynamicCast_AsMimic_Chest, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("Mimic_Mission_C", "RestartDormantChest");

	Params::AMimic_Mission_C_RestartDormantChest_Params Parms;
	Parms.CallFunc_GetMissionGuid_ReturnValue = CallFunc_GetMissionGuid_ReturnValue;
	Parms.CallFunc_GetMissionGuid_ReturnValue1 = CallFunc_GetMissionGuid_ReturnValue1;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_SpawnBuildingActorAtTransform_ReturnValue = CallFunc_SpawnBuildingActorAtTransform_ReturnValue;
	Parms.K2Node_DynamicCast_AsMimic_Chest = K2Node_DynamicCast_AsMimic_Chest;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mimic_Mission.Mimic_Mission_C.InitMission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// TArray<class AActor*>              CallFunc_InitializeActorsForMission_OutActorsInitialized         (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_InitializeActorsForMission_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMimic_Chest_C*              K2Node_DynamicCast_AsMimic_Chest                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGuid                       CallFunc_GetMissionGuid_ReturnValue                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortMissionWeightedReward  CallFunc_ChooseRandomReward_ReturnValue                          ()

void AMimic_Mission_C::InitMission(class FText CallFunc_MakeLiteralText_ReturnValue, TArray<class AActor*>& CallFunc_InitializeActorsForMission_OutActorsInitialized, bool CallFunc_InitializeActorsForMission_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AMimic_Chest_C* K2Node_DynamicCast_AsMimic_Chest, bool K2Node_DynamicCast_bSuccess, const struct FGuid& CallFunc_GetMissionGuid_ReturnValue, const struct FFortMissionWeightedReward& CallFunc_ChooseRandomReward_ReturnValue)
{
	static auto Func = Class->GetFunction("Mimic_Mission_C", "InitMission");

	Params::AMimic_Mission_C_InitMission_Params Parms;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_InitializeActorsForMission_OutActorsInitialized = CallFunc_InitializeActorsForMission_OutActorsInitialized;
	Parms.CallFunc_InitializeActorsForMission_ReturnValue = CallFunc_InitializeActorsForMission_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsMimic_Chest = K2Node_DynamicCast_AsMimic_Chest;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMissionGuid_ReturnValue = CallFunc_GetMissionGuid_ReturnValue;
	Parms.CallFunc_ChooseRandomReward_ReturnValue = CallFunc_ChooseRandomReward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mimic_Mission.Mimic_Mission_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMimic_Mission_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Mimic_Mission_C", "UserConstructionScript");

	Params::AMimic_Mission_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mimic_Mission.Mimic_Mission_C.HandleMissionEvent_MissionSucceeded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       InMissionGuid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ObjectiveHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortMissionEventParams*     Params                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  EventContent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GenericInt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GenericFloat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        GenericText                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       GameplayTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortMissionEvent           MissionEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AMimic_Mission_C::HandleMissionEvent_MissionSucceeded(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static auto Func = Class->GetFunction("Mimic_Mission_C", "HandleMissionEvent_MissionSucceeded");

	Params::AMimic_Mission_C_HandleMissionEvent_MissionSucceeded_Params Parms;
	Parms.InMissionGuid = InMissionGuid;
	Parms.ObjectiveHandle = ObjectiveHandle;
	Parms.Params = Params;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = GenericText;
	Parms.GameplayTags = GameplayTags;
	Parms.MissionEvent = MissionEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mimic_Mission.Mimic_Mission_C.HandleMissionEvent_ObjectiveSucceeded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       InMissionGuid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ObjectiveHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortMissionEventParams*     Params                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  EventContent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GenericInt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GenericFloat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        GenericText                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       GameplayTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortMissionEvent           MissionEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AMimic_Mission_C::HandleMissionEvent_ObjectiveSucceeded(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static auto Func = Class->GetFunction("Mimic_Mission_C", "HandleMissionEvent_ObjectiveSucceeded");

	Params::AMimic_Mission_C_HandleMissionEvent_ObjectiveSucceeded_Params Parms;
	Parms.InMissionGuid = InMissionGuid;
	Parms.ObjectiveHandle = ObjectiveHandle;
	Parms.Params = Params;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = GenericText;
	Parms.GameplayTags = GameplayTags;
	Parms.MissionEvent = MissionEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mimic_Mission.Mimic_Mission_C.HandleMissionEvent_LocateSecondary
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       InMissionGuid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ObjectiveHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortMissionEventParams*     Params                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  EventContent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GenericInt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GenericFloat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        GenericText                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       GameplayTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortMissionEvent           MissionEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AMimic_Mission_C::HandleMissionEvent_LocateSecondary(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static auto Func = Class->GetFunction("Mimic_Mission_C", "HandleMissionEvent_LocateSecondary");

	Params::AMimic_Mission_C_HandleMissionEvent_LocateSecondary_Params Parms;
	Parms.InMissionGuid = InMissionGuid;
	Parms.ObjectiveHandle = ObjectiveHandle;
	Parms.Params = Params;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = GenericText;
	Parms.GameplayTags = GameplayTags;
	Parms.MissionEvent = MissionEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mimic_Mission.Mimic_Mission_C.OnMimicDied_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         FHitComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMimic_Mission_C::OnMimicDied_Event(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("Mimic_Mission_C", "OnMimicDied_Event");

	Params::AMimic_Mission_C_OnMimicDied_Event_Params Parms;
	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mimic_Mission.Mimic_Mission_C.OnEncounterEnemySpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAIEncounterInfo*        Encounter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 SpawnedEnemy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMimic_Mission_C::OnEncounterEnemySpawned(class UFortAIEncounterInfo* Encounter, class AFortAIPawn* SpawnedEnemy)
{
	static auto Func = Class->GetFunction("Mimic_Mission_C", "OnEncounterEnemySpawned");

	Params::AMimic_Mission_C_OnEncounterEnemySpawned_Params Parms;
	Parms.Encounter = Encounter;
	Parms.SpawnedEnemy = SpawnedEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mimic_Mission.Mimic_Mission_C.OnInteractingPlayerDied_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         FHitComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMimic_Mission_C::OnInteractingPlayerDied_Event(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("Mimic_Mission_C", "OnInteractingPlayerDied_Event");

	Params::AMimic_Mission_C_OnInteractingPlayerDied_Event_Params Parms;
	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mimic_Mission.Mimic_Mission_C.OnMimicChestDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         FHitComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMimic_Mission_C::OnMimicChestDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("Mimic_Mission_C", "OnMimicChestDamaged");

	Params::AMimic_Mission_C_OnMimicChestDamaged_Params Parms;
	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mimic_Mission.Mimic_Mission_C.BlueprintOnActivated
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void AMimic_Mission_C::BlueprintOnActivated()
{
	static auto Func = Class->GetFunction("Mimic_Mission_C", "BlueprintOnActivated");

	Params::AMimic_Mission_C_BlueprintOnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mimic_Mission.Mimic_Mission_C.Event_OnMimicDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMimic_Mission_C::Event_OnMimicDestroyed(class AActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("Mimic_Mission_C", "Event_OnMimicDestroyed");

	Params::AMimic_Mission_C_Event_OnMimicDestroyed_Params Parms;
	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mimic_Mission.Mimic_Mission_C.ExecuteUbergraph_Mimic_Mission
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_HandleMissionEvent_InMissionGuid1                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle1                       ()
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW1    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent1                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText1                           (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags1                          ()
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent1                          (ConstParm)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_HandleMissionEvent_InMissionGuid                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle                        ()
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText                            (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags                           ()
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent                           (ConstParm)
// bool                               CallFunc_HasAllTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGuid                       K2Node_HandleMissionEvent_InMissionGuid2                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle2                       ()
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent2                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText2                           (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags2                          ()
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent2                          (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DamagedActor2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HitLocation2                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_FHitComponent2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_BoneName2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Momentum2                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// class AAIController*               K2Node_DynamicCast_AsAIController                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAIEncounterInfo*        K2Node_CustomEvent_Encounter                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 K2Node_CustomEvent_SpawnedEnemy                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHuskPawn_Mimic_C*           K2Node_DynamicCast_AsHusk_Pawn_Mimic                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DamagedActor1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HitLocation1                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_FHitComponent1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_BoneName1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Momentum1                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetMissionGuid_ReturnValue                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortBluGloManager*          CallFunc_GetBluGloManager_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABluGloManager_C*            K2Node_DynamicCast_AsBlu_Glo_Manager                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGuid                       CallFunc_GetMissionGuid_ReturnValue1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HitLocation                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_FHitComponent                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_BoneName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Momentum                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DestroyedActor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetMissionGuid_ReturnValue2                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMimic_Mission_C::ExecuteUbergraph_Mimic_Mission(int32 EntryPoint, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid1, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle1, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params1, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW1, class UObject* K2Node_HandleMissionEvent_EventFocus1, class UDataAsset* K2Node_HandleMissionEvent_EventContent1, class AActor* K2Node_HandleMissionEvent_EventInstigator1, int32 K2Node_HandleMissionEvent_GenericInt1, float K2Node_HandleMissionEvent_GenericFloat1, class FText K2Node_HandleMissionEvent_GenericText1, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags1, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent1, class AController* CallFunc_GetController_ReturnValue, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* K2Node_HandleMissionEvent_EventFocus, class UDataAsset* K2Node_HandleMissionEvent_EventContent, class AActor* K2Node_HandleMissionEvent_EventInstigator, int32 K2Node_HandleMissionEvent_GenericInt, float K2Node_HandleMissionEvent_GenericFloat, class FText K2Node_HandleMissionEvent_GenericText, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent, bool CallFunc_HasAllTags_ReturnValue, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle2, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params2, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2, class UObject* K2Node_HandleMissionEvent_EventFocus2, class UDataAsset* K2Node_HandleMissionEvent_EventContent2, class AActor* K2Node_HandleMissionEvent_EventInstigator2, int32 K2Node_HandleMissionEvent_GenericInt2, float K2Node_HandleMissionEvent_GenericFloat2, class FText K2Node_HandleMissionEvent_GenericText2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags2, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent2, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_CustomEvent_DamagedActor2, float K2Node_CustomEvent_Damage2, class AController* K2Node_CustomEvent_InstigatedBy2, class AActor* K2Node_CustomEvent_DamageCauser2, const struct FVector& K2Node_CustomEvent_HitLocation2, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent2, class FName K2Node_CustomEvent_BoneName2, const struct FVector& K2Node_CustomEvent_Momentum2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess1, class UFortAIEncounterInfo* K2Node_CustomEvent_Encounter, class AFortAIPawn* K2Node_CustomEvent_SpawnedEnemy, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AHuskPawn_Mimic_C* K2Node_DynamicCast_AsHusk_Pawn_Mimic, bool K2Node_DynamicCast_bSuccess2, class AActor* K2Node_CustomEvent_DamagedActor1, float K2Node_CustomEvent_Damage1, class AController* K2Node_CustomEvent_InstigatedBy1, class AActor* K2Node_CustomEvent_DamageCauser1, const struct FVector& K2Node_CustomEvent_HitLocation1, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent1, class FName K2Node_CustomEvent_BoneName1, const struct FVector& K2Node_CustomEvent_Momentum1, const struct FGuid& CallFunc_GetMissionGuid_ReturnValue, class AFortBluGloManager* CallFunc_GetBluGloManager_ReturnValue, class ABluGloManager_C* K2Node_DynamicCast_AsBlu_Glo_Manager, bool K2Node_DynamicCast_bSuccess3, const struct FGuid& CallFunc_GetMissionGuid_ReturnValue1, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, class AActor* K2Node_CustomEvent_DestroyedActor, const struct FGuid& CallFunc_GetMissionGuid_ReturnValue2, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static auto Func = Class->GetFunction("Mimic_Mission_C", "ExecuteUbergraph_Mimic_Mission");

	Params::AMimic_Mission_C_ExecuteUbergraph_Mimic_Mission_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_HandleMissionEvent_InMissionGuid1 = K2Node_HandleMissionEvent_InMissionGuid1;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle1 = K2Node_HandleMissionEvent_ObjectiveHandle1;
	Parms.K2Node_HandleMissionEvent_Params1 = K2Node_HandleMissionEvent_Params1;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW1 = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW1;
	Parms.K2Node_HandleMissionEvent_EventFocus1 = K2Node_HandleMissionEvent_EventFocus1;
	Parms.K2Node_HandleMissionEvent_EventContent1 = K2Node_HandleMissionEvent_EventContent1;
	Parms.K2Node_HandleMissionEvent_EventInstigator1 = K2Node_HandleMissionEvent_EventInstigator1;
	Parms.K2Node_HandleMissionEvent_GenericInt1 = K2Node_HandleMissionEvent_GenericInt1;
	Parms.K2Node_HandleMissionEvent_GenericFloat1 = K2Node_HandleMissionEvent_GenericFloat1;
	Parms.K2Node_HandleMissionEvent_GenericText1 = K2Node_HandleMissionEvent_GenericText1;
	Parms.K2Node_HandleMissionEvent_GameplayTags1 = K2Node_HandleMissionEvent_GameplayTags1;
	Parms.K2Node_HandleMissionEvent_MissionEvent1 = K2Node_HandleMissionEvent_MissionEvent1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_HandleMissionEvent_InMissionGuid = K2Node_HandleMissionEvent_InMissionGuid;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle = K2Node_HandleMissionEvent_ObjectiveHandle;
	Parms.K2Node_HandleMissionEvent_Params = K2Node_HandleMissionEvent_Params;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.K2Node_HandleMissionEvent_EventFocus = K2Node_HandleMissionEvent_EventFocus;
	Parms.K2Node_HandleMissionEvent_EventContent = K2Node_HandleMissionEvent_EventContent;
	Parms.K2Node_HandleMissionEvent_EventInstigator = K2Node_HandleMissionEvent_EventInstigator;
	Parms.K2Node_HandleMissionEvent_GenericInt = K2Node_HandleMissionEvent_GenericInt;
	Parms.K2Node_HandleMissionEvent_GenericFloat = K2Node_HandleMissionEvent_GenericFloat;
	Parms.K2Node_HandleMissionEvent_GenericText = K2Node_HandleMissionEvent_GenericText;
	Parms.K2Node_HandleMissionEvent_GameplayTags = K2Node_HandleMissionEvent_GameplayTags;
	Parms.K2Node_HandleMissionEvent_MissionEvent = K2Node_HandleMissionEvent_MissionEvent;
	Parms.CallFunc_HasAllTags_ReturnValue = CallFunc_HasAllTags_ReturnValue;
	Parms.K2Node_HandleMissionEvent_InMissionGuid2 = K2Node_HandleMissionEvent_InMissionGuid2;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle2 = K2Node_HandleMissionEvent_ObjectiveHandle2;
	Parms.K2Node_HandleMissionEvent_Params2 = K2Node_HandleMissionEvent_Params2;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2 = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2;
	Parms.K2Node_HandleMissionEvent_EventFocus2 = K2Node_HandleMissionEvent_EventFocus2;
	Parms.K2Node_HandleMissionEvent_EventContent2 = K2Node_HandleMissionEvent_EventContent2;
	Parms.K2Node_HandleMissionEvent_EventInstigator2 = K2Node_HandleMissionEvent_EventInstigator2;
	Parms.K2Node_HandleMissionEvent_GenericInt2 = K2Node_HandleMissionEvent_GenericInt2;
	Parms.K2Node_HandleMissionEvent_GenericFloat2 = K2Node_HandleMissionEvent_GenericFloat2;
	Parms.K2Node_HandleMissionEvent_GenericText2 = K2Node_HandleMissionEvent_GenericText2;
	Parms.K2Node_HandleMissionEvent_GameplayTags2 = K2Node_HandleMissionEvent_GameplayTags2;
	Parms.K2Node_HandleMissionEvent_MissionEvent2 = K2Node_HandleMissionEvent_MissionEvent2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_DamagedActor2 = K2Node_CustomEvent_DamagedActor2;
	Parms.K2Node_CustomEvent_Damage2 = K2Node_CustomEvent_Damage2;
	Parms.K2Node_CustomEvent_InstigatedBy2 = K2Node_CustomEvent_InstigatedBy2;
	Parms.K2Node_CustomEvent_DamageCauser2 = K2Node_CustomEvent_DamageCauser2;
	Parms.K2Node_CustomEvent_HitLocation2 = K2Node_CustomEvent_HitLocation2;
	Parms.K2Node_CustomEvent_FHitComponent2 = K2Node_CustomEvent_FHitComponent2;
	Parms.K2Node_CustomEvent_BoneName2 = K2Node_CustomEvent_BoneName2;
	Parms.K2Node_CustomEvent_Momentum2 = K2Node_CustomEvent_Momentum2;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_DynamicCast_AsAIController = K2Node_DynamicCast_AsAIController;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_CustomEvent_Encounter = K2Node_CustomEvent_Encounter;
	Parms.K2Node_CustomEvent_SpawnedEnemy = K2Node_CustomEvent_SpawnedEnemy;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsHusk_Pawn_Mimic = K2Node_DynamicCast_AsHusk_Pawn_Mimic;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_CustomEvent_DamagedActor1 = K2Node_CustomEvent_DamagedActor1;
	Parms.K2Node_CustomEvent_Damage1 = K2Node_CustomEvent_Damage1;
	Parms.K2Node_CustomEvent_InstigatedBy1 = K2Node_CustomEvent_InstigatedBy1;
	Parms.K2Node_CustomEvent_DamageCauser1 = K2Node_CustomEvent_DamageCauser1;
	Parms.K2Node_CustomEvent_HitLocation1 = K2Node_CustomEvent_HitLocation1;
	Parms.K2Node_CustomEvent_FHitComponent1 = K2Node_CustomEvent_FHitComponent1;
	Parms.K2Node_CustomEvent_BoneName1 = K2Node_CustomEvent_BoneName1;
	Parms.K2Node_CustomEvent_Momentum1 = K2Node_CustomEvent_Momentum1;
	Parms.CallFunc_GetMissionGuid_ReturnValue = CallFunc_GetMissionGuid_ReturnValue;
	Parms.CallFunc_GetBluGloManager_ReturnValue = CallFunc_GetBluGloManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsBlu_Glo_Manager = K2Node_DynamicCast_AsBlu_Glo_Manager;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetMissionGuid_ReturnValue1 = CallFunc_GetMissionGuid_ReturnValue1;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CustomEvent_HitLocation = K2Node_CustomEvent_HitLocation;
	Parms.K2Node_CustomEvent_FHitComponent = K2Node_CustomEvent_FHitComponent;
	Parms.K2Node_CustomEvent_BoneName = K2Node_CustomEvent_BoneName;
	Parms.K2Node_CustomEvent_Momentum = K2Node_CustomEvent_Momentum;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.K2Node_CustomEvent_DestroyedActor = K2Node_CustomEvent_DestroyedActor;
	Parms.CallFunc_GetMissionGuid_ReturnValue2 = CallFunc_GetMissionGuid_ReturnValue2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
