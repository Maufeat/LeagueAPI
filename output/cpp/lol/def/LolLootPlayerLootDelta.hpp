#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLootPlayerLoot.hpp>
namespace lol {
  struct LolLootPlayerLootDelta { 
    int32_t deltaCount;
    LolLootPlayerLoot playerLoot; 
  };
  void to_json(json& j, const LolLootPlayerLootDelta& v) {
  j["deltaCount"] = v.deltaCount; 
  j["playerLoot"] = v.playerLoot; 
  }
  void from_json(const json& j, LolLootPlayerLootDelta& v) {
  v.deltaCount = j.at("deltaCount").get<int32_t>(); 
  v.playerLoot = j.at("playerLoot").get<LolLootPlayerLoot>(); 
  }
}