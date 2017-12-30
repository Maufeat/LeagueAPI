#pragma once
#include "../base_def.hpp" 
#include "LolLobbyEligibilityRestrictionCode.hpp"
namespace lol {
  struct LolLobbyEligibilityRestriction { 
    std::vector<uint64_t> summonerIds;
    std::map<std::string, std::string> restrictionArgs;
    uint64_t expiredTimestamp;
    LolLobbyEligibilityRestrictionCode restrictionCode; 
  };
  inline void to_json(json& j, const LolLobbyEligibilityRestriction& v) {
    j["summonerIds"] = v.summonerIds; 
    j["restrictionArgs"] = v.restrictionArgs; 
    j["expiredTimestamp"] = v.expiredTimestamp; 
    j["restrictionCode"] = v.restrictionCode; 
  }
  inline void from_json(const json& j, LolLobbyEligibilityRestriction& v) {
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>(); 
    v.restrictionArgs = j.at("restrictionArgs").get<std::map<std::string, std::string>>(); 
    v.expiredTimestamp = j.at("expiredTimestamp").get<uint64_t>(); 
    v.restrictionCode = j.at("restrictionCode").get<LolLobbyEligibilityRestrictionCode>(); 
  }
}