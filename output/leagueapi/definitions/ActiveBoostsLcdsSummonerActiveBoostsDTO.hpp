#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ActiveBoostsLcdsSummonerActiveBoostsDTO { /**/ 
    uint32_t ipLoyaltyBoost;/**/
    uint64_t summonerId;/**/
    uint32_t ipBoostPerWinCount;/**/
    int64_t ipBoostEndDate;/**/
    uint32_t xpBoostPerWinCount;/**/
    uint32_t xpLoyaltyBoost;/**/
    int64_t xpBoostEndDate;/**/
  };
  static void to_json(json& j, const ActiveBoostsLcdsSummonerActiveBoostsDTO& v) { 
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost;
    j["summonerId"] = v.summonerId;
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount;
    j["ipBoostEndDate"] = v.ipBoostEndDate;
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount;
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost;
    j["xpBoostEndDate"] = v.xpBoostEndDate;
  }
  static void from_json(const json& j, ActiveBoostsLcdsSummonerActiveBoostsDTO& v) { 
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t>(); 
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<int64_t>(); 
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t>(); 
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t>(); 
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<int64_t>(); 
  }
} 