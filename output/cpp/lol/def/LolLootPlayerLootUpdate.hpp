#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLootPlayerLootDelta.hpp>
namespace lol {
  struct LolLootPlayerLootUpdate { 
    std::vector<LolLootPlayerLootDelta> removed;
    std::vector<LolLootPlayerLootDelta> added;
    std::vector<LolLootPlayerLootDelta> redeemed; 
  };
  void to_json(json& j, const LolLootPlayerLootUpdate& v) {
  j["removed"] = v.removed; 
  j["added"] = v.added; 
  j["redeemed"] = v.redeemed; 
  }
  void from_json(const json& j, LolLootPlayerLootUpdate& v) {
  v.removed = j.at("removed").get<std::vector<LolLootPlayerLootDelta>>(); 
  v.added = j.at("added").get<std::vector<LolLootPlayerLootDelta>>(); 
  v.redeemed = j.at("redeemed").get<std::vector<LolLootPlayerLootDelta>>(); 
  }
}