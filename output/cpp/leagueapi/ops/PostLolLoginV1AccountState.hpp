#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolLoginV1AccountState (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-login/v1/account-state?", { 
    }, { 
    }) };
  }
} 