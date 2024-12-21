#pragma once

class Inventory
{
public:
    static void Update(AFortPlayerControllerAthena* Player, FFortItemEntry* Entry = nullptr)
    {
        if (!Player || !Player->WorldInventory) return;
        Player->WorldInventory->HandleInventoryLocalUpdate();

        return Entry ? Player->WorldInventory->Inventory.MarkItemDirty(*Entry) : Player->WorldInventory->Inventory.MarkArrayDirty();
    }

    static FFortItemEntry* FindItemEntry(AFortPlayerControllerAthena* Player, const FGuid& ItemGuid)
    {
        if (!Player || !Player->WorldInventory) return nullptr;

        auto SoReal = Player->WorldInventory->Inventory.ReplicatedEntries;
        for (int i = 0; i < SoReal.Num(); ++i)
            if (SoReal[i].ItemGuid == ItemGuid) return &SoReal[i];

        return nullptr;
    }

    static FFortItemEntry* FindItemEntry(AFortPlayerController* PC, UFortItemDefinition* ItemDefinition)
    {
        if (!PC || !PC->WorldInventory || !ItemDefinition) return nullptr;

        auto SoReal = PC->WorldInventory->Inventory.ReplicatedEntries;
        for (int i = 0; i < SoReal.Num(); ++i)
            if (SoReal[i].ItemDefinition == ItemDefinition) return &SoReal[i];

        return nullptr;
    }

    static FFortItemEntry* FindItemEntryByDefinition(AFortPlayerControllerAthena* Player, UFortItemDefinition* ItemDefinition)
    {
        if (!Player || !Player->WorldInventory || !ItemDefinition) return nullptr;

        auto& SoReal = Player->WorldInventory->Inventory.ReplicatedEntries;
        for (int i = 0; i < SoReal.Num(); ++i)
            if (SoReal[i].ItemDefinition == ItemDefinition) return &SoReal[i];

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

    static void GiveItem(AFortPlayerControllerAthena* Player, UFortItemDefinition* ItemDefinition, int32 Count = 1, int32 Level = 0)
    {
        if (!Player || !Player->WorldInventory || !ItemDefinition || Count <= 0) return;

        auto Inventory = Player->WorldInventory->Inventory;

        FFortItemEntry* ExistingEntry = FindItemEntry(Player, ItemDefinition);

        if (ExistingEntry) {
            ExistingEntry->Count += Count;
            Inventory.MarkItemDirty(*ExistingEntry);
            Update(Player, ExistingEntry);
            return;
        }

        if (UFortWorldItem* NewItem = Cast<UFortWorldItem>(ItemDefinition->CreateTemporaryItemInstanceBP(Count, Level))) {
            NewItem->SetOwningControllerForTemporaryItem(Player);
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