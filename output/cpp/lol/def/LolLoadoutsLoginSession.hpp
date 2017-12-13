#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLoadoutsLoginSessionStates.hpp>
namespace lol {
  struct LolLoadoutsLoginSession { 
    LolLoadoutsLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId;
    std::string idToken;
    json gasToken;
    std::string puuid; 
  };
  void to_json(json& j, const LolLoadoutsLoginSession& v) {
  j["state"] = v.state; 
  j["summonerId"] = v.summonerId; 
  j["accountId"] = v.accountId; 
  j["idToken"] = v.idToken; 
  j["gasToken"] = v.gasToken; 
  j["puuid"] = v.puuid; 
  }
  void from_json(const json& j, LolLoadoutsLoginSession& v) {
  v.state = j.at("state").get<LolLoadoutsLoginSessionStates>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.idToken = j.at("idToken").get<std::string>(); 
  v.gasToken = j.at("gasToken").get<json>(); 
  v.puuid = j.at("puuid").get<std::string>(); 
  }
}