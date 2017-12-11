#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolAccountVerificationInvalidateResponse.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolAccountVerificationInvalidateResponse> PostLolAccountVerificationV1Invalidate (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-account-verification/v1/invalidate?", { 
    }, { 
    },"") };
  }
} 