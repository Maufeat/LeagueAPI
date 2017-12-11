#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LCDSChampionReward.hpp>"

namespace leagueapi {
  struct LCDSLoyaltyRewards { /**/ 
    int32_t ipBoost;/**/
    std::vector<LCDSChampionReward> champions;/**/
    int32_t xpBoost;/**/
  };
  static void to_json(json& j, const LCDSLoyaltyRewards& v) { 
    j["ipBoost"] = v.ipBoost;
    j["champions"] = v.champions;
    j["xpBoost"] = v.xpBoost;
  }
  static void from_json(const json& j, LCDSLoyaltyRewards& v) { 
    v.ipBoost = j.at("ipBoost").get<int32_t>(); 
    v.champions = j.at("champions").get<std::vector<LCDSChampionReward>>(); 
    v.xpBoost = j.at("xpBoost").get<int32_t>(); 
  }
} 