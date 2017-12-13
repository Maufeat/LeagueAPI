#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEmailVerificationRegionLocale { 
    std::string webLanguage;
    std::string webRegion;
    std::string region;
    std::string locale; 
  };
  void to_json(json& j, const LolEmailVerificationRegionLocale& v) {
    j["webLanguage"] = v.webLanguage; 
    j["webRegion"] = v.webRegion; 
    j["region"] = v.region; 
    j["locale"] = v.locale; 
  }
  void from_json(const json& j, LolEmailVerificationRegionLocale& v) {
    v.webLanguage = j.at("webLanguage").get<std::string>(); 
    v.webRegion = j.at("webRegion").get<std::string>(); 
    v.region = j.at("region").get<std::string>(); 
    v.locale = j.at("locale").get<std::string>(); 
  }
}