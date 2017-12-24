#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ActiveBoosts { 
    uint64_t summonerId;
    uint32_t ipBoostPerWinCount;
    uint32_t xpLoyaltyBoost;
    std::string firstWinOfTheDayStartTime;
    uint32_t ipLoyaltyBoost;
    std::string xpBoostEndDate;
    uint32_t xpBoostPerWinCount;
    std::string ipBoostEndDate; 
  };
  inline void to_json(json& j, const ActiveBoosts& v) {
    j["summonerId"] = v.summonerId; 
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount; 
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost; 
    j["firstWinOfTheDayStartTime"] = v.firstWinOfTheDayStartTime; 
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost; 
    j["xpBoostEndDate"] = v.xpBoostEndDate; 
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount; 
    j["ipBoostEndDate"] = v.ipBoostEndDate; 
  }
  inline void from_json(const json& j, ActiveBoosts& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t>(); 
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t>(); 
    v.firstWinOfTheDayStartTime = j.at("firstWinOfTheDayStartTime").get<std::string>(); 
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t>(); 
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<std::string>(); 
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t>(); 
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<std::string>(); 
  }
}