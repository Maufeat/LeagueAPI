#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolGameQueuesLoginSessionStates.hpp>
namespace lol {
  struct LolGameQueuesLoginSession { 
    bool connected;
    LolGameQueuesLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolGameQueuesLoginSession& v) {
  j["connected"] = v.connected; 
  j["state"] = v.state; 
  j["summonerId"] = v.summonerId; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolGameQueuesLoginSession& v) {
  v.connected = j.at("connected").get<bool>(); 
  v.state = j.at("state").get<LolGameQueuesLoginSessionStates>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}