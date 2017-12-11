#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RsoAuthAuthorization.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RsoAuthAuthorization> GetRsoAuthV1Authorization (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/rso-auth/v1/authorization?", { 
    }, { 
    }) };
  }
} 