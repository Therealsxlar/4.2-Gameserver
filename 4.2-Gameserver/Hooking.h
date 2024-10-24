#pragma once

namespace Hooking
{
	bool ReturnTrueHook() { return true; }

	static inline void (*KickPlayerOG)(AGameSession*, AController*);
	static void KickPlayer(AGameSession*, AController*) { return; }

	void InitializeGameserver()
	{
		CREATEHOOK(Client::BaseAddress() + 0x249ea20, GetNetModeWorld, nullptr);
		CREATEHOOK(Client::BaseAddress() + 0x20cee10, KickPlayer, &KickPlayerOG);
		CREATEHOOK(Client::BaseAddress() + 0x806900, Player::DispatchRequest, &Player::DispatchRequestOG);
		CREATEHOOK(Client::BaseAddress() + 0x2449f70, GetMaxTickrate, nullptr);
		CREATEHOOK(Client::BaseAddress() + 0x21f8a90, TickFlush, &TickFlushOG);

		GameMode::InitializeGamemode();
		Player::InitializePlayer();
		Abilities::InitializeAbilities();

		Memory::NullFunction(Client::BaseAddress() + 0xc4bd00); // ChangeGameSessionId
		Memory::NullFunction(Client::BaseAddress() + 0xa8de20);
		Memory::NullFunction(Client::BaseAddress() + 0xf465b0);

		MH_EnableHook(MH_ALL_HOOKS);
	}

	void InitializeTerrain()
	{
		*(bool*)(Client::BaseAddress() + 0x4bf846c) = false; // GIsClient
		((UKismetSystemLibrary*)UKismetSystemLibrary::StaticClass()->DefaultObject)->ExecuteConsoleCommand(Client::GetWorld(), L"open Athena_Terrain", nullptr);
		Client::GetEngine()->GameInstance->LocalPlayers.Remove(0);
	}
}