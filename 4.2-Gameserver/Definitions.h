#pragma once

class Definitions
{
public:
	static inline void (*KickPlayerOG)(AGameSession*, AController*);
	static void KickPlayer(AGameSession*, AController*) { return; }

	static bool ReturnTrue() { return true; }
	static bool ReturnFalse() { return false; }
	
	static void CollectGarbage()
	{
		return;
	}
};

namespace Helpers // idfk
{
	static inline void* (*ApplyCharacterCustomization)(void*, void*) = decltype(ApplyCharacterCustomization)(Client::BaseAddress() + 0xf5bb20);
	static inline bool (*CantBuild)(UWorld*, UObject*, FVector, FRotator, char, void*, char*) = decltype(CantBuild)(Client::BaseAddress() + 0xc725d0);
}