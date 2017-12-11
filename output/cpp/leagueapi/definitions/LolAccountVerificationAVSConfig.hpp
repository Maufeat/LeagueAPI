#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolAccountVerificationAVSConfig { /**/ 
    bool Enabled;/**/
  };
  static void to_json(json& j, const LolAccountVerificationAVSConfig& v) { 
    j["Enabled"] = v.Enabled;
  }
  static void from_json(const json& j, LolAccountVerificationAVSConfig& v) { 
    v.Enabled = j.at("Enabled").get<bool>(); 
  }
} 