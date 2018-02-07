#pragma once
#include "../base_def.hpp" 
#include "LolSettingsLoginSessionStates.hpp"
namespace lol {
  struct LolSettingsLoginSession { 
    LolSettingsLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId;
    json gasToken; 
  };
  inline void to_json(json& j, const LolSettingsLoginSession& v) {
    j["state"] = v.state; 
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
    j["gasToken"] = v.gasToken; 
  }
  inline void from_json(const json& j, LolSettingsLoginSession& v) {
    v.state = j.at("state").get<LolSettingsLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
  }
}