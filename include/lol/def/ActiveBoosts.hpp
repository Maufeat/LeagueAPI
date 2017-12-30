#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ActiveBoosts { 
    std::string firstWinOfTheDayStartTime;
    uint32_t xpLoyaltyBoost;
    std::string ipBoostEndDate;
    uint32_t ipBoostPerWinCount;
    uint32_t xpBoostPerWinCount;
    std::string xpBoostEndDate;
    uint64_t summonerId;
    uint32_t ipLoyaltyBoost; 
  };
  inline void to_json(json& j, const ActiveBoosts& v) {
    j["firstWinOfTheDayStartTime"] = v.firstWinOfTheDayStartTime; 
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost; 
    j["ipBoostEndDate"] = v.ipBoostEndDate; 
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount; 
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount; 
    j["xpBoostEndDate"] = v.xpBoostEndDate; 
    j["summonerId"] = v.summonerId; 
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost; 
  }
  inline void from_json(const json& j, ActiveBoosts& v) {
    v.firstWinOfTheDayStartTime = j.at("firstWinOfTheDayStartTime").get<std::string>(); 
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t>(); 
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<std::string>(); 
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t>(); 
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t>(); 
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t>(); 
  }
}