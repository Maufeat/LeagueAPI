#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RsoAuthRegionStatus.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RsoAuthRegionStatus> GetRsoAuthV1StatusByPlatformId (const https::Info& _info_,
      const std::string& platformId /**/ )
  { 
    return { https::Do(_info_, "get", "/rso-auth/v1/status/"+to_string(platformId)+"?", { 
    }, { 
    }) };
  }
} 