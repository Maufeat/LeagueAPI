#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolQueueEligibilityLoginSessionStates.hpp>

namespace leagueapi {
  struct LolQueueEligibilityLoginSession { /**/ 
    LolQueueEligibilityLoginSessionStates state;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LolQueueEligibilityLoginSession& v) { 
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LolQueueEligibilityLoginSession& v) { 
    v.state = j.at("state").get<LolQueueEligibilityLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 