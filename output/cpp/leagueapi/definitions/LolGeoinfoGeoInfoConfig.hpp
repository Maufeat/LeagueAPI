#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolGeoinfoGeoInfoConfig { /**/ 
    bool Enabled;/**/
  };
  static void to_json(json& j, const LolGeoinfoGeoInfoConfig& v) { 
    j["Enabled"] = v.Enabled;
  }
  static void from_json(const json& j, LolGeoinfoGeoInfoConfig& v) { 
    v.Enabled = j.at("Enabled").get<bool>(); 
  }
} 