#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolHonorV2ProfileInfo { /**/ 
    int32_t checkpoint;/**/
    int32_t honorLevel;/**/
    bool rewardsLocked;/**/
  };
  static void to_json(json& j, const LolHonorV2ProfileInfo& v) { 
    j["checkpoint"] = v.checkpoint;
    j["honorLevel"] = v.honorLevel;
    j["rewardsLocked"] = v.rewardsLocked;
  }
  static void from_json(const json& j, LolHonorV2ProfileInfo& v) { 
    v.checkpoint = j.at("checkpoint").get<int32_t>(); 
    v.honorLevel = j.at("honorLevel").get<int32_t>(); 
    v.rewardsLocked = j.at("rewardsLocked").get<bool>(); 
  }
} 