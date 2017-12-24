#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootGameDataSummonerEmote { 
    int64_t id;
    std::string description;
    std::string inventoryIcon;
    std::string name; 
  };
  inline void to_json(json& j, const LolLootGameDataSummonerEmote& v) {
    j["id"] = v.id; 
    j["description"] = v.description; 
    j["inventoryIcon"] = v.inventoryIcon; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolLootGameDataSummonerEmote& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.inventoryIcon = j.at("inventoryIcon").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}