#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLootPlayerLoot.hpp>
namespace lol {
  struct LolLootPlayerLootMap { 
    int64_t version;
    std::map<std::string, LolLootPlayerLoot> playerLoot; 
  };
  void to_json(json& j, const LolLootPlayerLootMap& v) {
    j["version"] = v.version; 
    j["playerLoot"] = v.playerLoot; 
  }
  void from_json(const json& j, LolLootPlayerLootMap& v) {
    v.version = j.at("version").get<int64_t>(); 
    v.playerLoot = j.at("playerLoot").get<std::map<std::string, LolLootPlayerLoot>>(); 
  }
}