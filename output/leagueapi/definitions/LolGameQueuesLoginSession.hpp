#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolGameQueuesLoginSessionStates.hpp>"

namespace leagueapi {
  struct LolGameQueuesLoginSession { /**/ 
    bool connected;/**/
    LolGameQueuesLoginSessionStates state;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LolGameQueuesLoginSession& v) { 
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LolGameQueuesLoginSession& v) { 
    v.connected = j.at("connected").get<bool>(); 
    v.state = j.at("state").get<LolGameQueuesLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 