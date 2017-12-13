#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LootItemClientDTO { 
    int32_t rentalGames;
    std::string tags;
    std::string upgradeLootName;
    std::string rarity;
    int32_t value;
    int64_t rentalSeconds;
    int64_t expiryTime;
    std::string lootName;
    std::string type;
    std::string displayCategories;
    std::string asset;
    int32_t storeItemId; 
  };
  void to_json(json& j, const LootItemClientDTO& v) {
  j["rentalGames"] = v.rentalGames; 
  j["tags"] = v.tags; 
  j["upgradeLootName"] = v.upgradeLootName; 
  j["rarity"] = v.rarity; 
  j["value"] = v.value; 
  j["rentalSeconds"] = v.rentalSeconds; 
  j["expiryTime"] = v.expiryTime; 
  j["lootName"] = v.lootName; 
  j["type"] = v.type; 
  j["displayCategories"] = v.displayCategories; 
  j["asset"] = v.asset; 
  j["storeItemId"] = v.storeItemId; 
  }
  void from_json(const json& j, LootItemClientDTO& v) {
  v.rentalGames = j.at("rentalGames").get<int32_t>(); 
  v.tags = j.at("tags").get<std::string>(); 
  v.upgradeLootName = j.at("upgradeLootName").get<std::string>(); 
  v.rarity = j.at("rarity").get<std::string>(); 
  v.value = j.at("value").get<int32_t>(); 
  v.rentalSeconds = j.at("rentalSeconds").get<int64_t>(); 
  v.expiryTime = j.at("expiryTime").get<int64_t>(); 
  v.lootName = j.at("lootName").get<std::string>(); 
  v.type = j.at("type").get<std::string>(); 
  v.displayCategories = j.at("displayCategories").get<std::string>(); 
  v.asset = j.at("asset").get<std::string>(); 
  v.storeItemId = j.at("storeItemId").get<int32_t>(); 
  }
}