#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyEligibilityRestrictionCode.hpp>"

namespace leagueapi {
  struct LolLobbyEligibilityRestriction { /**/ 
    std::map<std::string, std::string> restrictionArgs;/**/
    std::vector<uint64_t> summonerIds;/**/
    uint64_t expiredTimestamp;/**/
    LolLobbyEligibilityRestrictionCode restrictionCode;/**/
  };
  static void to_json(json& j, const LolLobbyEligibilityRestriction& v) { 
    j["restrictionArgs"] = v.restrictionArgs;
    j["summonerIds"] = v.summonerIds;
    j["expiredTimestamp"] = v.expiredTimestamp;
    j["restrictionCode"] = v.restrictionCode;
  }
  static void from_json(const json& j, LolLobbyEligibilityRestriction& v) { 
    v.restrictionArgs = j.at("restrictionArgs").get<std::map<std::string, std::string>>(); 
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>(); 
    v.expiredTimestamp = j.at("expiredTimestamp").get<uint64_t>(); 
    v.restrictionCode = j.at("restrictionCode").get<LolLobbyEligibilityRestrictionCode>(); 
  }
} 