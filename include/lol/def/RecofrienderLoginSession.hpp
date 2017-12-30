#pragma once
#include "../base_def.hpp" 
#include "RecofrienderLoginSessionStates.hpp"
namespace lol {
  struct RecofrienderLoginSession { 
    uint64_t accountId;
    json gasToken;
    uint64_t summonerId;
    std::string idToken;
    RecofrienderLoginSessionStates state; 
  };
  inline void to_json(json& j, const RecofrienderLoginSession& v) {
    j["accountId"] = v.accountId; 
    j["gasToken"] = v.gasToken; 
    j["summonerId"] = v.summonerId; 
    j["idToken"] = v.idToken; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, RecofrienderLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.idToken = j.at("idToken").get<std::string>(); 
    v.state = j.at("state").get<RecofrienderLoginSessionStates>(); 
  }
}