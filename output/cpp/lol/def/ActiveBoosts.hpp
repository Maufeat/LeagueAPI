#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ActiveBoosts { 
    uint32_t ipBoostPerWinCount;
    uint32_t xpBoostPerWinCount;
    std::string xpBoostEndDate;
    uint32_t xpLoyaltyBoost;
    std::string ipBoostEndDate;
    uint32_t ipLoyaltyBoost;
    std::string firstWinOfTheDayStartTime;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const ActiveBoosts& v) {
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount; 
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount; 
    j["xpBoostEndDate"] = v.xpBoostEndDate; 
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost; 
    j["ipBoostEndDate"] = v.ipBoostEndDate; 
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost; 
    j["firstWinOfTheDayStartTime"] = v.firstWinOfTheDayStartTime; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, ActiveBoosts& v) {
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t>(); 
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t>(); 
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<std::string>(); 
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t>(); 
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<std::string>(); 
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t>(); 
    v.firstWinOfTheDayStartTime = j.at("firstWinOfTheDayStartTime").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}