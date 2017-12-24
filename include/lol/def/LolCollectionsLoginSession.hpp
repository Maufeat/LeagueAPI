#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsLoginSessionStates.hpp"
namespace lol {
  struct LolCollectionsLoginSession { 
    uint64_t summonerId;
    LolCollectionsLoginSessionStates state;
    uint64_t accountId;
    bool connected; 
  };
  inline void to_json(json& j, const LolCollectionsLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["connected"] = v.connected; 
  }
  inline void from_json(const json& j, LolCollectionsLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolCollectionsLoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.connected = j.at("connected").get<bool>(); 
  }
}