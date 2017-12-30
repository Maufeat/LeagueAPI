#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLicenseAgreementPluginRegionLocaleChangedEvent { 
    std::string locale;
    std::string region; 
  };
  inline void to_json(json& j, const LolLicenseAgreementPluginRegionLocaleChangedEvent& v) {
    j["locale"] = v.locale; 
    j["region"] = v.region; 
  }
  inline void from_json(const json& j, LolLicenseAgreementPluginRegionLocaleChangedEvent& v) {
    v.locale = j.at("locale").get<std::string>(); 
    v.region = j.at("region").get<std::string>(); 
  }
}