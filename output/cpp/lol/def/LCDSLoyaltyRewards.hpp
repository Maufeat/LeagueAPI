#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LCDSChampionReward.hpp>
namespace lol {
  struct LCDSLoyaltyRewards { 
    std::vector<LCDSChampionReward> champions;
    int32_t ipBoost;
    int32_t xpBoost; 
  };
  void to_json(json& j, const LCDSLoyaltyRewards& v) {
    j["champions"] = v.champions; 
    j["ipBoost"] = v.ipBoost; 
    j["xpBoost"] = v.xpBoost; 
  }
  void from_json(const json& j, LCDSLoyaltyRewards& v) {
    v.champions = j.at("champions").get<std::vector<LCDSChampionReward>>(); 
    v.ipBoost = j.at("ipBoost").get<int32_t>(); 
    v.xpBoost = j.at("xpBoost").get<int32_t>(); 
  }
}