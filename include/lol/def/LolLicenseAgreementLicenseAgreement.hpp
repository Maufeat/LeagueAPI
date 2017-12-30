#pragma once
#include "../base_def.hpp" 
#include "LolLicenseAgreementLicenseAgreementType.hpp"
namespace lol {
  struct LolLicenseAgreementLicenseAgreement { 
    std::string id;
    LolLicenseAgreementLicenseAgreementType licenseType;
    std::string text; 
  };
  inline void to_json(json& j, const LolLicenseAgreementLicenseAgreement& v) {
    j["id"] = v.id; 
    j["licenseType"] = v.licenseType; 
    j["text"] = v.text; 
  }
  inline void from_json(const json& j, LolLicenseAgreementLicenseAgreement& v) {
    v.id = j.at("id").get<std::string>(); 
    v.licenseType = j.at("licenseType").get<LolLicenseAgreementLicenseAgreementType>(); 
    v.text = j.at("text").get<std::string>(); 
  }
}