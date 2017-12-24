#pragma once
#include "../base_def.hpp" 
#include "LolPftLoginSessionStates.hpp"
namespace lol {
  struct LolPftLoginSession { 
    uint64_t summonerId;
    LolPftLoginSessionStates state;
    std::string puuid;
    uint64_t accountId;
    std::string idToken; 
  };
  inline void to_json(json& j, const LolPftLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["puuid"] = v.puuid; 
    j["accountId"] = v.accountId; 
    j["idToken"] = v.idToken; 
  }
  inline void from_json(const json& j, LolPftLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolPftLoginSessionStates>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
  }
}