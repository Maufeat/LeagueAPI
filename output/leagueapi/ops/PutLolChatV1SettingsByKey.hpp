#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PutLolChatV1SettingsByKey (const https::Info& _info_,
      const std::string& key /**/,
      const json& value /**/ ,
      const std::optional<bool>& doAsync = std::nullopt /**/)
  { 
    return { https::Do(_info_, "put", "/lol-chat/v1/settings/"+to_string(key)+"?", { 
      { "doAsync", https::to_string(doAsync) },
    }, { 
    },value) };
  }
} 