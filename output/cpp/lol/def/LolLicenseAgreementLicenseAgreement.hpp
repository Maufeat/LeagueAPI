#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLicenseAgreementLicenseAgreementType.hpp>
namespace lol {
  struct LolLicenseAgreementLicenseAgreement { 
    LolLicenseAgreementLicenseAgreementType licenseType;
    std::string id;
    std::string text; 
  };
  void to_json(json& j, const LolLicenseAgreementLicenseAgreement& v) {
  j["licenseType"] = v.licenseType; 
  j["id"] = v.id; 
  j["text"] = v.text; 
  }
  void from_json(const json& j, LolLicenseAgreementLicenseAgreement& v) {
  v.licenseType = j.at("licenseType").get<LolLicenseAgreementLicenseAgreementType>(); 
  v.id = j.at("id").get<std::string>(); 
  v.text = j.at("text").get<std::string>(); 
  }
}