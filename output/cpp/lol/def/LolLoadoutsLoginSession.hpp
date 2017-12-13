#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLoadoutsLoginSessionStates.hpp>
namespace lol {
  struct LolLoadoutsLoginSession { 
    uint64_t summonerId;
    std::string idToken;
    LolLoadoutsLoginSessionStates state;
    json gasToken;
    std::string puuid;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolLoadoutsLoginSession& v) {
  j["summonerId"] = v.summonerId; 
  j["idToken"] = v.idToken; 
  j["state"] = v.state; 
  j["gasToken"] = v.gasToken; 
  j["puuid"] = v.puuid; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolLoadoutsLoginSession& v) {
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.idToken = j.at("idToken").get<std::string>(); 
  v.state = j.at("state").get<LolLoadoutsLoginSessionStates>(); 
  v.gasToken = j.at("gasToken").get<json>(); 
  v.puuid = j.at("puuid").get<std::string>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}