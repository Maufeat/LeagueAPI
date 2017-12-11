#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolSettingsV1AccountByCategory (const https::Info& _info_,
      const std::string& category /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-settings/v1/account/"+to_string(category)+"?", { 
    }, { 
    },"") };
  }
} 