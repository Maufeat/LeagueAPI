#pragma once
#include "../base_def.hpp" 
#include "LolLootPlayerLoot.hpp"
namespace lol {
  struct LolLootPlayerLootMap { 
    std::map<std::string, LolLootPlayerLoot> playerLoot;
    int64_t version; 
  };
  inline void to_json(json& j, const LolLootPlayerLootMap& v) {
    j["playerLoot"] = v.playerLoot; 
    j["version"] = v.version; 
  }
  inline void from_json(const json& j, LolLootPlayerLootMap& v) {
    v.playerLoot = j.at("playerLoot").get<std::map<std::string, LolLootPlayerLoot>>(); 
    v.version = j.at("version").get<int64_t>(); 
  }
}