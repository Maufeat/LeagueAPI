#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolEmailVerificationV1ConfirmEmail (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-email-verification/v1/confirm-email?", { 
    }, { 
    },"") };
  }
} 