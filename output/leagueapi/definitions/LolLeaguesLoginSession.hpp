#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLeaguesLoginSessionStates.hpp>"

namespace leagueapi {
  struct LolLeaguesLoginSession { /**/ 
    LolLeaguesLoginSessionStates state;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LolLeaguesLoginSession& v) { 
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LolLeaguesLoginSession& v) { 
    v.state = j.at("state").get<LolLeaguesLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 