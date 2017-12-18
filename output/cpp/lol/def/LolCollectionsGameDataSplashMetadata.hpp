#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolCollectionsGameDataSplashMetadata { 
    std::string CalculatedColor;
    std::string OverrideColor; 
  };
  inline void to_json(json& j, const LolCollectionsGameDataSplashMetadata& v) {
    j["CalculatedColor"] = v.CalculatedColor; 
    j["OverrideColor"] = v.OverrideColor; 
  }
  inline void from_json(const json& j, LolCollectionsGameDataSplashMetadata& v) {
    v.CalculatedColor = j.at("CalculatedColor").get<std::string>(); 
    v.OverrideColor = j.at("OverrideColor").get<std::string>(); 
  }
}