#pragma once
#include "../base_def.hpp" 
#include "LolQueueEligibilityLoginSessionStates.hpp"
namespace lol {
  struct LolQueueEligibilityLoginSession { 
    uint64_t accountId;
    uint64_t summonerId;
    LolQueueEligibilityLoginSessionStates state; 
  };
  inline void to_json(json& j, const LolQueueEligibilityLoginSession& v) {
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolQueueEligibilityLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolQueueEligibilityLoginSessionStates>(); 
  }
}