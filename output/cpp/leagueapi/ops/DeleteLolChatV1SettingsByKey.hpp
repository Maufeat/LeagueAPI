#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolChatV1SettingsByKey (const https::Info& _info_,
      const std::string& key /**/ ,
      const std::optional<bool>& doAsync = std::nullopt /**/)
  { 
    return { https::Do(_info_, "delete", "/lol-chat/v1/settings/"+to_string(key)+"?", { 
      { "doAsync", to_string(doAsync) },
    }, { 
    }) };
  }
} 