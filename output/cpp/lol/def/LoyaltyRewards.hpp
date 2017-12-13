#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LoyaltyRewards { 
    int32_t ipBoost;
    int32_t freeRewardedChampionsCount;
    int32_t xpBoost;
    int32_t freeRewardedSkinsCount; 
  };
  void to_json(json& j, const LoyaltyRewards& v) {
  j["ipBoost"] = v.ipBoost; 
  j["freeRewardedChampionsCount"] = v.freeRewardedChampionsCount; 
  j["xpBoost"] = v.xpBoost; 
  j["freeRewardedSkinsCount"] = v.freeRewardedSkinsCount; 
  }
  void from_json(const json& j, LoyaltyRewards& v) {
  v.ipBoost = j.at("ipBoost").get<int32_t>(); 
  v.freeRewardedChampionsCount = j.at("freeRewardedChampionsCount").get<int32_t>(); 
  v.xpBoost = j.at("xpBoost").get<int32_t>(); 
  v.freeRewardedSkinsCount = j.at("freeRewardedSkinsCount").get<int32_t>(); 
  }
}