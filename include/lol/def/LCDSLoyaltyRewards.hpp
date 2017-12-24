#pragma once
#include "../base_def.hpp" 
#include "LCDSChampionReward.hpp"
namespace lol {
  struct LCDSLoyaltyRewards { 
    std::vector<LCDSChampionReward> champions;
    int32_t xpBoost;
    int32_t ipBoost; 
  };
  inline void to_json(json& j, const LCDSLoyaltyRewards& v) {
    j["champions"] = v.champions; 
    j["xpBoost"] = v.xpBoost; 
    j["ipBoost"] = v.ipBoost; 
  }
  inline void from_json(const json& j, LCDSLoyaltyRewards& v) {
    v.champions = j.at("champions").get<std::vector<LCDSChampionReward>>(); 
    v.xpBoost = j.at("xpBoost").get<int32_t>(); 
    v.ipBoost = j.at("ipBoost").get<int32_t>(); 
  }
}