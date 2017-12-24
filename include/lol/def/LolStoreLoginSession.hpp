#pragma once
#include "../base_def.hpp" 
#include "LolStoreLoginSessionStates.hpp"
namespace lol {
  struct LolStoreLoginSession { 
    uint64_t summonerId;
    LolStoreLoginSessionStates state;
    json gasToken;
    uint64_t accountId;
    std::string idToken; 
  };
  inline void to_json(json& j, const LolStoreLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["gasToken"] = v.gasToken; 
    j["accountId"] = v.accountId; 
    j["idToken"] = v.idToken; 
  }
  inline void from_json(const json& j, LolStoreLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolStoreLoginSessionStates>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
  }
}