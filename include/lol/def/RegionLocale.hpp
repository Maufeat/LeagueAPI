#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RegionLocale { 
    std::string webLanguage;
    std::string webRegion;
    std::string region;
    std::string locale; 
  };
  inline void to_json(json& j, const RegionLocale& v) {
    j["webLanguage"] = v.webLanguage; 
    j["webRegion"] = v.webRegion; 
    j["region"] = v.region; 
    j["locale"] = v.locale; 
  }
  inline void from_json(const json& j, RegionLocale& v) {
    v.webLanguage = j.at("webLanguage").get<std::string>(); 
    v.webRegion = j.at("webRegion").get<std::string>(); 
    v.region = j.at("region").get<std::string>(); 
    v.locale = j.at("locale").get<std::string>(); 
  }
}