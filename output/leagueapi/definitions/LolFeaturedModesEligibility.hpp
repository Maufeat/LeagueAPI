#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolFeaturedModesEligibility { /**/ 
    int32_t queueId;/**/
    bool eligible;/**/
  };
  static void to_json(json& j, const LolFeaturedModesEligibility& v) { 
    j["queueId"] = v.queueId;
    j["eligible"] = v.eligible;
  }
  static void from_json(const json& j, LolFeaturedModesEligibility& v) { 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.eligible = j.at("eligible").get<bool>(); 
  }
} 