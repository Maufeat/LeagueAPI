#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolChatV1Settings (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-chat/v1/settings?", { 
    }, { 
    }) };
  }
} 