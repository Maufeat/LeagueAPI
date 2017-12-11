#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolAccountVerificationIsVerifiedResponse.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolAccountVerificationIsVerifiedResponse> GetLolAccountVerificationV1IsVerified (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-account-verification/v1/is-verified?", { 
    }, { 
    },"") };
  }
} 