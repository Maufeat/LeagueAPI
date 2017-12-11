#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatSessionResource.hpp>
#include <leagueapi/definitions/LolChatAuthResourceRsoAccessToken.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChatSessionResource> PostLolChatV1SessionRso (const https::Info& _info_,
      const LolChatAuthResourceRsoAccessToken& auth /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-chat/v1/session/rso?", { 
    }, { 
    },auth) };
  }
} 