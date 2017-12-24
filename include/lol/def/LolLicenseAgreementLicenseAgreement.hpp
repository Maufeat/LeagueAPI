#pragma once
#include "../base_def.hpp" 
#include "LolLicenseAgreementLicenseAgreementType.hpp"
namespace lol {
  struct LolLicenseAgreementLicenseAgreement { 
    std::string id;
    std::string text;
    LolLicenseAgreementLicenseAgreementType licenseType; 
  };
  inline void to_json(json& j, const LolLicenseAgreementLicenseAgreement& v) {
    j["id"] = v.id; 
    j["text"] = v.text; 
    j["licenseType"] = v.licenseType; 
  }
  inline void from_json(const json& j, LolLicenseAgreementLicenseAgreement& v) {
    v.id = j.at("id").get<std::string>(); 
    v.text = j.at("text").get<std::string>(); 
    v.licenseType = j.at("licenseType").get<LolLicenseAgreementLicenseAgreementType>(); 
  }
}