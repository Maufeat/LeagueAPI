#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RsoAuthAuthorization.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RsoAuthAuthorization> PostRsoAuthV1AuthorizationRefresh (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/rso-auth/v1/authorization/refresh?", { 
    }, { 
    }) };
  }
} 