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


// Function B_Pistol_SixShooter_Athena.B_Pistol_SixShooter_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Pistol_SixShooter_Athena_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_Pistol_SixShooter_Athena_C", "UserConstructionScript");

	Params::AB_Pistol_SixShooter_Athena_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
