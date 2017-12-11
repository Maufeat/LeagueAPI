#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolAccountVerificationDeviceResponse.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolAccountVerificationDeviceResponse> GetLolAccountVerificationV1Device (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-account-verification/v1/device?", { 
    }, { 
    }) };
  }
} 