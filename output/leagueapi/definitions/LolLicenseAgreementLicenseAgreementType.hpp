#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLicenseAgreementLicenseAgreementType { /**/ 
    Eula_e = 0, /**/ 
    TermsOfUse_e = 1, /**/ 
  };
  static void to_json(json& j, const LolLicenseAgreementLicenseAgreementType& v) {
    switch(v) { 
    case LolLicenseAgreementLicenseAgreementType::Eula_e:
      j = "Eula";
    break;
    case LolLicenseAgreementLicenseAgreementType::TermsOfUse_e:
      j = "TermsOfUse";
    break;
    };
  }
  static void from_json(const json& j, LolLicenseAgreementLicenseAgreementType& v) {
    auto s = j.get<std::string>(); 
    if(s == "Eula") {
      v = LolLicenseAgreementLicenseAgreementType::Eula_e;
      return;
    } 
    if(s == "TermsOfUse") {
      v = LolLicenseAgreementLicenseAgreementType::TermsOfUse_e;
      return;
    } 
  }
} 