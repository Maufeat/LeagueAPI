#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolClashThemeVp.hpp>

namespace leagueapi {
  struct LolClashPlayerRewards { /**/ 
    std::vector<LolClashThemeVp> themeVp;/**/
    int32_t seasonVp;/**/
  };
  static void to_json(json& j, const LolClashPlayerRewards& v) { 
    j["themeVp"] = v.themeVp;
    j["seasonVp"] = v.seasonVp;
  }
  static void from_json(const json& j, LolClashPlayerRewards& v) { 
    v.themeVp = j.at("themeVp").get<std::vector<LolClashThemeVp>>(); 
    v.seasonVp = j.at("seasonVp").get<int32_t>(); 
  }
} 