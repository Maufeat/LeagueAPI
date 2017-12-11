#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolItemSetsLoginSessionStates.hpp>"

namespace leagueapi {
  struct LolItemSetsLoginSession { /**/ 
    LolItemSetsLoginSessionStates state;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LolItemSetsLoginSession& v) { 
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LolItemSetsLoginSession& v) { 
    v.state = j.at("state").get<LolItemSetsLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 