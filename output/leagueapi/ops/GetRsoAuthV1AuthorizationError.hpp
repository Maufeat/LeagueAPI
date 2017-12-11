#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RsoAuthAuthError.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RsoAuthAuthError> GetRsoAuthV1AuthorizationError (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/rso-auth/v1/authorization/error?", { 
    }, { 
    },"") };
  }
} 