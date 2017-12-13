#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPftLoginSessionStates.hpp>
namespace lol {
  struct LolPftLoginSession { 
    LolPftLoginSessionStates state;
    uint64_t accountId;
    std::string idToken;
    std::string puuid;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolPftLoginSession& v) {
  j["state"] = v.state; 
  j["accountId"] = v.accountId; 
  j["idToken"] = v.idToken; 
  j["puuid"] = v.puuid; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolPftLoginSession& v) {
  v.state = j.at("state").get<LolPftLoginSessionStates>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.idToken = j.at("idToken").get<std::string>(); 
  v.puuid = j.at("puuid").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}