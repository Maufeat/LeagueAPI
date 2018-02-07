#pragma once
#include "../base_def.hpp" 
#include "LolLobbyEligibilityRestrictionCode.hpp"
namespace lol {
  struct LolLobbyEligibilityRestriction { 
    LolLobbyEligibilityRestrictionCode restrictionCode;
    std::map<std::string, std::string> restrictionArgs;
    uint64_t expiredTimestamp;
    std::vector<uint64_t> summonerIds; 
  };
  inline void to_json(json& j, const LolLobbyEligibilityRestriction& v) {
    j["restrictionCode"] = v.restrictionCode; 
    j["restrictionArgs"] = v.restrictionArgs; 
    j["expiredTimestamp"] = v.expiredTimestamp; 
    j["summonerIds"] = v.summonerIds; 
  }
  inline void from_json(const json& j, LolLobbyEligibilityRestriction& v) {
    v.restrictionCode = j.at("restrictionCode").get<LolLobbyEligibilityRestrictionCode>(); 
    v.restrictionArgs = j.at("restrictionArgs").get<std::map<std::string, std::string>>(); 
    v.expiredTimestamp = j.at("expiredTimestamp").get<uint64_t>(); 
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>(); 
  }
}