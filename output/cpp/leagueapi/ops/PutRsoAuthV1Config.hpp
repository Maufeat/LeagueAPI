#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RsoAuthRSOJWTConfig.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PutRsoAuthV1Config (const https::Info& _info_,
      const RsoAuthRSOJWTConfig& config /**/ )
  { 
    return { https::Do(_info_, "put", "/rso-auth/v1/config?", { 
    }, { 
    },config) };
  }
} 