#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLicenseAgreementLicenseAgreement.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLicenseAgreementLicenseAgreement>> GetLolLicenseAgreementV1AllAgreements (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-license-agreement/v1/all-agreements?", { 
    }, { 
    },"") };
  }
} 