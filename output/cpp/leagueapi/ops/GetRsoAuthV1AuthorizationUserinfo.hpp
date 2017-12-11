#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RsoAuthUserInfo.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RsoAuthUserInfo> GetRsoAuthV1AuthorizationUserinfo (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/rso-auth/v1/authorization/userinfo?", { 
    }, { 
    }) };
  }
} 