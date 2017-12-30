#pragma once
#include "../base_def.hpp" 
#include "LolPftLoginSessionStates.hpp"
namespace lol {
  struct LolPftLoginSession { 
    uint64_t accountId;
    std::string puuid;
    uint64_t summonerId;
    std::string idToken;
    LolPftLoginSessionStates state; 
  };
  inline void to_json(json& j, const LolPftLoginSession& v) {
    j["accountId"] = v.accountId; 
    j["puuid"] = v.puuid; 
    j["summonerId"] = v.summonerId; 
    j["idToken"] = v.idToken; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolPftLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.state = j.at("state").get<LolPftLoginSessionStates>(); 
  }
}