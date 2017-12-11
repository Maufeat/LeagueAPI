#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RsoAuthAccessToken.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RsoAuthAccessToken> GetRsoAuthV1AuthorizationAccessToken (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/rso-auth/v1/authorization/access-token?", { 
    }, { 
    }) };
  }
} 