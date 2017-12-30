#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootGameDataSummonerEmote { 
    std::string name;
    std::string description;
    int64_t id;
    std::string inventoryIcon; 
  };
  inline void to_json(json& j, const LolLootGameDataSummonerEmote& v) {
    j["name"] = v.name; 
    j["description"] = v.description; 
    j["id"] = v.id; 
    j["inventoryIcon"] = v.inventoryIcon; 
  }
  inline void from_json(const json& j, LolLootGameDataSummonerEmote& v) {
    v.name = j.at("name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.inventoryIcon = j.at("inventoryIcon").get<std::string>(); 
  }
}