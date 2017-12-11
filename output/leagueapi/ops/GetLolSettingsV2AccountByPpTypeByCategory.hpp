#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolSettingsV2AccountByPpTypeByCategory (const https::Info& _info_,
      const std::string& ppType /**/,
      const std::string& category /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-settings/v2/account/"+to_string(ppType)+"/"+to_string(category)+"?", { 
    }, { 
    },"") };
  }
} 