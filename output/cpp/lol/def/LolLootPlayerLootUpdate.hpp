#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLootPlayerLootDelta.hpp>
namespace lol {
  struct LolLootPlayerLootUpdate { 
    std::vector<LolLootPlayerLootDelta> redeemed;
    std::vector<LolLootPlayerLootDelta> added;
    std::vector<LolLootPlayerLootDelta> removed; 
  };
  void to_json(json& j, const LolLootPlayerLootUpdate& v) {
    j["redeemed"] = v.redeemed; 
    j["added"] = v.added; 
    j["removed"] = v.removed; 
  }
  void from_json(const json& j, LolLootPlayerLootUpdate& v) {
    v.redeemed = j.at("redeemed").get<std::vector<LolLootPlayerLootDelta>>(); 
    v.added = j.at("added").get<std::vector<LolLootPlayerLootDelta>>(); 
    v.removed = j.at("removed").get<std::vector<LolLootPlayerLootDelta>>(); 
  }
}