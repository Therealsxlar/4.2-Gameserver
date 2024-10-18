#pragma once

namespace Hooking
{
	bool ReturnTrueHook() { return true; }

	static inline void (*KickPlayerOG)(AGameSession*, AController*);
	static void KickPlayer(AGameSession*, AController*) { return; }

	void Gameserver()
	{
		CREATEHOOK(Client::BaseAddress() + 0x249ea20, GetNetModeWorld, nullptr);
		CREATEHOOK(Client::BaseAddress() + 0x20cee10, KickPlayer, &KickPlayerOG);
		CREATEHOOK(Client::BaseAddress() + 0x2449f70, GetMaxTickrateHook, nullptr);
		CREATEHOOK(Client::BaseAddress() + 0x21f8a90, TickFlushHook, &TickFlush);

		Gamemode::HookGamemode();
		Player::HookPlayer();

		Memory::NullFunction(Client::BaseAddress() + 0xc4bd00);
		Memory::NullFunction(Client::BaseAddress() + 0xa8de20);
		Memory::NullFunction(Client::BaseAddress() + 0xf465b0);

		MH_EnableHook(MH_ALL_HOOKS);
	}

	void LoadGame()
	{
		*(bool*)(Client::BaseAddress() + 0x4bf846c) = false; // GIsClient
		((UKismetSystemLibrary*)UKismetSystemLibrary::StaticClass()->DefaultObject)->ExecuteConsoleCommand(Client::GetWorld(), L"open Athena_Terrain", nullptr);
		Client::GetEngine()->GameInstance->LocalPlayers.Remove(0);
	}
}