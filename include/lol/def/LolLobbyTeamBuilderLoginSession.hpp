#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderLoginSessionState.hpp"
namespace lol {
  struct LolLobbyTeamBuilderLoginSession { 
    uint64_t accountId;
    bool connected;
    uint64_t summonerId;
    LolLobbyTeamBuilderLoginSessionState state; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderLoginSession& v) {
    j["accountId"] = v.accountId; 
    j["connected"] = v.connected; 
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.connected = j.at("connected").get<bool>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolLobbyTeamBuilderLoginSessionState>(); 
  }
}