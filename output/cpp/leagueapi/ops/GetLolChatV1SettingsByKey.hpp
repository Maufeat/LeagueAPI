#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolChatV1SettingsByKey (const https::Info& _info_,
      const std::string& key /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-chat/v1/settings/"+to_string(key)+"?", { 
    }, { 
    }) };
  }
} 