#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatAuthResourcePlain.hpp>
#include <leagueapi/definitions/LolChatSessionResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChatSessionResource> PostLolChatV1SessionPlain (const https::Info& _info_,
      const LolChatAuthResourcePlain& auth /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-chat/v1/session/plain?", { 
    }, { 
    },auth) };
  }
} 