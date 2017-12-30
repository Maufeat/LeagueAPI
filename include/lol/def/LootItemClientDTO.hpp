#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LootItemClientDTO { 
    std::string lootName;
    int32_t rentalGames;
    std::string tags;
    std::string type;
    int64_t rentalSeconds;
    std::string upgradeLootName;
    std::string rarity;
    int64_t expiryTime;
    int32_t value;
    int32_t storeItemId;
    std::string asset;
    std::string displayCategories; 
  };
  inline void to_json(json& j, const LootItemClientDTO& v) {
    j["lootName"] = v.lootName; 
    j["rentalGames"] = v.rentalGames; 
    j["tags"] = v.tags; 
    j["type"] = v.type; 
    j["rentalSeconds"] = v.rentalSeconds; 
    j["upgradeLootName"] = v.upgradeLootName; 
    j["rarity"] = v.rarity; 
    j["expiryTime"] = v.expiryTime; 
    j["value"] = v.value; 
    j["storeItemId"] = v.storeItemId; 
    j["asset"] = v.asset; 
    j["displayCategories"] = v.displayCategories; 
  }
  inline void from_json(const json& j, LootItemClientDTO& v) {
    v.lootName = j.at("lootName").get<std::string>(); 
    v.rentalGames = j.at("rentalGames").get<int32_t>(); 
    v.tags = j.at("tags").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.rentalSeconds = j.at("rentalSeconds").get<int64_t>(); 
    v.upgradeLootName = j.at("upgradeLootName").get<std::string>(); 
    v.rarity = j.at("rarity").get<std::string>(); 
    v.expiryTime = j.at("expiryTime").get<int64_t>(); 
    v.value = j.at("value").get<int32_t>(); 
    v.storeItemId = j.at("storeItemId").get<int32_t>(); 
    v.asset = j.at("asset").get<std::string>(); 
    v.displayCategories = j.at("displayCategories").get<std::string>(); 
  }
}