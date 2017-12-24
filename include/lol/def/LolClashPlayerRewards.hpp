#pragma once
#include "../base_def.hpp" 
#include "LolClashThemeVp.hpp"
namespace lol {
  struct LolClashPlayerRewards { 
    std::vector<LolClashThemeVp> themeVp;
    int32_t seasonVp; 
  };
  inline void to_json(json& j, const LolClashPlayerRewards& v) {
    j["themeVp"] = v.themeVp; 
    j["seasonVp"] = v.seasonVp; 
  }
  inline void from_json(const json& j, LolClashPlayerRewards& v) {
    v.themeVp = j.at("themeVp").get<std::vector<LolClashThemeVp>>(); 
    v.seasonVp = j.at("seasonVp").get<int32_t>(); 
  }
}