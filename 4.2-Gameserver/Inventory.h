#pragma once

void Update(AFortPlayerControllerAthena* Player, FFortItemEntry* Entry = nullptr)
{
    if (!Player || !Player->WorldInventory)
        return;

    Player->WorldInventory->HandleInventoryLocalUpdate();

    if (Entry)
        Player->WorldInventory->Inventory.MarkItemDirty(*Entry);
    else
        Player->WorldInventory->Inventory.MarkArrayDirty();
}

FFortItemEntry* FindItemEntry(AFortPlayerControllerAthena* Player, const FGuid& ItemGuid)
{
    if (!Player || !Player->WorldInventory)
        return nullptr;

    auto& Entries = Player->WorldInventory->Inventory.ReplicatedEntries;
    for (int i = 0; i < Entries.Num(); ++i)
    {
        if (Entries[i].ItemGuid == ItemGuid)
        {
            return &Entries[i];
        }
    }
    return nullptr;
}

FFortItemEntry* FindItemEntryByDefinition(AFortPlayerControllerAthena* Player, UFortItemDefinition* ItemDef)
{
    if (!Player || !Player->WorldInventory || !ItemDef)
        return nullptr;

    auto& Entries = Player->WorldInventory->Inventory.ReplicatedEntries;
    for (int i = 0; i < Entries.Num(); ++i)
    {
        if (Entries[i].ItemDefinition == ItemDef)
        {
            return &Entries[i];
        }
    }
    return nullptr;
}

UFortWorldItem* FindItemInstanceByGUID(AFortPlayerControllerAthena* Player, const FGuid& ItemGuid)
{
    if (!Player || !Player->WorldInventory)
        return nullptr;

    auto& ItemInstances = Player->WorldInventory->Inventory.ItemInstances;
    for (int i = 0; i < ItemInstances.Num(); ++i)
    {
        if (ItemInstances[i] && ItemInstances[i]->ItemEntry.ItemGuid == ItemGuid)
        {
            return ItemInstances[i];
        }
    }
    return nullptr;
}

void GiveItem(AFortPlayerControllerAthena* Player, UFortItemDefinition* ItemDef, int32 Count = 1, int32 Level = 0)
{
    if (!Player || !Player->WorldInventory || !ItemDef || Count <= 0)
        return;

    UFortWorldItem* NewItem = Cast<UFortWorldItem>(ItemDef->CreateTemporaryItemInstanceBP(Count, Level));
    if (!NewItem)
        return;

    NewItem->SetOwningControllerForTemporaryItem(Player);

    Player->WorldInventory->Inventory.ReplicatedEntries.Add(NewItem->ItemEntry);
    Player->WorldInventory->Inventory.ItemInstances.Add(NewItem);

    Update(Player, &NewItem->ItemEntry);
}