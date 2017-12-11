#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct HighlightsDynamicConfig { /**/ 
    bool Enabled;/**/
  };
  static void to_json(json& j, const HighlightsDynamicConfig& v) { 
    j["Enabled"] = v.Enabled;
  }
  static void from_json(const json& j, HighlightsDynamicConfig& v) { 
    v.Enabled = j.at("Enabled").get<bool>(); 
  }
} 