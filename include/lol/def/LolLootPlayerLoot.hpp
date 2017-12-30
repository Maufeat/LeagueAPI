#pragma once
#include "../base_def.hpp" 
#include "LolLootRedeemableStatus.hpp"
#include "LolLootItemOwnershipStatus.hpp"
namespace lol {
  struct LolLootPlayerLoot { 
    std::string refId;
    LolLootItemOwnershipStatus itemStatus;
    std::string tags;
    int32_t parentStoreItemId;
    std::string type;
    bool isRental;
    LolLootItemOwnershipStatus parentItemStatus;
    int64_t expiryTime;
    std::string disenchantLootName;
    int32_t disenchantValue;
    std::string tilePath;
    int32_t value;
    int32_t rentalGames;
    std::string upgradeLootName;
    std::string localizedDescription;
    int32_t count;
    std::string upgradeEssenceName;
    std::string splashPath;
    std::string localizedName;
    int32_t upgradeEssenceValue;
    std::string lootId;
    int64_t rentalSeconds;
    std::string shadowPath;
    std::string lootName;
    std::string rarity;
    int32_t storeItemId;
    LolLootRedeemableStatus redeemableStatus;
    std::string itemDesc;
    bool isNew;
    std::string asset;
    std::string displayCategories; 
  };
  inline void to_json(json& j, const LolLootPlayerLoot& v) {
    j["refId"] = v.refId; 
    j["itemStatus"] = v.itemStatus; 
    j["tags"] = v.tags; 
    j["parentStoreItemId"] = v.parentStoreItemId; 
    j["type"] = v.type; 
    j["isRental"] = v.isRental; 
    j["parentItemStatus"] = v.parentItemStatus; 
    j["expiryTime"] = v.expiryTime; 
    j["disenchantLootName"] = v.disenchantLootName; 
    j["disenchantValue"] = v.disenchantValue; 
    j["tilePath"] = v.tilePath; 
    j["value"] = v.value; 
    j["rentalGames"] = v.rentalGames; 
    j["upgradeLootName"] = v.upgradeLootName; 
    j["localizedDescription"] = v.localizedDescription; 
    j["count"] = v.count; 
    j["upgradeEssenceName"] = v.upgradeEssenceName; 
    j["splashPath"] = v.splashPath; 
    j["localizedName"] = v.localizedName; 
    j["upgradeEssenceValue"] = v.upgradeEssenceValue; 
    j["lootId"] = v.lootId; 
    j["rentalSeconds"] = v.rentalSeconds; 
    j["shadowPath"] = v.shadowPath; 
    j["lootName"] = v.lootName; 
    j["rarity"] = v.rarity; 
    j["storeItemId"] = v.storeItemId; 
    j["redeemableStatus"] = v.redeemableStatus; 
    j["itemDesc"] = v.itemDesc; 
    j["isNew"] = v.isNew; 
    j["asset"] = v.asset; 
    j["displayCategories"] = v.displayCategories; 
  }
  inline void from_json(const json& j, LolLootPlayerLoot& v) {
    v.refId = j.at("refId").get<std::string>(); 
    v.itemStatus = j.at("itemStatus").get<LolLootItemOwnershipStatus>(); 
    v.tags = j.at("tags").get<std::string>(); 
    v.parentStoreItemId = j.at("parentStoreItemId").get<int32_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.isRental = j.at("isRental").get<bool>(); 
    v.parentItemStatus = j.at("parentItemStatus").get<LolLootItemOwnershipStatus>(); 
    v.expiryTime = j.at("expiryTime").get<int64_t>(); 
    v.disenchantLootName = j.at("disenchantLootName").get<std::string>(); 
    v.disenchantValue = j.at("disenchantValue").get<int32_t>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    v.value = j.at("value").get<int32_t>(); 
    v.rentalGames = j.at("rentalGames").get<int32_t>(); 
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>(); 
    v.localizedDescription = j.at("localizedDescription").get<std::string>(); 
    v.count = j.at("count").get<int32_t>(); 
    v.upgradeEssenceName = j.at("upgradeEssenceName").get<std::string>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    v.localizedName = j.at("localizedName").get<std::string>(); 
    v.upgradeEssenceValue = j.at("upgradeEssenceValue").get<int32_t>(); 
    v.lootId = j.at("lootId").get<std::string>(); 
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>(); 
    v.shadowPath = j.at("shadowPath").get<std::string>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
    v.rarity = j.at("rarity").get<std::string>(); 
    v.storeItemId = j.at("storeItemId").get<int32_t>(); 
    v.redeemableStatus = j.at("redeemableStatus").get<LolLootRedeemableStatus>(); 
    v.itemDesc = j.at("itemDesc").get<std::string>(); 
    v.isNew = j.at("isNew").get<bool>(); 
    v.asset = j.at("asset").get<std::string>(); 
    v.displayCategories = j.at("displayCategories").get<std::string>(); 
  }
}