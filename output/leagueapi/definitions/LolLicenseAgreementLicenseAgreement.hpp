#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLicenseAgreementLicenseAgreementType.hpp>"

namespace leagueapi {
  struct LolLicenseAgreementLicenseAgreement { /**/ 
    LolLicenseAgreementLicenseAgreementType licenseType;/**/
    std::string id;/**/
    std::string text;/**/
  };
  static void to_json(json& j, const LolLicenseAgreementLicenseAgreement& v) { 
    j["licenseType"] = v.licenseType;
    j["id"] = v.id;
    j["text"] = v.text;
  }
  static void from_json(const json& j, LolLicenseAgreementLicenseAgreement& v) { 
    v.licenseType = j.at("licenseType").get<LolLicenseAgreementLicenseAgreementType>(); 
    v.id = j.at("id").get<std::string>(); 
    v.text = j.at("text").get<std::string>(); 
  }
} 