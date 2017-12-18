#pragma once
#include "../base_def.hpp" 
#include "LolClashThemeVp.hpp"
namespace lol {
  struct LolClashPlayerRewards { 
    int32_t seasonVp;
    std::vector<LolClashThemeVp> themeVp; 
  };
  inline void to_json(json& j, const LolClashPlayerRewards& v) {
    j["seasonVp"] = v.seasonVp; 
    j["themeVp"] = v.themeVp; 
  }
  inline void from_json(const json& j, LolClashPlayerRewards& v) {
    v.seasonVp = j.at("seasonVp").get<int32_t>(); 
    v.themeVp = j.at("themeVp").get<std::vector<LolClashThemeVp>>(); 
  }
}