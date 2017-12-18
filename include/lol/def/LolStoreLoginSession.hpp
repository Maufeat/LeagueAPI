#pragma once
#include "../base_def.hpp" 
#include "LolStoreLoginSessionStates.hpp"
namespace lol {
  struct LolStoreLoginSession { 
    LolStoreLoginSessionStates state;
    uint64_t accountId;
    std::string idToken;
    json gasToken;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolStoreLoginSession& v) {
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["idToken"] = v.idToken; 
    j["gasToken"] = v.gasToken; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolStoreLoginSession& v) {
    v.state = j.at("state").get<LolStoreLoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}