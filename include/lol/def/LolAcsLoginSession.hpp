#pragma once
#include "../base_def.hpp" 
#include "LolAcsLoginSessionStates.hpp"
namespace lol {
  struct LolAcsLoginSession { 
    LolAcsLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId;
    json gasToken;
    std::string idToken; 
  };
  inline void to_json(json& j, const LolAcsLoginSession& v) {
    j["state"] = v.state; 
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
    j["gasToken"] = v.gasToken; 
    j["idToken"] = v.idToken; 
  }
  inline void from_json(const json& j, LolAcsLoginSession& v) {
    v.state = j.at("state").get<LolAcsLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
  }
}