#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolChampSelectLegacyLoginSessionStates.hpp>"

namespace leagueapi {
  struct LolChampSelectLegacyLoginSession { /**/ 
    bool connected;/**/
    LolChampSelectLegacyLoginSessionStates state;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LolChampSelectLegacyLoginSession& v) { 
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LolChampSelectLegacyLoginSession& v) { 
    v.connected = j.at("connected").get<bool>(); 
    v.state = j.at("state").get<LolChampSelectLegacyLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 