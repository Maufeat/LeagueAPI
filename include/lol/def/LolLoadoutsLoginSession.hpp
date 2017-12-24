#pragma once
#include "../base_def.hpp" 
#include "LolLoadoutsLoginSessionStates.hpp"
namespace lol {
  struct LolLoadoutsLoginSession { 
    uint64_t summonerId;
    json gasToken;
    uint64_t accountId;
    std::string idToken;
    LolLoadoutsLoginSessionStates state;
    std::string puuid; 
  };
  inline void to_json(json& j, const LolLoadoutsLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["gasToken"] = v.gasToken; 
    j["accountId"] = v.accountId; 
    j["idToken"] = v.idToken; 
    j["state"] = v.state; 
    j["puuid"] = v.puuid; 
  }
  inline void from_json(const json& j, LolLoadoutsLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.state = j.at("state").get<LolLoadoutsLoginSessionStates>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
  }
}