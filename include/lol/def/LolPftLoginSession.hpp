#pragma once
#include "../base_def.hpp" 
#include "LolPftLoginSessionStates.hpp"
namespace lol {
  struct LolPftLoginSession { 
    LolPftLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId;
    std::string puuid;
    std::string idToken; 
  };
  inline void to_json(json& j, const LolPftLoginSession& v) {
    j["state"] = v.state; 
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
    j["puuid"] = v.puuid; 
    j["idToken"] = v.idToken; 
  }
  inline void from_json(const json& j, LolPftLoginSession& v) {
    v.state = j.at("state").get<LolPftLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
  }
}