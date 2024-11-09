#pragma once

class Inventory
{
public:
    static void Update(AFortPlayerControllerAthena* Player, FFortItemEntry* Entry = nullptr)
    {
        if (!Player || !Player->WorldInventory) return;

        Player->WorldInventory->HandleInventoryLocalUpdate();
        Entry ? Player->WorldInventory->Inventory.MarkItemDirty(*Entry)
            : Player->WorldInventory->Inventory.MarkArrayDirty();
    }

    FFortItemEntry* FindItemEntry(AFortPlayerControllerAthena* Player, const FGuid& ItemGuid)
    {
        if (!Player || !Player->WorldInventory) return nullptr;

        auto& SoReal = Player->WorldInventory->Inventory.ReplicatedEntries;
        for (int i = 0; i < SoReal.Num(); ++i)
            if (SoReal[i].ItemGuid == ItemGuid) return &SoReal[i];

        return nullptr;
    }

    FFortItemEntry* FindItemEntryByDefinition(AFortPlayerControllerAthena* Player, UFortItemDefinition* ItemDef)
    {
        if (!Player || !Player->WorldInventory || !ItemDef) return nullptr;

        auto& SoReal = Player->WorldInventory->Inventory.ReplicatedEntries;
        for (int i = 0; i < SoReal.Num(); ++i)
            if (SoReal[i].ItemDefinition == ItemDef) return &SoReal[i];

        return nullptr;
    }

    static UFortWorldItem* FindItemInstanceByGUID(AFortPlayerControllerAthena* Player, const FGuid& ItemGuid)
    {
        if (!Player || !Player->WorldInventory) return nullptr;

        auto& ItemInstancesFr = Player->WorldInventory->Inventory.ItemInstances;
        for (int i = 0; i < ItemInstancesFr.Num(); ++i)
            if (ItemInstancesFr[i] && ItemInstancesFr[i]->ItemEntry.ItemGuid == ItemGuid) return ItemInstancesFr[i];

        return nullptr;
    }

    static void GiveItem(AFortPlayerControllerAthena* Player, UFortItemDefinition* ItemDef, int32 Count = 1, int32 Level = 0)
    {
        if (!Player || !Player->WorldInventory || !ItemDef || Count <= 0) return;

        if (UFortWorldItem* NewItem = Cast<UFortWorldItem>(ItemDef->CreateTemporaryItemInstanceBP(Count, Level)))
        {
            NewItem->SetOwningControllerForTemporaryItem(Player);
            auto& Inventory = Player->WorldInventory->Inventory;
            Inventory.ReplicatedEntries.Add(NewItem->ItemEntry);
            Inventory.ItemInstances.Add(NewItem);
            Update(Player, &NewItem->ItemEntry);
        }
    }

public:
    static void InitializeHooks()
    {

    }
};