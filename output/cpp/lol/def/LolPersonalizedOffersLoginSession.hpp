#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPersonalizedOffersLoginSessionStates.hpp>
namespace lol {
  struct LolPersonalizedOffersLoginSession { 
    LolPersonalizedOffersLoginSessionStates state;
    std::string idToken;
    uint64_t summonerId;
    json gasToken;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolPersonalizedOffersLoginSession& v) {
  j["state"] = v.state; 
  j["idToken"] = v.idToken; 
  j["summonerId"] = v.summonerId; 
  j["gasToken"] = v.gasToken; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolPersonalizedOffersLoginSession& v) {
  v.state = j.at("state").get<LolPersonalizedOffersLoginSessionStates>(); 
  v.idToken = j.at("idToken").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.gasToken = j.at("gasToken").get<json>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}