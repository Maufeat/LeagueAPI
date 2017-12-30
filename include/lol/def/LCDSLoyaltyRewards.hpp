#pragma once
#include "../base_def.hpp" 
#include "LCDSChampionReward.hpp"
namespace lol {
  struct LCDSLoyaltyRewards { 
    int32_t ipBoost;
    int32_t xpBoost;
    std::vector<LCDSChampionReward> champions; 
  };
  inline void to_json(json& j, const LCDSLoyaltyRewards& v) {
    j["ipBoost"] = v.ipBoost; 
    j["xpBoost"] = v.xpBoost; 
    j["champions"] = v.champions; 
  }
  inline void from_json(const json& j, LCDSLoyaltyRewards& v) {
    v.ipBoost = j.at("ipBoost").get<int32_t>(); 
    v.xpBoost = j.at("xpBoost").get<int32_t>(); 
    v.champions = j.at("champions").get<std::vector<LCDSChampionReward>>(); 
  }
}