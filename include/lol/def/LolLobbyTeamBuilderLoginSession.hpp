#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderLoginSessionState.hpp"
namespace lol {
  struct LolLobbyTeamBuilderLoginSession { 
    uint64_t summonerId;
    LolLobbyTeamBuilderLoginSessionState state;
    uint64_t accountId;
    bool connected; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["connected"] = v.connected; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolLobbyTeamBuilderLoginSessionState>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.connected = j.at("connected").get<bool>(); 
  }
}