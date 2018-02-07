#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEmailVerificationRegionLocale { 
    std::string region;
    std::string locale;
    std::string webRegion;
    std::string webLanguage; 
  };
  inline void to_json(json& j, const LolEmailVerificationRegionLocale& v) {
    j["region"] = v.region; 
    j["locale"] = v.locale; 
    j["webRegion"] = v.webRegion; 
    j["webLanguage"] = v.webLanguage; 
  }
  inline void from_json(const json& j, LolEmailVerificationRegionLocale& v) {
    v.region = j.at("region").get<std::string>(); 
    v.locale = j.at("locale").get<std::string>(); 
    v.webRegion = j.at("webRegion").get<std::string>(); 
    v.webLanguage = j.at("webLanguage").get<std::string>(); 
  }
}