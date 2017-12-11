#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/cookie.hpp>

namespace leagueapi::op {
  /*Set a cookie.*/
  static https::Result<json> PostCookieJarV1Cookies (const https::Info& _info_,
      const std::vector<cookie>& cookie /*Cookie to set*/ )
  { 
    return { https::Do(_info_, "post", "/cookie-jar/v1/cookies?", { 
    }, { 
    },cookie) };
  }
} 