#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolAccountVerificationSendTokenRequest.hpp>
#include <leagueapi/definitions/LolAccountVerificationSendTokenResponse.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolAccountVerificationSendTokenResponse> PostLolAccountVerificationV1SendToken (const https::Info& _info_,
      const LolAccountVerificationSendTokenRequest& SendTokenRequest /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-account-verification/v1/send-token?", { 
    }, { 
    },SendTokenRequest) };
  }
} 