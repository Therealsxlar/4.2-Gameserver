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


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ToggleTiresAndFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATrap_Ceiling_Falling_C::ToggleTiresAndFX()
{
	static auto Func = Class->GetFunction("Trap_Ceiling_Falling_C", "ToggleTiresAndFX");

	Params::ATrap_Ceiling_Falling_C_ToggleTiresAndFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ToggleDoors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bToggle                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Ceiling_Falling_C::ToggleDoors(bool bToggle, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1)
{
	static auto Func = Class->GetFunction("Trap_Ceiling_Falling_C", "ToggleDoors");

	Params::ATrap_Ceiling_Falling_C_ToggleDoors_Params Parms;
	Parms.bToggle = bToggle;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OnRep_bActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATrap_Ceiling_Falling_C::OnRep_bActivated()
{
	static auto Func = Class->GetFunction("Trap_Ceiling_Falling_C", "OnRep_bActivated");

	Params::ATrap_Ceiling_Falling_C_OnRep_bActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ToggleTireVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewHidden                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrap_Ceiling_Falling_C::ToggleTireVisibility(bool NewHidden, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("Trap_Ceiling_Falling_C", "ToggleTireVisibility");

	Params::ATrap_Ceiling_Falling_C_ToggleTireVisibility_Params Parms;
	Parms.NewHidden = NewHidden;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTransform>          SocketTransformList                                              (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class UStaticMesh*>         TireOptions                                                      (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class UStaticMeshComponent*>Tiress                                                           (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class FName>                SocketNames                                                      (Edit, BlueprintVisible, ZeroConstructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStaticMesh*>         K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStaticMeshComponent*>K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item2                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetAllSocketNames_ReturnValue                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrap_Ceiling_Falling_C::UserConstructionScript(const TArray<struct FTransform>& SocketTransformList, const TArray<class UStaticMesh*>& TireOptions, const TArray<class UStaticMeshComponent*>& Tiress, const TArray<class FName>& SocketNames, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable1, TArray<class UStaticMesh*>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable1, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item1, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item2, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue1)
{
	static auto Func = Class->GetFunction("Trap_Ceiling_Falling_C", "UserConstructionScript");

	Params::ATrap_Ceiling_Falling_C_UserConstructionScript_Params Parms;
	Parms.SocketTransformList = SocketTransformList;
	Parms.TireOptions = TireOptions;
	Parms.Tiress = Tiress;
	Parms.SocketNames = SocketNames;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_GetAllSocketNames_ReturnValue = CallFunc_GetAllSocketNames_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OpenDoor__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATrap_Ceiling_Falling_C::OpenDoor__FinishedFunc()
{
	static auto Func = Class->GetFunction("Trap_Ceiling_Falling_C", "OpenDoor__FinishedFunc");

	Params::ATrap_Ceiling_Falling_C_OpenDoor__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OpenDoor__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATrap_Ceiling_Falling_C::OpenDoor__UpdateFunc()
{
	static auto Func = Class->GetFunction("Trap_Ceiling_Falling_C", "OpenDoor__UpdateFunc");

	Params::ATrap_Ceiling_Falling_C_OpenDoor__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OnPlaced
// (Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Ceiling_Falling_C::OnPlaced()
{
	static auto Func = Class->GetFunction("Trap_Ceiling_Falling_C", "OnPlaced");

	Params::ATrap_Ceiling_Falling_C_OnPlaced_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.TrapActivated
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              CooldownDuration                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Ceiling_Falling_C::TrapActivated(float CooldownDuration)
{
	static auto Func = Class->GetFunction("Trap_Ceiling_Falling_C", "TrapActivated");

	Params::ATrap_Ceiling_Falling_C_TrapActivated_Params Parms;
	Parms.CooldownDuration = CooldownDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ShowTires
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATrap_Ceiling_Falling_C::ShowTires()
{
	static auto Func = Class->GetFunction("Trap_Ceiling_Falling_C", "ShowTires");

	Params::ATrap_Ceiling_Falling_C_ShowTires_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.FireDustFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATrap_Ceiling_Falling_C::FireDustFX()
{
	static auto Func = Class->GetFunction("Trap_Ceiling_Falling_C", "FireDustFX");

	Params::ATrap_Ceiling_Falling_C_FireDustFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OpenDoors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATrap_Ceiling_Falling_C::OpenDoors()
{
	static auto Func = Class->GetFunction("Trap_Ceiling_Falling_C", "OpenDoors");

	Params::ATrap_Ceiling_Falling_C_OpenDoors_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.CloseDoors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATrap_Ceiling_Falling_C::CloseDoors()
{
	static auto Func = Class->GetFunction("Trap_Ceiling_Falling_C", "CloseDoors");

	Params::ATrap_Ceiling_Falling_C_CloseDoors_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ExecuteUbergraph_Trap_Ceiling_Falling
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_CooldownDuration                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue1                    (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsStandalone_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue1                                (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult1                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsStandalone_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void ATrap_Ceiling_Falling_C::ExecuteUbergraph_Trap_Ceiling_Falling(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_CooldownDuration, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue1, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, bool CallFunc_IsStandalone_ReturnValue, bool CallFunc_IsStandalone_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult1, bool CallFunc_IsStandalone_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("Trap_Ceiling_Falling_C", "ExecuteUbergraph_Trap_Ceiling_Falling");

	Params::ATrap_Ceiling_Falling_C_ExecuteUbergraph_Trap_Ceiling_Falling_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_CooldownDuration = K2Node_Event_CooldownDuration;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue1 = CallFunc_HasAuthority_ReturnValue1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue1 = CallFunc_K2_GetComponentRotation_ReturnValue1;
	Parms.CallFunc_BreakRotator_Roll1 = CallFunc_BreakRotator_Roll1;
	Parms.CallFunc_BreakRotator_Pitch1 = CallFunc_BreakRotator_Pitch1;
	Parms.CallFunc_BreakRotator_Yaw1 = CallFunc_BreakRotator_Yaw1;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.CallFunc_IsStandalone_ReturnValue1 = CallFunc_IsStandalone_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue1 = CallFunc_MakeRotator_ReturnValue1;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult1 = CallFunc_K2_SetWorldRotation_SweepHitResult1;
	Parms.CallFunc_IsStandalone_ReturnValue2 = CallFunc_IsStandalone_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
