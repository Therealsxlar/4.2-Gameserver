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


// Function IMeleeWhileMoving.IMeleeWhileMoving_C.GetCollisionPredictionComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*             Collision_Prediction_Shape_Component                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIMeleeWhileMoving_C::GetCollisionPredictionComponent(class UShapeComponent** Collision_Prediction_Shape_Component)
{
	static auto Func = Class->GetFunction("IMeleeWhileMoving_C", "GetCollisionPredictionComponent");

	Params::UIMeleeWhileMoving_C_GetCollisionPredictionComponent_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Collision_Prediction_Shape_Component != nullptr)
		*Collision_Prediction_Shape_Component = Parms.Collision_Prediction_Shape_Component;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
