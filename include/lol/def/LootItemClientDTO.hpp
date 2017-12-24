#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LootItemClientDTO { 
    std::string upgradeLootName;
    int64_t expiryTime;
    std::string lootName;
    std::string tags;
    std::string rarity;
    int64_t rentalSeconds;
    int32_t storeItemId;
    int32_t value;
    int32_t rentalGames;
    std::string asset;
    std::string displayCategories;
    std::string type; 
  };
  inline void to_json(json& j, const LootItemClientDTO& v) {
    j["upgradeLootName"] = v.upgradeLootName; 
    j["expiryTime"] = v.expiryTime; 
    j["lootName"] = v.lootName; 
    j["tags"] = v.tags; 
    j["rarity"] = v.rarity; 
    j["rentalSeconds"] = v.rentalSeconds; 
    j["storeItemId"] = v.storeItemId; 
    j["value"] = v.value; 
    j["rentalGames"] = v.rentalGames; 
    j["asset"] = v.asset; 
    j["displayCategories"] = v.displayCategories; 
    j["type"] = v.type; 
  }
  inline void from_json(const json& j, LootItemClientDTO& v) {
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>(); 
    v.expiryTime = j.at("expiryTime").get<int64_t>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
    v.tags = j.at("tags").get<std::string>(); 
    v.rarity = j.at("rarity").get<std::string>(); 
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>(); 
    v.storeItemId = j.at("storeItemId").get<int32_t>(); 
    v.value = j.at("value").get<int32_t>(); 
    v.rentalGames = j.at("rentalGames").get<int32_t>(); 
    v.asset = j.at("asset").get<std::string>(); 
    v.displayCategories = j.at("displayCategories").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
  }
}