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


// Function B_FDP_SentryGun.B_FDP_SentryGun_C.SetupMIDForMeshComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    NewMID                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CallFunc_GetTextureParameterValueFromMeshComponent_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreatePreviewMID_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CallFunc_GetTextureParameterValueFromMeshComponent_ReturnValue1  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_FDP_SentryGun_C::SetupMIDForMeshComponent(class UStaticMeshComponent* MeshComp, class UMaterialInstanceDynamic* NewMID, class UTexture* CallFunc_GetTextureParameterValueFromMeshComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreatePreviewMID_ReturnValue, class UTexture* CallFunc_GetTextureParameterValueFromMeshComponent_ReturnValue1, bool CallFunc_IsValid_ReturnValue1)
{
	static auto Func = Class->GetFunction("B_FDP_SentryGun_C", "SetupMIDForMeshComponent");

	Params::AB_FDP_SentryGun_C_SetupMIDForMeshComponent_Params Parms;
	Parms.MeshComp = MeshComp;
	Parms.NewMID = NewMID;
	Parms.CallFunc_GetTextureParameterValueFromMeshComponent_ReturnValue = CallFunc_GetTextureParameterValueFromMeshComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreatePreviewMID_ReturnValue = CallFunc_CreatePreviewMID_ReturnValue;
	Parms.CallFunc_GetTextureParameterValueFromMeshComponent_ReturnValue1 = CallFunc_GetTextureParameterValueFromMeshComponent_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_FDP_SentryGun.B_FDP_SentryGun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FDP_SentryGun_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_FDP_SentryGun_C", "UserConstructionScript");

	Params::AB_FDP_SentryGun_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_FDP_SentryGun.B_FDP_SentryGun_C.OnInitializeDecoPreview
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABuildingActor*              NewBuildingActor                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDecoItemDefinition*     NewDecoItemDefinition                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_FDP_SentryGun_C::OnInitializeDecoPreview(class ABuildingActor* NewBuildingActor, class UFortDecoItemDefinition* NewDecoItemDefinition)
{
	static auto Func = Class->GetFunction("B_FDP_SentryGun_C", "OnInitializeDecoPreview");

	Params::AB_FDP_SentryGun_C_OnInitializeDecoPreview_Params Parms;
	Parms.NewBuildingActor = NewBuildingActor;
	Parms.NewDecoItemDefinition = NewDecoItemDefinition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_FDP_SentryGun.B_FDP_SentryGun_C.ExecuteUbergraph_B_FDP_SentryGun
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingActor*              K2Node_Event_NewBuildingActor                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDecoItemDefinition*     K2Node_Event_NewDecoItemDefinition                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_FDP_SentryGun_C::ExecuteUbergraph_B_FDP_SentryGun(int32 EntryPoint, class ABuildingActor* K2Node_Event_NewBuildingActor, class UFortDecoItemDefinition* K2Node_Event_NewDecoItemDefinition)
{
	static auto Func = Class->GetFunction("B_FDP_SentryGun_C", "ExecuteUbergraph_B_FDP_SentryGun");

	Params::AB_FDP_SentryGun_C_ExecuteUbergraph_B_FDP_SentryGun_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewBuildingActor = K2Node_Event_NewBuildingActor;
	Parms.K2Node_Event_NewDecoItemDefinition = K2Node_Event_NewDecoItemDefinition;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
