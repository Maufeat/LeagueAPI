#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolSettingsLoginSessionStates.hpp>
namespace lol {
  struct LolSettingsLoginSession { 
    LolSettingsLoginSessionStates state;
    uint64_t summonerId;
    json gasToken;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolSettingsLoginSession& v) {
  j["state"] = v.state; 
  j["summonerId"] = v.summonerId; 
  j["gasToken"] = v.gasToken; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolSettingsLoginSession& v) {
  v.state = j.at("state").get<LolSettingsLoginSessionStates>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.gasToken = j.at("gasToken").get<json>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}