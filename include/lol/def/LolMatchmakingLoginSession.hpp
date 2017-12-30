#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingLoginSessionState.hpp"
namespace lol {
  struct LolMatchmakingLoginSession { 
    uint64_t accountId;
    bool connected;
    uint64_t summonerId;
    LolMatchmakingLoginSessionState state; 
  };
  inline void to_json(json& j, const LolMatchmakingLoginSession& v) {
    j["accountId"] = v.accountId; 
    j["connected"] = v.connected; 
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolMatchmakingLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.connected = j.at("connected").get<bool>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolMatchmakingLoginSessionState>(); 
  }
}