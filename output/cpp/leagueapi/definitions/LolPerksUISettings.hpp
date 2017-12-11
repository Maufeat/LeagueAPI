#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPerksUISettings { /**/ 
    bool showPresetPages;/**/
    bool showLongDescriptions;/**/
    bool gridModeEnabled;/**/
  };
  static void to_json(json& j, const LolPerksUISettings& v) { 
    j["showPresetPages"] = v.showPresetPages;
    j["showLongDescriptions"] = v.showLongDescriptions;
    j["gridModeEnabled"] = v.gridModeEnabled;
  }
  static void from_json(const json& j, LolPerksUISettings& v) { 
    v.showPresetPages = j.at("showPresetPages").get<bool>(); 
    v.showLongDescriptions = j.at("showLongDescriptions").get<bool>(); 
    v.gridModeEnabled = j.at("gridModeEnabled").get<bool>(); 
  }
} 