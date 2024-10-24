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

#include "SDK/SDK.hpp"
using namespace SDK;

namespace Playlists
{
	// omg omg so real! (i'll add other playlists soon im to lazy rn)
	constexpr const char* SoloPlaylist = "/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo";
}