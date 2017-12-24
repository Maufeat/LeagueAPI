#pragma once
#include "../base_def.hpp" 
#include "LolPersonalizedOffersLoginSessionStates.hpp"
namespace lol {
  struct LolPersonalizedOffersLoginSession { 
    uint64_t summonerId;
    LolPersonalizedOffersLoginSessionStates state;
    json gasToken;
    uint64_t accountId;
    std::string idToken; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["gasToken"] = v.gasToken; 
    j["accountId"] = v.accountId; 
    j["idToken"] = v.idToken; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolPersonalizedOffersLoginSessionStates>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
  }
}