#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPerksUISettings { 
    bool showLongDescriptions;
    bool showPresetPages;
    bool gridModeEnabled; 
  };
  inline void to_json(json& j, const LolPerksUISettings& v) {
    j["showLongDescriptions"] = v.showLongDescriptions; 
    j["showPresetPages"] = v.showPresetPages; 
    j["gridModeEnabled"] = v.gridModeEnabled; 
  }
  inline void from_json(const json& j, LolPerksUISettings& v) {
    v.showLongDescriptions = j.at("showLongDescriptions").get<bool>(); 
    v.showPresetPages = j.at("showPresetPages").get<bool>(); 
    v.gridModeEnabled = j.at("gridModeEnabled").get<bool>(); 
  }
}