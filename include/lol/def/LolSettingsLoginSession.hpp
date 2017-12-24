#pragma once
#include "../base_def.hpp" 
#include "LolSettingsLoginSessionStates.hpp"
namespace lol {
  struct LolSettingsLoginSession { 
    uint64_t summonerId;
    LolSettingsLoginSessionStates state;
    json gasToken;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolSettingsLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["gasToken"] = v.gasToken; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolSettingsLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolSettingsLoginSessionStates>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}