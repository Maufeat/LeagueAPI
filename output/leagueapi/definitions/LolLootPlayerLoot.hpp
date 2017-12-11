#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLootRedeemableStatus.hpp>"
#include "<leagueapi/definitions/LolLootItemOwnershipStatus.hpp>"

namespace leagueapi {
  struct LolLootPlayerLoot { /**/ 
    std::string localizedDescription;/**/
    std::string disenchantLootName;/**/
    int32_t disenchantValue;/**/
    LolLootRedeemableStatus redeemableStatus;/**/
    std::string upgradeLootName;/**/
    std::string refId;/**/
    std::string lootName;/**/
    std::string shadowPath;/**/
    int64_t rentalSeconds;/**/
    std::string splashPath;/**/
    int32_t count;/**/
    bool isRental;/**/
    std::string tilePath;/**/
    LolLootItemOwnershipStatus parentItemStatus;/**/
    int32_t rentalGames;/**/
    int64_t expiryTime;/**/
    int32_t upgradeEssenceValue;/**/
    std::string tags;/**/
    int32_t parentStoreItemId;/**/
    std::string rarity;/**/
    int32_t value;/**/
    std::string upgradeEssenceName;/**/
    LolLootItemOwnershipStatus itemStatus;/**/
    std::string lootId;/**/
    std::string localizedName;/**/
    std::string displayCategories;/**/
    std::string itemDesc;/**/
    std::string type;/**/
    int32_t storeItemId;/**/
    std::string asset;/**/
    bool isNew;/**/
  };
  static void to_json(json& j, const LolLootPlayerLoot& v) { 
    j["localizedDescription"] = v.localizedDescription;
    j["disenchantLootName"] = v.disenchantLootName;
    j["disenchantValue"] = v.disenchantValue;
    j["redeemableStatus"] = v.redeemableStatus;
    j["upgradeLootName"] = v.upgradeLootName;
    j["refId"] = v.refId;
    j["lootName"] = v.lootName;
    j["shadowPath"] = v.shadowPath;
    j["rentalSeconds"] = v.rentalSeconds;
    j["splashPath"] = v.splashPath;
    j["count"] = v.count;
    j["isRental"] = v.isRental;
    j["tilePath"] = v.tilePath;
    j["parentItemStatus"] = v.parentItemStatus;
    j["rentalGames"] = v.rentalGames;
    j["expiryTime"] = v.expiryTime;
    j["upgradeEssenceValue"] = v.upgradeEssenceValue;
    j["tags"] = v.tags;
    j["parentStoreItemId"] = v.parentStoreItemId;
    j["rarity"] = v.rarity;
    j["value"] = v.value;
    j["upgradeEssenceName"] = v.upgradeEssenceName;
    j["itemStatus"] = v.itemStatus;
    j["lootId"] = v.lootId;
    j["localizedName"] = v.localizedName;
    j["displayCategories"] = v.displayCategories;
    j["itemDesc"] = v.itemDesc;
    j["type"] = v.type;
    j["storeItemId"] = v.storeItemId;
    j["asset"] = v.asset;
    j["isNew"] = v.isNew;
  }
  static void from_json(const json& j, LolLootPlayerLoot& v) { 
    v.localizedDescription = j.at("localizedDescription").get<std::string>(); 
    v.disenchantLootName = j.at("disenchantLootName").get<std::string>(); 
    v.disenchantValue = j.at("disenchantValue").get<int32_t>(); 
    v.redeemableStatus = j.at("redeemableStatus").get<LolLootRedeemableStatus>(); 
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>(); 
    v.refId = j.at("refId").get<std::string>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
    v.shadowPath = j.at("shadowPath").get<std::string>(); 
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    v.count = j.at("count").get<int32_t>(); 
    v.isRental = j.at("isRental").get<bool>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    v.parentItemStatus = j.at("parentItemStatus").get<LolLootItemOwnershipStatus>(); 
    v.rentalGames = j.at("rentalGames").get<int32_t>(); 
    v.expiryTime = j.at("expiryTime").get<int64_t>(); 
    v.upgradeEssenceValue = j.at("upgradeEssenceValue").get<int32_t>(); 
    v.tags = j.at("tags").get<std::string>(); 
    v.parentStoreItemId = j.at("parentStoreItemId").get<int32_t>(); 
    v.rarity = j.at("rarity").get<std::string>(); 
    v.value = j.at("value").get<int32_t>(); 
    v.upgradeEssenceName = j.at("upgradeEssenceName").get<std::string>(); 
    v.itemStatus = j.at("itemStatus").get<LolLootItemOwnershipStatus>(); 
    v.lootId = j.at("lootId").get<std::string>(); 
    v.localizedName = j.at("localizedName").get<std::string>(); 
    v.displayCategories = j.at("displayCategories").get<std::string>(); 
    v.itemDesc = j.at("itemDesc").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.storeItemId = j.at("storeItemId").get<int32_t>(); 
    v.asset = j.at("asset").get<std::string>(); 
    v.isNew = j.at("isNew").get<bool>(); 
  }
} 