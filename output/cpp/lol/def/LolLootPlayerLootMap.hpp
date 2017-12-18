#pragma once
#include "../base_def.hpp" 
#include "LolLootPlayerLoot.hpp"
namespace lol {
  struct LolLootPlayerLootMap { 
    int64_t version;
    std::map<std::string, LolLootPlayerLoot> playerLoot; 
  };
  inline void to_json(json& j, const LolLootPlayerLootMap& v) {
    j["version"] = v.version; 
    j["playerLoot"] = v.playerLoot; 
  }
  inline void from_json(const json& j, LolLootPlayerLootMap& v) {
    v.version = j.at("version").get<int64_t>(); 
    v.playerLoot = j.at("playerLoot").get<std::map<std::string, LolLootPlayerLoot>>(); 
  }
}