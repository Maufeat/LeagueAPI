#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<bool> GetLolSettingsV2Ready (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-settings/v2/ready?", { 
    }, { 
    }) };
  }
} 