#pragma once
#include "../base_def.hpp" 
#include "LolGameSettingsLoginSessionStates.hpp"
namespace lol {
  struct LolGameSettingsLoginSession { 
    uint64_t summonerId;
    LolGameSettingsLoginSessionStates state;
    json gasToken;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolGameSettingsLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["gasToken"] = v.gasToken; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolGameSettingsLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolGameSettingsLoginSessionStates>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}