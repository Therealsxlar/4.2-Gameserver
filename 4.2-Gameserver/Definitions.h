#pragma once

class Definitions
{
public:
	static inline void (*KickPlayerOG)(AGameSession*, AController*);
	static void KickPlayer(AGameSession*, AController*) { return; }

	static bool ReturnTrue() { return true; }

	static void CollectGarbage()
	{
		return;
	}
};