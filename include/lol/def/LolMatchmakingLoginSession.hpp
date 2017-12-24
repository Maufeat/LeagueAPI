#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingLoginSessionState.hpp"
namespace lol {
  struct LolMatchmakingLoginSession { 
    uint64_t summonerId;
    LolMatchmakingLoginSessionState state;
    uint64_t accountId;
    bool connected; 
  };
  inline void to_json(json& j, const LolMatchmakingLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["connected"] = v.connected; 
  }
  inline void from_json(const json& j, LolMatchmakingLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolMatchmakingLoginSessionState>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.connected = j.at("connected").get<bool>(); 
  }
}