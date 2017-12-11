#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RsoAuthIdToken.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RsoAuthIdToken> GetRsoAuthV1AuthorizationIdToken (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/rso-auth/v1/authorization/id-token?", { 
    }, { 
    }) };
  }
} 