#pragma once
#include "../base_def.hpp" 
#include "LolGameQueuesLoginSessionStates.hpp"
namespace lol {
  struct LolGameQueuesLoginSession { 
    LolGameQueuesLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId;
    bool connected; 
  };
  inline void to_json(json& j, const LolGameQueuesLoginSession& v) {
    j["state"] = v.state; 
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
    j["connected"] = v.connected; 
  }
  inline void from_json(const json& j, LolGameQueuesLoginSession& v) {
    v.state = j.at("state").get<LolGameQueuesLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.connected = j.at("connected").get<bool>(); 
  }
}