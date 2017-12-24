#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashThemeVp { 
    int32_t vp;
    int32_t themeId; 
  };
  inline void to_json(json& j, const LolClashThemeVp& v) {
    j["vp"] = v.vp; 
    j["themeId"] = v.themeId; 
  }
  inline void from_json(const json& j, LolClashThemeVp& v) {
    v.vp = j.at("vp").get<int32_t>(); 
    v.themeId = j.at("themeId").get<int32_t>(); 
  }
}