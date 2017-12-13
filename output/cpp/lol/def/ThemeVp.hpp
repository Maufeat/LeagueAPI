#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ThemeVp { 
    int32_t themeVp;
    int32_t themeId; 
  };
  void to_json(json& j, const ThemeVp& v) {
  j["themeVp"] = v.themeVp; 
  j["themeId"] = v.themeId; 
  }
  void from_json(const json& j, ThemeVp& v) {
  v.themeVp = j.at("themeVp").get<int32_t>(); 
  v.themeId = j.at("themeId").get<int32_t>(); 
  }
}