#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashThemeVp.hpp>
namespace lol {
  struct LolClashPlayerRewards { 
    int32_t seasonVp;
    std::vector<LolClashThemeVp> themeVp; 
  };
  void to_json(json& j, const LolClashPlayerRewards& v) {
  j["seasonVp"] = v.seasonVp; 
  j["themeVp"] = v.themeVp; 
  }
  void from_json(const json& j, LolClashPlayerRewards& v) {
  v.seasonVp = j.at("seasonVp").get<int32_t>(); 
  v.themeVp = j.at("themeVp").get<std::vector<LolClashThemeVp>>(); 
  }
}