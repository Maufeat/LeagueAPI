#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolAcsLoginSessionStates.hpp>
namespace lol {
  struct LolAcsLoginSession { 
    LolAcsLoginSessionStates state;
    std::string idToken;
    uint64_t summonerId;
    json gasToken;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolAcsLoginSession& v) {
  j["state"] = v.state; 
  j["idToken"] = v.idToken; 
  j["summonerId"] = v.summonerId; 
  j["gasToken"] = v.gasToken; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolAcsLoginSession& v) {
  v.state = j.at("state").get<LolAcsLoginSessionStates>(); 
  v.idToken = j.at("idToken").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.gasToken = j.at("gasToken").get<json>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}