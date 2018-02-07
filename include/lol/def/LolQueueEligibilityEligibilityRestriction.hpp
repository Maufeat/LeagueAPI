#pragma once
#include "../base_def.hpp" 
#include "LolQueueEligibilityEligibilityRestrictionCode.hpp"
namespace lol {
  struct LolQueueEligibilityEligibilityRestriction { 
    LolQueueEligibilityEligibilityRestrictionCode restrictionCode;
    std::map<std::string, std::string> restrictionArgs;
    uint64_t expiredTimestamp;
    std::vector<uint64_t> summonerIds; 
  };
  inline void to_json(json& j, const LolQueueEligibilityEligibilityRestriction& v) {
    j["restrictionCode"] = v.restrictionCode; 
    j["restrictionArgs"] = v.restrictionArgs; 
    j["expiredTimestamp"] = v.expiredTimestamp; 
    j["summonerIds"] = v.summonerIds; 
  }
  inline void from_json(const json& j, LolQueueEligibilityEligibilityRestriction& v) {
    v.restrictionCode = j.at("restrictionCode").get<LolQueueEligibilityEligibilityRestrictionCode>(); 
    v.restrictionArgs = j.at("restrictionArgs").get<std::map<std::string, std::string>>(); 
    v.expiredTimestamp = j.at("expiredTimestamp").get<uint64_t>(); 
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>(); 
  }
}