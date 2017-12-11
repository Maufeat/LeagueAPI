#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/cookie.hpp>

namespace leagueapi::op {
  /*Get all cookies.*/
  static https::Result<std::vector<cookie>> GetCookieJarV1Cookies (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/cookie-jar/v1/cookies?", { 
    }, { 
    },"") };
  }
} 