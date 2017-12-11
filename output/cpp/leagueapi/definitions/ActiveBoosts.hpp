#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ActiveBoosts { /**/ 
    uint32_t ipLoyaltyBoost;/**/
    uint64_t summonerId;/**/
    uint32_t ipBoostPerWinCount;/**/
    std::string ipBoostEndDate;/**/
    uint32_t xpBoostPerWinCount;/**/
    uint32_t xpLoyaltyBoost;/**/
    std::string firstWinOfTheDayStartTime;/**/
    std::string xpBoostEndDate;/**/
  };
  static void to_json(json& j, const ActiveBoosts& v) { 
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost;
    j["summonerId"] = v.summonerId;
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount;
    j["ipBoostEndDate"] = v.ipBoostEndDate;
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount;
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost;
    j["firstWinOfTheDayStartTime"] = v.firstWinOfTheDayStartTime;
    j["xpBoostEndDate"] = v.xpBoostEndDate;
  }
  static void from_json(const json& j, ActiveBoosts& v) { 
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t>(); 
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<std::string>(); 
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t>(); 
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t>(); 
    v.firstWinOfTheDayStartTime = j.at("firstWinOfTheDayStartTime").get<std::string>(); 
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<std::string>(); 
  }
} 