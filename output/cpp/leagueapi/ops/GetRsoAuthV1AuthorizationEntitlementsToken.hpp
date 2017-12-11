#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RsoAuthEntitlementsToken.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RsoAuthEntitlementsToken> GetRsoAuthV1AuthorizationEntitlementsToken (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/rso-auth/v1/authorization/entitlements-token?", { 
    }, { 
    }) };
  }
} 