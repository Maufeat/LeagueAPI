#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RsoAuthAuthorization.hpp>
#include <leagueapi/definitions/RsoAuthRSOPlayerCredentials.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RsoAuthAuthorization> PostRsoAuthV1AuthorizationGas (const https::Info& _info_,
      const RsoAuthRSOPlayerCredentials& creds /**/ )
  { 
    return { https::Do(_info_, "post", "/rso-auth/v1/authorization/gas?", { 
    }, { 
    },creds) };
  }
} 