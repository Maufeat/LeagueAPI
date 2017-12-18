#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPerksUISettings.hpp>
#include <lol/def/LolPerksPerkPageResource.hpp>
namespace lol {
  struct LolPerksPlayerPreferencesSettings { 
    LolPerksUISettings settings;
    std::vector<LolPerksPerkPageResource> pages; 
  };
  inline void to_json(json& j, const LolPerksPlayerPreferencesSettings& v) {
    j["settings"] = v.settings; 
    j["pages"] = v.pages; 
  }
  inline void from_json(const json& j, LolPerksPlayerPreferencesSettings& v) {
    v.settings = j.at("settings").get<LolPerksUISettings>(); 
    v.pages = j.at("pages").get<std::vector<LolPerksPerkPageResource>>(); 
  }
}