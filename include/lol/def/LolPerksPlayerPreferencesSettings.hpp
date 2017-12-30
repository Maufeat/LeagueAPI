#pragma once
#include "../base_def.hpp" 
#include "LolPerksPerkPageResource.hpp"
#include "LolPerksUISettings.hpp"
namespace lol {
  struct LolPerksPlayerPreferencesSettings { 
    std::vector<LolPerksPerkPageResource> pages;
    LolPerksUISettings settings; 
  };
  inline void to_json(json& j, const LolPerksPlayerPreferencesSettings& v) {
    j["pages"] = v.pages; 
    j["settings"] = v.settings; 
  }
  inline void from_json(const json& j, LolPerksPlayerPreferencesSettings& v) {
    v.pages = j.at("pages").get<std::vector<LolPerksPerkPageResource>>(); 
    v.settings = j.at("settings").get<LolPerksUISettings>(); 
  }
}