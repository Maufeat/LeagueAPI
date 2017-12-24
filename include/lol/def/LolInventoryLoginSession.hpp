#pragma once
#include "../base_def.hpp" 
#include "LolInventoryLoginSessionStates.hpp"
namespace lol {
  struct LolInventoryLoginSession { 
    uint64_t summonerId;
    json gasToken;
    uint64_t accountId;
    std::string idToken;
    LolInventoryLoginSessionStates state;
    std::string puuid; 
  };
  inline void to_json(json& j, const LolInventoryLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["gasToken"] = v.gasToken; 
    j["accountId"] = v.accountId; 
    j["idToken"] = v.idToken; 
    j["state"] = v.state; 
    j["puuid"] = v.puuid; 
  }
  inline void from_json(const json& j, LolInventoryLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.state = j.at("state").get<LolInventoryLoginSessionStates>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
  }
}