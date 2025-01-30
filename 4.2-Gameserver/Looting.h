#pragma once

class Looting
{
public:
    // anyways this is just for testing might keep it + i'll add custom floor loot so yeah stay tuned.
    struct LootRow
    {
        UFortItemDefinition* ItemDefinition;
        std::string Identifier;
        int DropCount;
        int LoadedAmmo = 0;

        LootRow(UFortItemDefinition* ItemDefinitionReal, const std::string& IdentifierReal, int DropCountReal, int LoadedAmmoReal) : ItemDefinition(ItemDefinitionReal), Identifier(IdentifierReal), DropCount(DropCountReal), LoadedAmmo(LoadedAmmoReal) {}
    };

    template <typename T, typename U>
    static std::pair<T, U> GetRandomItem(const std::map<T, U>& MappItemFr)
    {
        int Index = rand() % MappItemFr.size();
        auto It = MappItemFr.begin();
        std::advance(It, Index);
        return *It;
    }

    static int GetClipSize(UFortWeaponItemDefinition* WeaponDef, UFortItemDefinition* ItemDef)
    {
        if (!ItemDef)
        {
            return 0;
        }

        if (auto RangedDef = Cast<UFortWeaponRangedItemDefinition>(ItemDef))
        {
            if (auto DataTable = RangedDef->WeaponStatHandle.DataTable)
            {
                auto& RowMap = *(UE::TMap<FName, FFortRangedWeaponStats*>*)(__int64(DataTable) + 0x30);
                auto& Elements = RowMap.Pairs.Elements.Data;

                for (int i = 0; i < Elements.Num(); ++i)
                {
                    auto& Element = Elements[i].ElementData.Value;

                    if (!Element.Second) continue;

                    if (Element.First == RangedDef->WeaponStatHandle.RowName)
                    {
                        return Element.Second->ClipSize;
                    }
                }
            }
        }
        return 0;
    }

    static std::vector<LootRow*> GetChestLoot()
    {
        std::vector<LootRow*> LootRowSoReal;

        // im gonna be doing everything the way i understand so yeah

        std::map<UFortWeaponItemDefinition*, UFortItemDefinition*> ChestWeaponsDrops;
        ChestWeaponsDrops[StaticLoadObject<UFortWeaponItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_Auto_Athena_C_Ore_T02.WID_Assault_Auto_Athena_C_Ore_T02")] = StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium"); // Common

        std::map<UFortItemDefinition*, int> ChestAmmoDrops;
        ChestAmmoDrops[StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium")] = 10;

        std::map<UFortItemDefinition*, int> ChestConsumableDrops;
        ChestConsumableDrops[StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Consumables/ShieldSmall/Athena_ShieldSmall.Athena_ShieldSmall")] = 3; // Small Shield
        ChestConsumableDrops[StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Consumables/Shields/Athena_Shields.Athena_Shields")] = 1; // Big Shield
        ChestConsumableDrops[StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Consumables/PurpleStuff/Athena_PurpleStuff.Athena_PurpleStuff")] = 1; // Slurp Juice
        ChestConsumableDrops[StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Consumables/Medkit/Athena_Medkit.Athena_Medkit")] = 1; // Med Kit
        ChestConsumableDrops[StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Consumables/SuperMedkit/Athena_SuperMedkit.Athena_SuperMedkit")] = 1; // Chug Jug

        std::map<UFortItemDefinition*, int> ChestMatsDrops;
        // you should know what this is but if you dont i'll label them
        ChestMatsDrops[StaticLoadObject<UFortItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData")] = 30; // This is used for Wood
        ChestMatsDrops[StaticLoadObject<UFortItemDefinition>("/Game/Items/ResourcePickups/StoneItemData.StoneItemData")] = 30; // This is used for Stone/Brick
        ChestMatsDrops[StaticLoadObject<UFortItemDefinition>("/Game/Items/ResourcePickups/MetalItemData.MetalItemData")] = 30; // This is used for Metal

        if (!ChestWeaponsDrops.empty()) // make sure it gets the weapon with the correct ammo
        {
            auto RandomWeapon = GetRandomItem(ChestWeaponsDrops);
            UFortWeaponItemDefinition* WeaponThatWasSelected = RandomWeapon.first;
            UFortItemDefinition* WeaponsAmmo = RandomWeapon.second;

            int ClipSize = GetClipSize(WeaponThatWasSelected, WeaponsAmmo);

            LootRowSoReal.push_back(new LootRow(WeaponThatWasSelected, "Weapon", 1, ClipSize));

            if (WeaponsAmmo && ChestAmmoDrops.find(WeaponsAmmo) != ChestAmmoDrops.end())
            {
                int AmmoCount = ChestAmmoDrops[WeaponsAmmo];
                LootRowSoReal.push_back(new LootRow(WeaponsAmmo, "Ammo", AmmoCount, 0));
            }
        }

        if (!ChestConsumableDrops.empty()) // makes sure it gets the heal
        {
            auto RandomConsumable = GetRandomItem(ChestConsumableDrops);
            LootRowSoReal.push_back(new LootRow(RandomConsumable.first, "Consumable", RandomConsumable.second, 0));
        }

        if (!ChestMatsDrops.empty()) // makes sure it gets the material
        {
            auto RandomMaterial = GetRandomItem(ChestMatsDrops);
            LootRowSoReal.push_back(new LootRow(RandomMaterial.first, "Material", RandomMaterial.second, 0));
        }

        return LootRowSoReal;
    }
};

void SpawnLootFromChest(FVector Location, ABuildingContainer* Container)
{
    auto ChestItems = Looting::GetChestLoot();

    for (const auto& ChestItem : ChestItems)
    {
        int LoadedAmmo = 0;
        if (UFortWeaponItemDefinition* WeaponDefinition = Cast<UFortWeaponItemDefinition>(ChestItem->ItemDefinition))
        {
            // check again just in case -- either way it'll still work
            LoadedAmmo = Looting::GetClipSize(WeaponDefinition, ChestItem->ItemDefinition);
        }

        std::cout << "Spawning Loot: " << ChestItem->Identifier << " | Clip Size: " << LoadedAmmo << " | Count: " << ChestItem->DropCount << std::endl; // just for testing so i can see clip size
        // finally got it working.

        SpawnPickups::SpawnPickup(Location, ChestItem->ItemDefinition, ChestItem->DropCount, LoadedAmmo, EFortPickupSourceTypeFlag::Container, EFortPickupSpawnSource::Unset);
    }
}