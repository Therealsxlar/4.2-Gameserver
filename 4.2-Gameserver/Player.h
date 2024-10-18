#pragma once

static void* (*ApplyCharacterCustomization)(void*, void*) = decltype(ApplyCharacterCustomization)(Client::BaseAddress() + 0xf5bb20);
void ServerAcknowlegePossessionHook(AFortPlayerControllerAthena* Controller, APawn* Pawn)
{
    Controller->AcknowledgedPawn = Pawn;

    ApplyCharacterCustomization(Controller->PlayerState, Pawn);
}

void ServerExecuteInventoryItem(AFortPlayerControllerAthena* Controller, FGuid ItemGuid)
{
    if (!Controller || Controller->IsInAircraft()) // not in the aircraft
        return;

    auto Instance = FindItemInstanceByGUID(Controller, ItemGuid); // get the item instance
    if (!Instance || !Instance->ItemEntry.ItemDefinition)
        return;

    auto Pawn = Cast<AFortPlayerPawn>(Controller->Pawn); // get the pawn
    if (!Pawn)
        return;

    if (auto WeaponDefinition = Cast<UFortWeaponItemDefinition>(Instance->ItemEntry.ItemDefinition)) // attempt to equip if its a weapon (so real!)
    {
        Pawn->EquipWeaponDefinition(WeaponDefinition, ItemGuid);
    }
}

namespace Player
{
    void HookPlayer()
    {
        auto FortPlayerControllerAthena = StaticFindObject<AFortPlayerControllerAthena>("/Script/FortniteGame.Default__FortPlayerControllerAthena");

        VirtualHook(FortPlayerControllerAthena->Vft, 260, ServerAcknowlegePossessionHook);
        VirtualHook(FortPlayerControllerAthena->Vft, 487, ServerExecuteInventoryItem);
    }
}