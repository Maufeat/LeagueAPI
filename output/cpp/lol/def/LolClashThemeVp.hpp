#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClashThemeVp { 
    int32_t themeId;
    int32_t vp; 
  };
  inline void to_json(json& j, const LolClashThemeVp& v) {
    j["themeId"] = v.themeId; 
    j["vp"] = v.vp; 
  }
  inline void from_json(const json& j, LolClashThemeVp& v) {
    v.themeId = j.at("themeId").get<int32_t>(); 
    v.vp = j.at("vp").get<int32_t>(); 
  }
}