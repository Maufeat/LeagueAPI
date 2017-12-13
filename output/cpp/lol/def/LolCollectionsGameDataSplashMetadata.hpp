#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolCollectionsGameDataSplashMetadata { 
    std::string OverrideColor;
    std::string CalculatedColor; 
  };
  void to_json(json& j, const LolCollectionsGameDataSplashMetadata& v) {
  j["OverrideColor"] = v.OverrideColor; 
  j["CalculatedColor"] = v.CalculatedColor; 
  }
  void from_json(const json& j, LolCollectionsGameDataSplashMetadata& v) {
  v.OverrideColor = j.at("OverrideColor").get<std::string>(); 
  v.CalculatedColor = j.at("CalculatedColor").get<std::string>(); 
  }
}