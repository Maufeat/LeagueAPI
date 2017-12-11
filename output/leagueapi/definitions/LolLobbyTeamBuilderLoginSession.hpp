#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyTeamBuilderLoginSessionState.hpp>"

namespace leagueapi {
  struct LolLobbyTeamBuilderLoginSession { /**/ 
    bool connected;/**/
    LolLobbyTeamBuilderLoginSessionState state;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderLoginSession& v) { 
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderLoginSession& v) { 
    v.connected = j.at("connected").get<bool>(); 
    v.state = j.at("state").get<LolLobbyTeamBuilderLoginSessionState>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 