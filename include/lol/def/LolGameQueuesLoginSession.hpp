#pragma once
#include "../base_def.hpp" 
#include "LolGameQueuesLoginSessionStates.hpp"
namespace lol {
  struct LolGameQueuesLoginSession { 
    uint64_t summonerId;
    LolGameQueuesLoginSessionStates state;
    uint64_t accountId;
    bool connected; 
  };
  inline void to_json(json& j, const LolGameQueuesLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["connected"] = v.connected; 
  }
  inline void from_json(const json& j, LolGameQueuesLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolGameQueuesLoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.connected = j.at("connected").get<bool>(); 
  }
}