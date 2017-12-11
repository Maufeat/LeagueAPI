#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetRsoAuthV1AuthorizationGasToken (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/rso-auth/v1/authorization/gas-token?", { 
    }, { 
    },"") };
  }
} 