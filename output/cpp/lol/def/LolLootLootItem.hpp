#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLootLootItem { 
    std::string upgradeLootName;
    int32_t storeItemId;
    std::string displayCategories;
    int32_t value;
    std::string tags;
    std::string type;
    std::string lootName;
    int64_t rentalSeconds;
    int64_t expiryTime;
    std::string asset;
    int32_t rentalGames;
    std::string rarity; 
  };
  inline void to_json(json& j, const LolLootLootItem& v) {
    j["upgradeLootName"] = v.upgradeLootName; 
    j["storeItemId"] = v.storeItemId; 
    j["displayCategories"] = v.displayCategories; 
    j["value"] = v.value; 
    j["tags"] = v.tags; 
    j["type"] = v.type; 
    j["lootName"] = v.lootName; 
    j["rentalSeconds"] = v.rentalSeconds; 
    j["expiryTime"] = v.expiryTime; 
    j["asset"] = v.asset; 
    j["rentalGames"] = v.rentalGames; 
    j["rarity"] = v.rarity; 
  }
  inline void from_json(const json& j, LolLootLootItem& v) {
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>(); 
    v.storeItemId = j.at("storeItemId").get<int32_t>(); 
    v.displayCategories = j.at("displayCategories").get<std::string>(); 
    v.value = j.at("value").get<int32_t>(); 
    v.tags = j.at("tags").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>(); 
    v.expiryTime = j.at("expiryTime").get<int64_t>(); 
    v.asset = j.at("asset").get<std::string>(); 
    v.rentalGames = j.at("rentalGames").get<int32_t>(); 
    v.rarity = j.at("rarity").get<std::string>(); 
  }
}