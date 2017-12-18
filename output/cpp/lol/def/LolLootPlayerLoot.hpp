#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLootItemOwnershipStatus.hpp>
#include <lol/def/LolLootRedeemableStatus.hpp>
namespace lol {
  struct LolLootPlayerLoot { 
    bool isRental;
    std::string upgradeLootName;
    std::string displayCategories;
    int32_t count;
    int32_t upgradeEssenceValue;
    std::string disenchantLootName;
    int32_t value;
    std::string localizedName;
    std::string itemDesc;
    LolLootItemOwnershipStatus itemStatus;
    std::string refId;
    std::string tags;
    int64_t expiryTime;
    std::string splashPath;
    LolLootItemOwnershipStatus parentItemStatus;
    int32_t parentStoreItemId;
    int32_t storeItemId;
    int64_t rentalSeconds;
    std::string lootId;
    std::string upgradeEssenceName;
    std::string tilePath;
    std::string localizedDescription;
    bool isNew;
    std::string type;
    std::string lootName;
    LolLootRedeemableStatus redeemableStatus;
    int32_t disenchantValue;
    std::string shadowPath;
    std::string asset;
    int32_t rentalGames;
    std::string rarity; 
  };
  inline void to_json(json& j, const LolLootPlayerLoot& v) {
    j["isRental"] = v.isRental; 
    j["upgradeLootName"] = v.upgradeLootName; 
    j["displayCategories"] = v.displayCategories; 
    j["count"] = v.count; 
    j["upgradeEssenceValue"] = v.upgradeEssenceValue; 
    j["disenchantLootName"] = v.disenchantLootName; 
    j["value"] = v.value; 
    j["localizedName"] = v.localizedName; 
    j["itemDesc"] = v.itemDesc; 
    j["itemStatus"] = v.itemStatus; 
    j["refId"] = v.refId; 
    j["tags"] = v.tags; 
    j["expiryTime"] = v.expiryTime; 
    j["splashPath"] = v.splashPath; 
    j["parentItemStatus"] = v.parentItemStatus; 
    j["parentStoreItemId"] = v.parentStoreItemId; 
    j["storeItemId"] = v.storeItemId; 
    j["rentalSeconds"] = v.rentalSeconds; 
    j["lootId"] = v.lootId; 
    j["upgradeEssenceName"] = v.upgradeEssenceName; 
    j["tilePath"] = v.tilePath; 
    j["localizedDescription"] = v.localizedDescription; 
    j["isNew"] = v.isNew; 
    j["type"] = v.type; 
    j["lootName"] = v.lootName; 
    j["redeemableStatus"] = v.redeemableStatus; 
    j["disenchantValue"] = v.disenchantValue; 
    j["shadowPath"] = v.shadowPath; 
    j["asset"] = v.asset; 
    j["rentalGames"] = v.rentalGames; 
    j["rarity"] = v.rarity; 
  }
  inline void from_json(const json& j, LolLootPlayerLoot& v) {
    v.isRental = j.at("isRental").get<bool>(); 
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>(); 
    v.displayCategories = j.at("displayCategories").get<std::string>(); 
    v.count = j.at("count").get<int32_t>(); 
    v.upgradeEssenceValue = j.at("upgradeEssenceValue").get<int32_t>(); 
    v.disenchantLootName = j.at("disenchantLootName").get<std::string>(); 
    v.value = j.at("value").get<int32_t>(); 
    v.localizedName = j.at("localizedName").get<std::string>(); 
    v.itemDesc = j.at("itemDesc").get<std::string>(); 
    v.itemStatus = j.at("itemStatus").get<LolLootItemOwnershipStatus>(); 
    v.refId = j.at("refId").get<std::string>(); 
    v.tags = j.at("tags").get<std::string>(); 
    v.expiryTime = j.at("expiryTime").get<int64_t>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    v.parentItemStatus = j.at("parentItemStatus").get<LolLootItemOwnershipStatus>(); 
    v.parentStoreItemId = j.at("parentStoreItemId").get<int32_t>(); 
    v.storeItemId = j.at("storeItemId").get<int32_t>(); 
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>(); 
    v.lootId = j.at("lootId").get<std::string>(); 
    v.upgradeEssenceName = j.at("upgradeEssenceName").get<std::string>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    v.localizedDescription = j.at("localizedDescription").get<std::string>(); 
    v.isNew = j.at("isNew").get<bool>(); 
    v.type = j.at("type").get<std::string>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
    v.redeemableStatus = j.at("redeemableStatus").get<LolLootRedeemableStatus>(); 
    v.disenchantValue = j.at("disenchantValue").get<int32_t>(); 
    v.shadowPath = j.at("shadowPath").get<std::string>(); 
    v.asset = j.at("asset").get<std::string>(); 
    v.rentalGames = j.at("rentalGames").get<int32_t>(); 
    v.rarity = j.at("rarity").get<std::string>(); 
  }
}