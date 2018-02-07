#pragma once
#include "../base_def.hpp" 
#include "LolLootItemOwnershipStatus.hpp"
#include "LolLootRedeemableStatus.hpp"
namespace lol {
  struct LolLootPlayerLoot { 
    std::string lootName;
    std::string lootId;
    std::string refId;
    std::string localizedName;
    std::string localizedDescription;
    std::string itemDesc;
    std::string displayCategories;
    std::string rarity;
    std::string tags;
    std::string type;
    std::string asset;
    std::string tilePath;
    std::string splashPath;
    std::string shadowPath;
    std::string upgradeLootName;
    std::string upgradeEssenceName;
    std::string disenchantLootName;
    LolLootItemOwnershipStatus itemStatus;
    LolLootItemOwnershipStatus parentItemStatus;
    LolLootRedeemableStatus redeemableStatus;
    int32_t count;
    int32_t rentalGames;
    int32_t storeItemId;
    int32_t parentStoreItemId;
    int32_t value;
    int32_t upgradeEssenceValue;
    int32_t disenchantValue;
    int64_t expiryTime;
    int64_t rentalSeconds;
    bool isNew;
    bool isRental; 
  };
  inline void to_json(json& j, const LolLootPlayerLoot& v) {
    j["lootName"] = v.lootName; 
    j["lootId"] = v.lootId; 
    j["refId"] = v.refId; 
    j["localizedName"] = v.localizedName; 
    j["localizedDescription"] = v.localizedDescription; 
    j["itemDesc"] = v.itemDesc; 
    j["displayCategories"] = v.displayCategories; 
    j["rarity"] = v.rarity; 
    j["tags"] = v.tags; 
    j["type"] = v.type; 
    j["asset"] = v.asset; 
    j["tilePath"] = v.tilePath; 
    j["splashPath"] = v.splashPath; 
    j["shadowPath"] = v.shadowPath; 
    j["upgradeLootName"] = v.upgradeLootName; 
    j["upgradeEssenceName"] = v.upgradeEssenceName; 
    j["disenchantLootName"] = v.disenchantLootName; 
    j["itemStatus"] = v.itemStatus; 
    j["parentItemStatus"] = v.parentItemStatus; 
    j["redeemableStatus"] = v.redeemableStatus; 
    j["count"] = v.count; 
    j["rentalGames"] = v.rentalGames; 
    j["storeItemId"] = v.storeItemId; 
    j["parentStoreItemId"] = v.parentStoreItemId; 
    j["value"] = v.value; 
    j["upgradeEssenceValue"] = v.upgradeEssenceValue; 
    j["disenchantValue"] = v.disenchantValue; 
    j["expiryTime"] = v.expiryTime; 
    j["rentalSeconds"] = v.rentalSeconds; 
    j["isNew"] = v.isNew; 
    j["isRental"] = v.isRental; 
  }
  inline void from_json(const json& j, LolLootPlayerLoot& v) {
    v.lootName = j.at("lootName").get<std::string>(); 
    v.lootId = j.at("lootId").get<std::string>(); 
    v.refId = j.at("refId").get<std::string>(); 
    v.localizedName = j.at("localizedName").get<std::string>(); 
    v.localizedDescription = j.at("localizedDescription").get<std::string>(); 
    v.itemDesc = j.at("itemDesc").get<std::string>(); 
    v.displayCategories = j.at("displayCategories").get<std::string>(); 
    v.rarity = j.at("rarity").get<std::string>(); 
    v.tags = j.at("tags").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.asset = j.at("asset").get<std::string>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    v.shadowPath = j.at("shadowPath").get<std::string>(); 
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>(); 
    v.upgradeEssenceName = j.at("upgradeEssenceName").get<std::string>(); 
    v.disenchantLootName = j.at("disenchantLootName").get<std::string>(); 
    v.itemStatus = j.at("itemStatus").get<LolLootItemOwnershipStatus>(); 
    v.parentItemStatus = j.at("parentItemStatus").get<LolLootItemOwnershipStatus>(); 
    v.redeemableStatus = j.at("redeemableStatus").get<LolLootRedeemableStatus>(); 
    v.count = j.at("count").get<int32_t>(); 
    v.rentalGames = j.at("rentalGames").get<int32_t>(); 
    v.storeItemId = j.at("storeItemId").get<int32_t>(); 
    v.parentStoreItemId = j.at("parentStoreItemId").get<int32_t>(); 
    v.value = j.at("value").get<int32_t>(); 
    v.upgradeEssenceValue = j.at("upgradeEssenceValue").get<int32_t>(); 
    v.disenchantValue = j.at("disenchantValue").get<int32_t>(); 
    v.expiryTime = j.at("expiryTime").get<int64_t>(); 
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>(); 
    v.isNew = j.at("isNew").get<bool>(); 
    v.isRental = j.at("isRental").get<bool>(); 
  }
}