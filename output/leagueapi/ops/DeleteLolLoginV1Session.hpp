#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> DeleteLolLoginV1Session (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "delete", "/lol-login/v1/session?", { 
    }, { 
    },"") };
  }
} 