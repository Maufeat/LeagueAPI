#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootGameDataSummonerEmote { 
    int64_t id;
    std::string name;
    std::string inventoryIcon;
    std::string description; 
  };
  inline void to_json(json& j, const LolLootGameDataSummonerEmote& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["inventoryIcon"] = v.inventoryIcon; 
    j["description"] = v.description; 
  }
  inline void from_json(const json& j, LolLootGameDataSummonerEmote& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.inventoryIcon = j.at("inventoryIcon").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
  }
}