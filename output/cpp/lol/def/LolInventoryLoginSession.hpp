#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolInventoryLoginSessionStates.hpp>
namespace lol {
  struct LolInventoryLoginSession { 
    uint64_t summonerId;
    std::string idToken;
    LolInventoryLoginSessionStates state;
    json gasToken;
    std::string puuid;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolInventoryLoginSession& v) {
  j["summonerId"] = v.summonerId; 
  j["idToken"] = v.idToken; 
  j["state"] = v.state; 
  j["gasToken"] = v.gasToken; 
  j["puuid"] = v.puuid; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolInventoryLoginSession& v) {
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.idToken = j.at("idToken").get<std::string>(); 
  v.state = j.at("state").get<LolInventoryLoginSessionStates>(); 
  v.gasToken = j.at("gasToken").get<json>(); 
  v.puuid = j.at("puuid").get<std::string>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}