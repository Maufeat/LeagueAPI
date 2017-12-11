#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolEndOfGameLoginSessionStates.hpp>

namespace leagueapi {
  struct LolEndOfGameLoginSession { /**/ 
    LolEndOfGameLoginSessionStates state;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LolEndOfGameLoginSession& v) { 
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LolEndOfGameLoginSession& v) { 
    v.state = j.at("state").get<LolEndOfGameLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 