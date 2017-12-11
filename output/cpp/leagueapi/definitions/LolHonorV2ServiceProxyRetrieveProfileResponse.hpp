#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolHonorV2ServiceProxyRetrieveProfileResponse { /**/ 
    int32_t checkpoint;/**/
    int32_t honorLevel;/**/
    bool rewardsLocked;/**/
  };
  static void to_json(json& j, const LolHonorV2ServiceProxyRetrieveProfileResponse& v) { 
    j["checkpoint"] = v.checkpoint;
    j["honorLevel"] = v.honorLevel;
    j["rewardsLocked"] = v.rewardsLocked;
  }
  static void from_json(const json& j, LolHonorV2ServiceProxyRetrieveProfileResponse& v) { 
    v.checkpoint = j.at("checkpoint").get<int32_t>(); 
    v.honorLevel = j.at("honorLevel").get<int32_t>(); 
    v.rewardsLocked = j.at("rewardsLocked").get<bool>(); 
  }
} 