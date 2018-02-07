#pragma once
#include "../base_def.hpp" 
#include "LolPersonalizedOffersLoginSessionStates.hpp"
namespace lol {
  struct LolPersonalizedOffersLoginSession { 
    LolPersonalizedOffersLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId;
    std::string idToken;
    json gasToken; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersLoginSession& v) {
    j["state"] = v.state; 
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
    j["idToken"] = v.idToken; 
    j["gasToken"] = v.gasToken; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersLoginSession& v) {
    v.state = j.at("state").get<LolPersonalizedOffersLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
  }
}