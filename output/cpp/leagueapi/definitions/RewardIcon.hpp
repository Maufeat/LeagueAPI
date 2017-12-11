#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RewardIcon { /**/ 
    int32_t icon;/**/
    int32_t memberOwnedCount;/**/
  };
  static void to_json(json& j, const RewardIcon& v) { 
    j["icon"] = v.icon;
    j["memberOwnedCount"] = v.memberOwnedCount;
  }
  static void from_json(const json& j, RewardIcon& v) { 
    v.icon = j.at("icon").get<int32_t>(); 
    v.memberOwnedCount = j.at("memberOwnedCount").get<int32_t>(); 
  }
} 