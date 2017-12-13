#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolGameSettingsLoginSessionStates.hpp>
namespace lol {
  struct LolGameSettingsLoginSession { 
    LolGameSettingsLoginSessionStates state;
    uint64_t summonerId;
    json gasToken;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolGameSettingsLoginSession& v) {
  j["state"] = v.state; 
  j["summonerId"] = v.summonerId; 
  j["gasToken"] = v.gasToken; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolGameSettingsLoginSession& v) {
  v.state = j.at("state").get<LolGameSettingsLoginSessionStates>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.gasToken = j.at("gasToken").get<json>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}