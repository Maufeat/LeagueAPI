#pragma once
#include "../base_def.hpp" 
#include "LolQueueEligibilityEligibilityRestrictionCode.hpp"
namespace lol {
  struct LolQueueEligibilityEligibilityRestriction { 
    std::map<std::string, std::string> restrictionArgs;
    LolQueueEligibilityEligibilityRestrictionCode restrictionCode;
    std::vector<uint64_t> summonerIds;
    uint64_t expiredTimestamp; 
  };
  inline void to_json(json& j, const LolQueueEligibilityEligibilityRestriction& v) {
    j["restrictionArgs"] = v.restrictionArgs; 
    j["restrictionCode"] = v.restrictionCode; 
    j["summonerIds"] = v.summonerIds; 
    j["expiredTimestamp"] = v.expiredTimestamp; 
  }
  inline void from_json(const json& j, LolQueueEligibilityEligibilityRestriction& v) {
    v.restrictionArgs = j.at("restrictionArgs").get<std::map<std::string, std::string>>(); 
    v.restrictionCode = j.at("restrictionCode").get<LolQueueEligibilityEligibilityRestrictionCode>(); 
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>(); 
    v.expiredTimestamp = j.at("expiredTimestamp").get<uint64_t>(); 
  }
}