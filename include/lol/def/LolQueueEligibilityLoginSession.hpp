#pragma once
#include "../base_def.hpp" 
#include "LolQueueEligibilityLoginSessionStates.hpp"
namespace lol {
  struct LolQueueEligibilityLoginSession { 
    LolQueueEligibilityLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolQueueEligibilityLoginSession& v) {
    j["state"] = v.state; 
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolQueueEligibilityLoginSession& v) {
    v.state = j.at("state").get<LolQueueEligibilityLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}