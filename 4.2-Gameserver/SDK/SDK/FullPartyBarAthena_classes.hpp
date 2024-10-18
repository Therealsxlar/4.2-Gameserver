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

// 0x8 (0x230 - 0x228)
// WidgetBlueprintGeneratedClass FullPartyBarAthena.FullPartyBarAthena_C
class UFullPartyBarAthena_C : public UAthenaPartyBar
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FullPartyBarAthena_C");
		return Clss;
	}

	void Initialize();
	void Construct();
	void ExecuteUbergraph_FullPartyBarAthena(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
