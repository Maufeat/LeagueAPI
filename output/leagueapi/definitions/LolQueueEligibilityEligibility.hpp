#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolQueueEligibilityEligibilityRestriction.hpp>"

namespace leagueapi {
  struct LolQueueEligibilityEligibility { /**/ 
    int32_t queueId;/**/
    std::vector<LolQueueEligibilityEligibilityRestriction> restrictions;/**/
    bool eligible;/**/
  };
  static void to_json(json& j, const LolQueueEligibilityEligibility& v) { 
    j["queueId"] = v.queueId;
    j["restrictions"] = v.restrictions;
    j["eligible"] = v.eligible;
  }
  static void from_json(const json& j, LolQueueEligibilityEligibility& v) { 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.restrictions = j.at("restrictions").get<std::vector<LolQueueEligibilityEligibilityRestriction>>(); 
    v.eligible = j.at("eligible").get<bool>(); 
  }
} 