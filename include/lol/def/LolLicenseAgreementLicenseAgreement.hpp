#pragma once
#include "../base_def.hpp" 
#include "LolLicenseAgreementLicenseAgreementType.hpp"
namespace lol {
  struct LolLicenseAgreementLicenseAgreement { 
    std::string text;
    LolLicenseAgreementLicenseAgreementType licenseType;
    std::string id; 
  };
  inline void to_json(json& j, const LolLicenseAgreementLicenseAgreement& v) {
    j["text"] = v.text; 
    j["licenseType"] = v.licenseType; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolLicenseAgreementLicenseAgreement& v) {
    v.text = j.at("text").get<std::string>(); 
    v.licenseType = j.at("licenseType").get<LolLicenseAgreementLicenseAgreementType>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}