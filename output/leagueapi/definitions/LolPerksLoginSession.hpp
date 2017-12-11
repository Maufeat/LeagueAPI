#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolPerksLoginSessionState.hpp>"

namespace leagueapi {
  struct LolPerksLoginSession { /**/ 
    LolPerksLoginSessionState state;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LolPerksLoginSession& v) { 
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LolPerksLoginSession& v) { 
    v.state = j.at("state").get<LolPerksLoginSessionState>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 