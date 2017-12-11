#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolQueueEligibilityEligibilityRestrictionCode.hpp>

namespace leagueapi {
  struct LolQueueEligibilityEligibilityRestriction { /**/ 
    std::map<std::string, std::string> restrictionArgs;/**/
    std::vector<uint64_t> summonerIds;/**/
    uint64_t expiredTimestamp;/**/
    LolQueueEligibilityEligibilityRestrictionCode restrictionCode;/**/
  };
  static void to_json(json& j, const LolQueueEligibilityEligibilityRestriction& v) { 
    j["restrictionArgs"] = v.restrictionArgs;
    j["summonerIds"] = v.summonerIds;
    j["expiredTimestamp"] = v.expiredTimestamp;
    j["restrictionCode"] = v.restrictionCode;
  }
  static void from_json(const json& j, LolQueueEligibilityEligibilityRestriction& v) { 
    v.restrictionArgs = j.at("restrictionArgs").get<std::map<std::string, std::string>>(); 
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>(); 
    v.expiredTimestamp = j.at("expiredTimestamp").get<uint64_t>(); 
    v.restrictionCode = j.at("restrictionCode").get<LolQueueEligibilityEligibilityRestrictionCode>(); 
  }
} 