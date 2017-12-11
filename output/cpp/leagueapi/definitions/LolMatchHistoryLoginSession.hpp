#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolMatchHistoryLoginSessionStates.hpp>

namespace leagueapi {
  struct LolMatchHistoryLoginSession { /**/ 
    LolMatchHistoryLoginSessionStates state;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LolMatchHistoryLoginSession& v) { 
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LolMatchHistoryLoginSession& v) { 
    v.state = j.at("state").get<LolMatchHistoryLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 