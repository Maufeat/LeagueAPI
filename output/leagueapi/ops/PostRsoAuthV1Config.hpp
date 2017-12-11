#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RsoAuthRSOJWTConfig.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostRsoAuthV1Config (const https::Info& _info_,
      const RsoAuthRSOJWTConfig& config /**/ )
  { 
    return { https::Do(_info_, "post", "/rso-auth/v1/config?", { 
    }, { 
    },config) };
  }
} 