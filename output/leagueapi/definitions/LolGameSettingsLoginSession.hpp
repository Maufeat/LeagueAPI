#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolGameSettingsLoginSessionStates.hpp>"

namespace leagueapi {
  struct LolGameSettingsLoginSession { /**/ 
    LolGameSettingsLoginSessionStates state;/**/
    uint64_t summonerId;/**/
    json gasToken;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LolGameSettingsLoginSession& v) { 
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["gasToken"] = v.gasToken;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LolGameSettingsLoginSession& v) { 
    v.state = j.at("state").get<LolGameSettingsLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 