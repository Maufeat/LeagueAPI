#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ActiveBoostsLcdsSummonerActiveBoostsDTO { 
    uint32_t ipBoostPerWinCount;
    uint32_t xpBoostPerWinCount;
    int64_t xpBoostEndDate;
    uint32_t xpLoyaltyBoost;
    int64_t ipBoostEndDate;
    uint32_t ipLoyaltyBoost;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const ActiveBoostsLcdsSummonerActiveBoostsDTO& v) {
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount; 
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount; 
    j["xpBoostEndDate"] = v.xpBoostEndDate; 
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost; 
    j["ipBoostEndDate"] = v.ipBoostEndDate; 
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, ActiveBoostsLcdsSummonerActiveBoostsDTO& v) {
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t>(); 
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t>(); 
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<int64_t>(); 
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t>(); 
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<int64_t>(); 
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}