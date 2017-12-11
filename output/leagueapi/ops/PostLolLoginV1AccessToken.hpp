#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLoginAccessToken.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLoginV1AccessToken (const https::Info& _info_,
      const LolLoginAccessToken& AccessToken /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-login/v1/access-token?", { 
    }, { 
    },AccessToken) };
  }
} 