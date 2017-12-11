#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RsoAuthRSOJWTConfig.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RsoAuthRSOJWTConfig> GetRsoAuthV1ConfigByPlatformId (const https::Info& _info_,
      const std::string& platformId /**/ )
  { 
    return { https::Do(_info_, "get", "/rso-auth/v1/config/"+to_string(platformId)+"?", { 
    }, { 
    }) };
  }
} 