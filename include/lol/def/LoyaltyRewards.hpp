#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LoyaltyRewards { 
    int32_t xpBoost;
    int32_t freeRewardedSkinsCount;
    int32_t freeRewardedChampionsCount;
    int32_t ipBoost; 
  };
  inline void to_json(json& j, const LoyaltyRewards& v) {
    j["xpBoost"] = v.xpBoost; 
    j["freeRewardedSkinsCount"] = v.freeRewardedSkinsCount; 
    j["freeRewardedChampionsCount"] = v.freeRewardedChampionsCount; 
    j["ipBoost"] = v.ipBoost; 
  }
  inline void from_json(const json& j, LoyaltyRewards& v) {
    v.xpBoost = j.at("xpBoost").get<int32_t>(); 
    v.freeRewardedSkinsCount = j.at("freeRewardedSkinsCount").get<int32_t>(); 
    v.freeRewardedChampionsCount = j.at("freeRewardedChampionsCount").get<int32_t>(); 
    v.ipBoost = j.at("ipBoost").get<int32_t>(); 
  }
}