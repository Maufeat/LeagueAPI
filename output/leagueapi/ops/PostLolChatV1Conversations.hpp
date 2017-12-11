#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChatConversationResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChatConversationResource> PostLolChatV1Conversations (const https::Info& _info_,
      const LolChatConversationResource& conversation /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-chat/v1/conversations?", { 
    }, { 
    },conversation) };
  }
} 