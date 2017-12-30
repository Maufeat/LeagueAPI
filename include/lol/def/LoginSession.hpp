#pragma once
#include "../base_def.hpp" 
#include "LoginSessionStates.hpp"
namespace lol {
  struct LoginSession { 
    uint64_t accountId;
    uint64_t summonerId;
    std::string idToken;
    LoginSessionStates state; 
  };
  inline void to_json(json& j, const LoginSession& v) {
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["idToken"] = v.idToken; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.state = j.at("state").get<LoginSessionStates>(); 
  }
}