#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClashThemeVp { /**/ 
    int32_t themeId;/**/
    int32_t vp;/**/
  };
  static void to_json(json& j, const LolClashThemeVp& v) { 
    j["themeId"] = v.themeId;
    j["vp"] = v.vp;
  }
  static void from_json(const json& j, LolClashThemeVp& v) { 
    v.themeId = j.at("themeId").get<int32_t>(); 
    v.vp = j.at("vp").get<int32_t>(); 
  }
} 