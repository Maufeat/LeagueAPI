#pragma once
#include "../base_def.hpp" 
#include "LolLoadoutsLoginSessionStates.hpp"
namespace lol {
  struct LolLoadoutsLoginSession { 
    std::string idToken;
    LolLoadoutsLoginSessionStates state;
    uint64_t accountId;
    std::string puuid;
    uint64_t summonerId;
    json gasToken; 
  };
  inline void to_json(json& j, const LolLoadoutsLoginSession& v) {
    j["idToken"] = v.idToken; 
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["puuid"] = v.puuid; 
    j["summonerId"] = v.summonerId; 
    j["gasToken"] = v.gasToken; 
  }
  inline void from_json(const json& j, LolLoadoutsLoginSession& v) {
    v.idToken = j.at("idToken").get<std::string>(); 
    v.state = j.at("state").get<LolLoadoutsLoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
  }
}