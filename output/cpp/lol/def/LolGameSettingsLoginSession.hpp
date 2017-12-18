#pragma once
#include "../base_def.hpp" 
#include "LolGameSettingsLoginSessionStates.hpp"
namespace lol {
  struct LolGameSettingsLoginSession { 
    LolGameSettingsLoginSessionStates state;
    uint64_t accountId;
    json gasToken;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolGameSettingsLoginSession& v) {
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["gasToken"] = v.gasToken; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolGameSettingsLoginSession& v) {
    v.state = j.at("state").get<LolGameSettingsLoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}