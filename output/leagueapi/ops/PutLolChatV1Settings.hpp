#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PutLolChatV1Settings (const https::Info& _info_,
      const json& data /**/ ,
      const std::optional<bool>& doAsync = std::nullopt /**/)
  { 
    return { https::Do(_info_, "put", "/lol-chat/v1/settings?", { 
      { "doAsync", https::to_string(doAsync) },
    }, { 
    },data) };
  }
} 