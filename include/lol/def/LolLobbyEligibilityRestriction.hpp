#pragma once
#include "../base_def.hpp" 
#include "LolLobbyEligibilityRestrictionCode.hpp"
namespace lol {
  struct LolLobbyEligibilityRestriction { 
    std::map<std::string, std::string> restrictionArgs;
    LolLobbyEligibilityRestrictionCode restrictionCode;
    std::vector<uint64_t> summonerIds;
    uint64_t expiredTimestamp; 
  };
  inline void to_json(json& j, const LolLobbyEligibilityRestriction& v) {
    j["restrictionArgs"] = v.restrictionArgs; 
    j["restrictionCode"] = v.restrictionCode; 
    j["summonerIds"] = v.summonerIds; 
    j["expiredTimestamp"] = v.expiredTimestamp; 
  }
  inline void from_json(const json& j, LolLobbyEligibilityRestriction& v) {
    v.restrictionArgs = j.at("restrictionArgs").get<std::map<std::string, std::string>>(); 
    v.restrictionCode = j.at("restrictionCode").get<LolLobbyEligibilityRestrictionCode>(); 
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>(); 
    v.expiredTimestamp = j.at("expiredTimestamp").get<uint64_t>(); 
  }
}