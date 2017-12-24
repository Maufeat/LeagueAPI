#pragma once
#include "../base_def.hpp" 
#include "LolAcsLoginSessionStates.hpp"
namespace lol {
  struct LolAcsLoginSession { 
    uint64_t summonerId;
    LolAcsLoginSessionStates state;
    json gasToken;
    uint64_t accountId;
    std::string idToken; 
  };
  inline void to_json(json& j, const LolAcsLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["gasToken"] = v.gasToken; 
    j["accountId"] = v.accountId; 
    j["idToken"] = v.idToken; 
  }
  inline void from_json(const json& j, LolAcsLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolAcsLoginSessionStates>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
  }
}