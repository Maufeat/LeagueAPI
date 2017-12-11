#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatErrorResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolChatErrorResource>> GetLolChatV1Errors (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-chat/v1/errors?", { 
    }, { 
    }) };
  }
} 