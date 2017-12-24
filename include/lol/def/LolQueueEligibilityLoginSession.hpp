#pragma once
#include "../base_def.hpp" 
#include "LolQueueEligibilityLoginSessionStates.hpp"
namespace lol {
  struct LolQueueEligibilityLoginSession { 
    uint64_t summonerId;
    LolQueueEligibilityLoginSessionStates state;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolQueueEligibilityLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolQueueEligibilityLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolQueueEligibilityLoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}