#pragma once
#include "../base_def.hpp" 
#include "LoginSessionStates.hpp"
namespace lol {
  struct LoginSession { 
    LoginSessionStates state;
    uint64_t accountId;
    std::string idToken;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LoginSession& v) {
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["idToken"] = v.idToken; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LoginSession& v) {
    v.state = j.at("state").get<LoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}