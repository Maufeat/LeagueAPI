#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/HighlightsSettingsData.hpp>

namespace leagueapi {
  struct HighlightsSettingsResource { /**/ 
    HighlightsSettingsData data;/**/
  };
  static void to_json(json& j, const HighlightsSettingsResource& v) { 
    j["data"] = v.data;
  }
  static void from_json(const json& j, HighlightsSettingsResource& v) { 
    v.data = j.at("data").get<HighlightsSettingsData>(); 
  }
} 