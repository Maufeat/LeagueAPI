#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LoyaltyRewards { /**/ 
    int32_t ipBoost;/**/
    int32_t freeRewardedChampionsCount;/**/
    int32_t xpBoost;/**/
    int32_t freeRewardedSkinsCount;/**/
  };
  static void to_json(json& j, const LoyaltyRewards& v) { 
    j["ipBoost"] = v.ipBoost;
    j["freeRewardedChampionsCount"] = v.freeRewardedChampionsCount;
    j["xpBoost"] = v.xpBoost;
    j["freeRewardedSkinsCount"] = v.freeRewardedSkinsCount;
  }
  static void from_json(const json& j, LoyaltyRewards& v) { 
    v.ipBoost = j.at("ipBoost").get<int32_t>(); 
    v.freeRewardedChampionsCount = j.at("freeRewardedChampionsCount").get<int32_t>(); 
    v.xpBoost = j.at("xpBoost").get<int32_t>(); 
    v.freeRewardedSkinsCount = j.at("freeRewardedSkinsCount").get<int32_t>(); 
  }
} 