#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolLicenseAgreementLicenseAgreementType {  
    Eula_e = 0,
    TermsOfUse_e = 1,
  };
  inline void to_json(json& j, const LolLicenseAgreementLicenseAgreementType& v) {
    if(v == LolLicenseAgreementLicenseAgreementType::Eula_e) {
      j = "Eula";
      return;
    }
    if(v == LolLicenseAgreementLicenseAgreementType::TermsOfUse_e) {
      j = "TermsOfUse";
      return;
    }
  }
  inline void from_json(const json& j, LolLicenseAgreementLicenseAgreementType& v) {
    if(j.get<std::string>() == "Eula") {
      v = LolLicenseAgreementLicenseAgreementType::Eula_e;
      return;
    } 
    if(j.get<std::string>() == "TermsOfUse") {
      v = LolLicenseAgreementLicenseAgreementType::TermsOfUse_e;
      return;
    } 
  }
}