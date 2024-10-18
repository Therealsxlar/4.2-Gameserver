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


// Function Valor_Pickaxe_dyn_AnimBP.Valor_Pickaxe_dyn_AnimBP_C.ExecuteUbergraph_Valor_Pickaxe_dyn_AnimBP
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UValor_Pickaxe_dyn_AnimBP_C::ExecuteUbergraph_Valor_Pickaxe_dyn_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Valor_Pickaxe_dyn_AnimBP_C", "ExecuteUbergraph_Valor_Pickaxe_dyn_AnimBP");

	Params::UValor_Pickaxe_dyn_AnimBP_C_ExecuteUbergraph_Valor_Pickaxe_dyn_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
