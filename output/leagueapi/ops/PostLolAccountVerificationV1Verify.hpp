#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolAccountVerificationVerifyResponse.hpp>
#include <leagueapi/definitions/LolAccountVerificationVerifyRequest.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolAccountVerificationVerifyResponse> PostLolAccountVerificationV1Verify (const https::Info& _info_,
      const LolAccountVerificationVerifyRequest& VerifyRequest /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-account-verification/v1/verify?", { 
    }, { 
    },VerifyRequest) };
  }
} 