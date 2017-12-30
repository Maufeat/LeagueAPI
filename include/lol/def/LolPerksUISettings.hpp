#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksUISettings { 
    bool showLongDescriptions;
    bool gridModeEnabled;
    bool showPresetPages; 
  };
  inline void to_json(json& j, const LolPerksUISettings& v) {
    j["showLongDescriptions"] = v.showLongDescriptions; 
    j["gridModeEnabled"] = v.gridModeEnabled; 
    j["showPresetPages"] = v.showPresetPages; 
  }
  inline void from_json(const json& j, LolPerksUISettings& v) {
    v.showLongDescriptions = j.at("showLongDescriptions").get<bool>(); 
    v.gridModeEnabled = j.at("gridModeEnabled").get<bool>(); 
    v.showPresetPages = j.at("showPresetPages").get<bool>(); 
  }
}