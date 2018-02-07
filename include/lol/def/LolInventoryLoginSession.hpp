#pragma once
#include "../base_def.hpp" 
#include "LolInventoryLoginSessionStates.hpp"
namespace lol {
  struct LolInventoryLoginSession { 
    LolInventoryLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId;
    std::string idToken;
    json gasToken;
    std::string puuid; 
  };
  inline void to_json(json& j, const LolInventoryLoginSession& v) {
    j["state"] = v.state; 
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
    j["idToken"] = v.idToken; 
    j["gasToken"] = v.gasToken; 
    j["puuid"] = v.puuid; 
  }
  inline void from_json(const json& j, LolInventoryLoginSession& v) {
    v.state = j.at("state").get<LolInventoryLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
  }
}