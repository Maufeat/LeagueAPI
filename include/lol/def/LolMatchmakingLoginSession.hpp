#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingLoginSessionState.hpp"
namespace lol {
  struct LolMatchmakingLoginSession { 
    LolMatchmakingLoginSessionState state;
    uint64_t summonerId;
    uint64_t accountId;
    bool connected; 
  };
  inline void to_json(json& j, const LolMatchmakingLoginSession& v) {
    j["state"] = v.state; 
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
    j["connected"] = v.connected; 
  }
  inline void from_json(const json& j, LolMatchmakingLoginSession& v) {
    v.state = j.at("state").get<LolMatchmakingLoginSessionState>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.connected = j.at("connected").get<bool>(); 
  }
}