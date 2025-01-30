#pragma once

#pragma comment(lib,"minhook/minhook.lib")
#include "minhook/MinHook.h"

#define CREATEHOOK(Address, Hook, Og) \
MH_CreateHook((void*)(Address), Hook, (void**)(Og));

static void VirtualHook(void** vft, int idx, void* newfunc, void** OG = nullptr)
{
	if (OG)
		*OG = vft[idx];

	DWORD dwProt;
	VirtualProtect(&vft[idx], 8, PAGE_EXECUTE_READWRITE, &dwProt);
	vft[idx] = newfunc;
	DWORD dwTemp;
	VirtualProtect(&vft[idx], 8, dwProt, &dwTemp);
}

static void ExecHook(UFunction* Function, void* Hook, void** OG = nullptr)
{
	auto& Exec = Function->GetFunc();

	if (OG)
		*OG = Exec;

	Exec = Hook;
}

#include "SDK/SDK.hpp"
using namespace SDK;

namespace Playlists
{
	constexpr const char* SoloPlaylist = "/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo";
	constexpr const char* DuoPlaylist = "/Game/Athena/Playlists/Playlist_DefaultDuo.Playlist_DefaultDuo";
	constexpr const char* SquadPlaylist = "/Game/Athena/Playlists/Playlist_DefaultSquad.Playlist_DefaultSquad";
	constexpr const char* Playlist50v50 = "/Game/Athena/Playlists/50v50/Playlist_50v50.Playlist_50v50";
}