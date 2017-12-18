#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLootGameDataSummonerEmote { 
    std::string description;
    std::string name;
    std::string inventoryIcon;
    int64_t id; 
  };
  inline void to_json(json& j, const LolLootGameDataSummonerEmote& v) {
    j["description"] = v.description; 
    j["name"] = v.name; 
    j["inventoryIcon"] = v.inventoryIcon; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolLootGameDataSummonerEmote& v) {
    v.description = j.at("description").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.inventoryIcon = j.at("inventoryIcon").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
}