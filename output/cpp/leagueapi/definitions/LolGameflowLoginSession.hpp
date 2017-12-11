#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolGameflowLoginSessionStates.hpp>

namespace leagueapi {
  struct LolGameflowLoginSession { /**/ 
    bool connected;/**/
    LolGameflowLoginSessionStates state;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LolGameflowLoginSession& v) { 
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LolGameflowLoginSession& v) { 
    v.connected = j.at("connected").get<bool>(); 
    v.state = j.at("state").get<LolGameflowLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 