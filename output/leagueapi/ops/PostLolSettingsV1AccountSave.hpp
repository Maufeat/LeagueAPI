#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolSettingsV1AccountSave (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-settings/v1/account/save?", { 
    }, { 
    },"") };
  }
} 