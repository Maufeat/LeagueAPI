#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ThemeVp { 
    int32_t themeId;
    int32_t themeVp; 
  };
  inline void to_json(json& j, const ThemeVp& v) {
    j["themeId"] = v.themeId; 
    j["themeVp"] = v.themeVp; 
  }
  inline void from_json(const json& j, ThemeVp& v) {
    v.themeId = j.at("themeId").get<int32_t>(); 
    v.themeVp = j.at("themeVp").get<int32_t>(); 
  }
}