#pragma once
#include "../base_def.hpp" 
#include "LolQueueEligibilityEligibilityRestriction.hpp"
namespace lol {
  struct LolQueueEligibilityEligibility { 
    std::vector<LolQueueEligibilityEligibilityRestriction> restrictions;
    int32_t queueId;
    bool eligible; 
  };
  inline void to_json(json& j, const LolQueueEligibilityEligibility& v) {
    j["restrictions"] = v.restrictions; 
    j["queueId"] = v.queueId; 
    j["eligible"] = v.eligible; 
  }
  inline void from_json(const json& j, LolQueueEligibilityEligibility& v) {
    v.restrictions = j.at("restrictions").get<std::vector<LolQueueEligibilityEligibilityRestriction>>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.eligible = j.at("eligible").get<bool>(); 
  }
}