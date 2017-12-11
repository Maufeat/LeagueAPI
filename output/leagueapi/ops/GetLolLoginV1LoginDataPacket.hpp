#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolLoginV1LoginDataPacket (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-login/v1/login-data-packet?", { 
    }, { 
    },"") };
  }
} 