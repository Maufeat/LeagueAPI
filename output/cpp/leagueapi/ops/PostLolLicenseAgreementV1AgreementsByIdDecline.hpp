#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLicenseAgreementV1AgreementsByIdDecline (const https::Info& _info_,
      const std::string& id /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-license-agreement/v1/agreements/"+to_string(id)+"/decline?", { 
    }, { 
    }) };
  }
} 