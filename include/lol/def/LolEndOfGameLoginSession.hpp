#pragma once
#include "../base_def.hpp" 
#include "LolEndOfGameLoginSessionStates.hpp"
namespace lol {
  struct LolEndOfGameLoginSession { 
    LolEndOfGameLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolEndOfGameLoginSession& v) {
    j["state"] = v.state; 
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolEndOfGameLoginSession& v) {
    v.state = j.at("state").get<LolEndOfGameLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}