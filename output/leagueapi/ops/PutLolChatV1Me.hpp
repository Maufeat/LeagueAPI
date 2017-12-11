#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatUserResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChatUserResource> PutLolChatV1Me (const https::Info& _info_,
      const LolChatUserResource& me /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-chat/v1/me?", { 
    }, { 
    },me) };
  }
} 