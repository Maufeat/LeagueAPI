#pragma once
#include "../base_def.hpp" 
#include "LolLootPlayerLootDelta.hpp"
namespace lol {
  struct LolLootPlayerLootUpdate { 
    std::vector<LolLootPlayerLootDelta> added;
    std::vector<LolLootPlayerLootDelta> removed;
    std::vector<LolLootPlayerLootDelta> redeemed; 
  };
  inline void to_json(json& j, const LolLootPlayerLootUpdate& v) {
    j["added"] = v.added; 
    j["removed"] = v.removed; 
    j["redeemed"] = v.redeemed; 
  }
  inline void from_json(const json& j, LolLootPlayerLootUpdate& v) {
    v.added = j.at("added").get<std::vector<LolLootPlayerLootDelta>>(); 
    v.removed = j.at("removed").get<std::vector<LolLootPlayerLootDelta>>(); 
    v.redeemed = j.at("redeemed").get<std::vector<LolLootPlayerLootDelta>>(); 
  }
}