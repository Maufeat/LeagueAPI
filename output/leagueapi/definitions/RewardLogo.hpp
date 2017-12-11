#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RewardLogo { /**/ 
    int32_t logo;/**/
    int32_t memberOwnedCount;/**/
  };
  static void to_json(json& j, const RewardLogo& v) { 
    j["logo"] = v.logo;
    j["memberOwnedCount"] = v.memberOwnedCount;
  }
  static void from_json(const json& j, RewardLogo& v) { 
    v.logo = j.at("logo").get<int32_t>(); 
    v.memberOwnedCount = j.at("memberOwnedCount").get<int32_t>(); 
  }
} 