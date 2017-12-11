#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPerksPlatformConfig { /**/ 
    bool PerksEnabled;/**/
  };
  static void to_json(json& j, const LolPerksPlatformConfig& v) { 
    j["PerksEnabled"] = v.PerksEnabled;
  }
  static void from_json(const json& j, LolPerksPlatformConfig& v) { 
    v.PerksEnabled = j.at("PerksEnabled").get<bool>(); 
  }
} 