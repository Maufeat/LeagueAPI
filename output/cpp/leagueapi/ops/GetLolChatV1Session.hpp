#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatSessionResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChatSessionResource> GetLolChatV1Session (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-chat/v1/session?", { 
    }, { 
    }) };
  }
} 