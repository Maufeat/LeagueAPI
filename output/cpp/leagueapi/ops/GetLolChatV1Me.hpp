#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatUserResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChatUserResource> GetLolChatV1Me (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-chat/v1/me?", { 
    }, { 
    }) };
  }
} 