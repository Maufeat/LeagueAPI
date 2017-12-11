#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPerksUISettings.hpp>
#include <leagueapi/definitions/LolPerksPerkPageResource.hpp>

namespace leagueapi {
  struct LolPerksPlayerPreferencesSettings { /**/ 
    LolPerksUISettings settings;/**/
    std::vector<LolPerksPerkPageResource> pages;/**/
  };
  static void to_json(json& j, const LolPerksPlayerPreferencesSettings& v) { 
    j["settings"] = v.settings;
    j["pages"] = v.pages;
  }
  static void from_json(const json& j, LolPerksPlayerPreferencesSettings& v) { 
    v.settings = j.at("settings").get<LolPerksUISettings>(); 
    v.pages = j.at("pages").get<std::vector<LolPerksPerkPageResource>>(); 
  }
} 