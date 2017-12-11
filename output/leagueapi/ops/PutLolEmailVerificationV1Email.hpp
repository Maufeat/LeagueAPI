#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolEmailVerificationEmailUpdate.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PutLolEmailVerificationV1Email (const https::Info& _info_,
      const LolEmailVerificationEmailUpdate& EmailUpdate /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-email-verification/v1/email?", { 
    }, { 
    },EmailUpdate) };
  }
} 