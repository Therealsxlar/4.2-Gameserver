#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function LandingPageTile.LandingPageTile_C.PlayIntroOrOutro
struct ULandingPageTile_C_PlayIntroOrOutro_Params
{
public:
	bool                                         PlayIntro;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function LandingPageTile.LandingPageTile_C.UpdateTileAvailability
struct ULandingPageTile_C_UpdateTileAvailability_Params
{
public:
	bool                                         Available;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function LandingPageTile.LandingPageTile_C.BP_OnHovered
struct ULandingPageTile_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LandingPageTile.LandingPageTile_C.BP_OnUnhovered
struct ULandingPageTile_C_BP_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LandingPageTile.LandingPageTile_C.Construct
struct ULandingPageTile_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function LandingPageTile.LandingPageTile_C.PreConstruct
struct ULandingPageTile_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function LandingPageTile.LandingPageTile_C.ExecuteUbergraph_LandingPageTile
struct ULandingPageTile_C_ExecuteUbergraph_LandingPageTile_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Available;                            // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47AD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x8(0x18)()
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
