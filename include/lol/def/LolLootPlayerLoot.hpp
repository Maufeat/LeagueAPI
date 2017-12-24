#pragma once
#include "../base_def.hpp" 
#include "LolLootItemOwnershipStatus.hpp"
#include "LolLootRedeemableStatus.hpp"
namespace lol {
  struct LolLootPlayerLoot { 
    std::string upgradeLootName;
    std::string tags;
    int32_t disenchantValue;
    int32_t rentalGames;
    std::string rarity;
    LolLootItemOwnershipStatus parentItemStatus;
    std::string disenchantLootName;
    std::string upgradeEssenceName;
    std::string localizedDescription;
    std::string lootId;
    LolLootItemOwnershipStatus itemStatus;
    std::string itemDesc;
    std::string displayCategories;
    bool isNew;
    int32_t count;
    std::string type;
    int32_t storeItemId;
    int32_t parentStoreItemId;
    std::string lootName;
    int64_t rentalSeconds;
    std::string refId;
    std::string asset;
    int32_t upgradeEssenceValue;
    std::string tilePath;
    int64_t expiryTime;
    bool isRental;
    int32_t value;
    LolLootRedeemableStatus redeemableStatus;
    std::string localizedName;
    std::string splashPath;
    std::string shadowPath; 
  };
  inline void to_json(json& j, const LolLootPlayerLoot& v) {
    j["upgradeLootName"] = v.upgradeLootName; 
    j["tags"] = v.tags; 
    j["disenchantValue"] = v.disenchantValue; 
    j["rentalGames"] = v.rentalGames; 
    j["rarity"] = v.rarity; 
    j["parentItemStatus"] = v.parentItemStatus; 
    j["disenchantLootName"] = v.disenchantLootName; 
    j["upgradeEssenceName"] = v.upgradeEssenceName; 
    j["localizedDescription"] = v.localizedDescription; 
    j["lootId"] = v.lootId; 
    j["itemStatus"] = v.itemStatus; 
    j["itemDesc"] = v.itemDesc; 
    j["displayCategories"] = v.displayCategories; 
    j["isNew"] = v.isNew; 
    j["count"] = v.count; 
    j["type"] = v.type; 
    j["storeItemId"] = v.storeItemId; 
    j["parentStoreItemId"] = v.parentStoreItemId; 
    j["lootName"] = v.lootName; 
    j["rentalSeconds"] = v.rentalSeconds; 
    j["refId"] = v.refId; 
    j["asset"] = v.asset; 
    j["upgradeEssenceValue"] = v.upgradeEssenceValue; 
    j["tilePath"] = v.tilePath; 
    j["expiryTime"] = v.expiryTime; 
    j["isRental"] = v.isRental; 
    j["value"] = v.value; 
    j["redeemableStatus"] = v.redeemableStatus; 
    j["localizedName"] = v.localizedName; 
    j["splashPath"] = v.splashPath; 
    j["shadowPath"] = v.shadowPath; 
  }
  inline void from_json(const json& j, LolLootPlayerLoot& v) {
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>(); 
    v.tags = j.at("tags").get<std::string>(); 
    v.disenchantValue = j.at("disenchantValue").get<int32_t>(); 
    v.rentalGames = j.at("rentalGames").get<int32_t>(); 
    v.rarity = j.at("rarity").get<std::string>(); 
    v.parentItemStatus = j.at("parentItemStatus").get<LolLootItemOwnershipStatus>(); 
    v.disenchantLootName = j.at("disenchantLootName").get<std::string>(); 
    v.upgradeEssenceName = j.at("upgradeEssenceName").get<std::string>(); 
    v.localizedDescription = j.at("localizedDescription").get<std::string>(); 
    v.lootId = j.at("lootId").get<std::string>(); 
    v.itemStatus = j.at("itemStatus").get<LolLootItemOwnershipStatus>(); 
    v.itemDesc = j.at("itemDesc").get<std::string>(); 
    v.displayCategories = j.at("displayCategories").get<std::string>(); 
    v.isNew = j.at("isNew").get<bool>(); 
    v.count = j.at("count").get<int32_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.storeItemId = j.at("storeItemId").get<int32_t>(); 
    v.parentStoreItemId = j.at("parentStoreItemId").get<int32_t>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>(); 
    v.refId = j.at("refId").get<std::string>(); 
    v.asset = j.at("asset").get<std::string>(); 
    v.upgradeEssenceValue = j.at("upgradeEssenceValue").get<int32_t>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    v.expiryTime = j.at("expiryTime").get<int64_t>(); 
    v.isRental = j.at("isRental").get<bool>(); 
    v.value = j.at("value").get<int32_t>(); 
    v.redeemableStatus = j.at("redeemableStatus").get<LolLootRedeemableStatus>(); 
    v.localizedName = j.at("localizedName").get<std::string>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    v.shadowPath = j.at("shadowPath").get<std::string>(); 
  }
}