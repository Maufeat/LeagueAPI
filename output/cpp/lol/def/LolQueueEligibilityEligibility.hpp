#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolQueueEligibilityEligibilityRestriction.hpp>
namespace lol {
  struct LolQueueEligibilityEligibility { 
    bool eligible;
    int32_t queueId;
    std::vector<LolQueueEligibilityEligibilityRestriction> restrictions; 
  };
  void to_json(json& j, const LolQueueEligibilityEligibility& v) {
    j["eligible"] = v.eligible; 
    j["queueId"] = v.queueId; 
    j["restrictions"] = v.restrictions; 
  }
  void from_json(const json& j, LolQueueEligibilityEligibility& v) {
    v.eligible = j.at("eligible").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.restrictions = j.at("restrictions").get<std::vector<LolQueueEligibilityEligibilityRestriction>>(); 
  }
}