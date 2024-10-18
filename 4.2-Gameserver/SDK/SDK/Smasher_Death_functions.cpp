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


// Function Smasher_Death.Smasher_Death_C.Trigger_Death_Effect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USmasher_Death_C::Trigger_Death_Effect()
{
	static auto Func = Class->GetFunction("Smasher_Death_C", "Trigger_Death_Effect");

	Params::USmasher_Death_C_Trigger_Death_Effect_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
