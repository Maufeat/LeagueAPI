#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksUISettings { 
    bool gridModeEnabled;
    bool showLongDescriptions;
    bool showPresetPages; 
  };
  inline void to_json(json& j, const LolPerksUISettings& v) {
    j["gridModeEnabled"] = v.gridModeEnabled; 
    j["showLongDescriptions"] = v.showLongDescriptions; 
    j["showPresetPages"] = v.showPresetPages; 
  }
  inline void from_json(const json& j, LolPerksUISettings& v) {
    v.gridModeEnabled = j.at("gridModeEnabled").get<bool>(); 
    v.showLongDescriptions = j.at("showLongDescriptions").get<bool>(); 
    v.showPresetPages = j.at("showPresetPages").get<bool>(); 
  }
}