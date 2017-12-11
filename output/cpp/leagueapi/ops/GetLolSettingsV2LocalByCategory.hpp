#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolSettingsV2LocalByCategory (const https::Info& _info_,
      const std::string& category /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-settings/v2/local/"+to_string(category)+"?", { 
    }, { 
    }) };
  }
} 