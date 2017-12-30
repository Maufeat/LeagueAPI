#pragma once
#include "../base_def.hpp" 
#include "LolSettingsLoginSessionStates.hpp"
namespace lol {
  struct LolSettingsLoginSession { 
    uint64_t accountId;
    json gasToken;
    uint64_t summonerId;
    LolSettingsLoginSessionStates state; 
  };
  inline void to_json(json& j, const LolSettingsLoginSession& v) {
    j["accountId"] = v.accountId; 
    j["gasToken"] = v.gasToken; 
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolSettingsLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolSettingsLoginSessionStates>(); 
  }
}