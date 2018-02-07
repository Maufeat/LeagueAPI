#pragma once
#include "../base_def.hpp" 
#include "LolGameflowLoginSessionStates.hpp"
namespace lol {
  struct LolGameflowLoginSession { 
    LolGameflowLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId;
    bool connected; 
  };
  inline void to_json(json& j, const LolGameflowLoginSession& v) {
    j["state"] = v.state; 
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
    j["connected"] = v.connected; 
  }
  inline void from_json(const json& j, LolGameflowLoginSession& v) {
    v.state = j.at("state").get<LolGameflowLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.connected = j.at("connected").get<bool>(); 
  }
}