#pragma once
#include "../base_def.hpp" 
#include "LolQueueEligibilityEligibilityRestriction.hpp"
namespace lol {
  struct LolQueueEligibilityEligibility { 
    int32_t queueId;
    bool eligible;
    std::vector<LolQueueEligibilityEligibilityRestriction> restrictions; 
  };
  inline void to_json(json& j, const LolQueueEligibilityEligibility& v) {
    j["queueId"] = v.queueId; 
    j["eligible"] = v.eligible; 
    j["restrictions"] = v.restrictions; 
  }
  inline void from_json(const json& j, LolQueueEligibilityEligibility& v) {
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.eligible = j.at("eligible").get<bool>(); 
    v.restrictions = j.at("restrictions").get<std::vector<LolQueueEligibilityEligibilityRestriction>>(); 
  }
}