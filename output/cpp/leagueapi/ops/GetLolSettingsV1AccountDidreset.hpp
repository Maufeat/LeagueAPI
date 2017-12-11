#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<bool> GetLolSettingsV1AccountDidreset (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-settings/v1/account/didreset?", { 
    }, { 
    }) };
  }
} 