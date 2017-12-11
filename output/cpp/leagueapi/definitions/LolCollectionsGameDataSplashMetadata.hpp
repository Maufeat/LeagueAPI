#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolCollectionsGameDataSplashMetadata { /**/ 
    std::string OverrideColor;/**/
    std::string CalculatedColor;/**/
  };
  static void to_json(json& j, const LolCollectionsGameDataSplashMetadata& v) { 
    j["OverrideColor"] = v.OverrideColor;
    j["CalculatedColor"] = v.CalculatedColor;
  }
  static void from_json(const json& j, LolCollectionsGameDataSplashMetadata& v) { 
    v.OverrideColor = j.at("OverrideColor").get<std::string>(); 
    v.CalculatedColor = j.at("CalculatedColor").get<std::string>(); 
  }
} 