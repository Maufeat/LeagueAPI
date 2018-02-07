#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootLootItem { 
    std::string lootName;
    std::string asset;
    std::string type;
    std::string rarity;
    int32_t value;
    int32_t storeItemId;
    std::string upgradeLootName;
    int64_t expiryTime;
    std::string tags;
    std::string displayCategories;
    int64_t rentalSeconds;
    int32_t rentalGames; 
  };
  inline void to_json(json& j, const LolLootLootItem& v) {
    j["lootName"] = v.lootName; 
    j["asset"] = v.asset; 
    j["type"] = v.type; 
    j["rarity"] = v.rarity; 
    j["value"] = v.value; 
    j["storeItemId"] = v.storeItemId; 
    j["upgradeLootName"] = v.upgradeLootName; 
    j["expiryTime"] = v.expiryTime; 
    j["tags"] = v.tags; 
    j["displayCategories"] = v.displayCategories; 
    j["rentalSeconds"] = v.rentalSeconds; 
    j["rentalGames"] = v.rentalGames; 
  }
  inline void from_json(const json& j, LolLootLootItem& v) {
    v.lootName = j.at("lootName").get<std::string>(); 
    v.asset = j.at("asset").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.rarity = j.at("rarity").get<std::string>(); 
    v.value = j.at("value").get<int32_t>(); 
    v.storeItemId = j.at("storeItemId").get<int32_t>(); 
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>(); 
    v.expiryTime = j.at("expiryTime").get<int64_t>(); 
    v.tags = j.at("tags").get<std::string>(); 
    v.displayCategories = j.at("displayCategories").get<std::string>(); 
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>(); 
    v.rentalGames = j.at("rentalGames").get<int32_t>(); 
  }
}