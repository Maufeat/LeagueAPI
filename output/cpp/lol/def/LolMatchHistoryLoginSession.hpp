#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryLoginSessionStates.hpp"
namespace lol {
  struct LolMatchHistoryLoginSession { 
    LolMatchHistoryLoginSessionStates state;
    uint64_t accountId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolMatchHistoryLoginSession& v) {
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolMatchHistoryLoginSession& v) {
    v.state = j.at("state").get<LolMatchHistoryLoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}