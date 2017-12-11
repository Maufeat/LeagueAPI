#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolEmailVerificationEmailVerificationSession.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolEmailVerificationEmailVerificationSession> GetLolEmailVerificationV1Email (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-email-verification/v1/email?", { 
    }, { 
    },"") };
  }
} 