#pragma once
#include "../base_def.hpp" 
#include "LolLootPlayerLootDelta.hpp"
namespace lol {
  struct LolLootPlayerLootUpdate { 
    std::vector<LolLootPlayerLootDelta> redeemed;
    std::vector<LolLootPlayerLootDelta> removed;
    std::vector<LolLootPlayerLootDelta> added; 
  };
  inline void to_json(json& j, const LolLootPlayerLootUpdate& v) {
    j["redeemed"] = v.redeemed; 
    j["removed"] = v.removed; 
    j["added"] = v.added; 
  }
  inline void from_json(const json& j, LolLootPlayerLootUpdate& v) {
    v.redeemed = j.at("redeemed").get<std::vector<LolLootPlayerLootDelta>>(); 
    v.removed = j.at("removed").get<std::vector<LolLootPlayerLootDelta>>(); 
    v.added = j.at("added").get<std::vector<LolLootPlayerLootDelta>>(); 
  }
}