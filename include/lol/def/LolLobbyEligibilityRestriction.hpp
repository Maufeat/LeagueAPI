#pragma once
#include "../base_def.hpp" 
#include "LolLobbyEligibilityRestrictionCode.hpp"
namespace lol {
  struct LolLobbyEligibilityRestriction { 
    LolLobbyEligibilityRestrictionCode restrictionCode;
    uint64_t expiredTimestamp;
    std::vector<uint64_t> summonerIds;
    std::map<std::string, std::string> restrictionArgs; 
  };
  inline void to_json(json& j, const LolLobbyEligibilityRestriction& v) {
    j["restrictionCode"] = v.restrictionCode; 
    j["expiredTimestamp"] = v.expiredTimestamp; 
    j["summonerIds"] = v.summonerIds; 
    j["restrictionArgs"] = v.restrictionArgs; 
  }
  inline void from_json(const json& j, LolLobbyEligibilityRestriction& v) {
    v.restrictionCode = j.at("restrictionCode").get<LolLobbyEligibilityRestrictionCode>(); 
    v.expiredTimestamp = j.at("expiredTimestamp").get<uint64_t>(); 
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>(); 
    v.restrictionArgs = j.at("restrictionArgs").get<std::map<std::string, std::string>>(); 
  }
}