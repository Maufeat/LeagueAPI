#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RsoAuthPublicClientConfig.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostRsoAuthV2Config (const https::Info& _info_,
      const RsoAuthPublicClientConfig& config /**/ )
  { 
    return { https::Do(_info_, "post", "/rso-auth/v2/config?", { 
    }, { 
    },config) };
  }
} 